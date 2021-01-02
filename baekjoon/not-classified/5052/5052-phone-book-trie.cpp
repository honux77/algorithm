#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <cstring>

using namespace std;

//http://jason9319.tistory.com/129
//https://www.geeksforgeeks.org/trie-insert-and-search/

struct Trie {
	Trie *next[10];
	bool term;

	Trie() : term(false) {
		for (int i = 0; i < 10; i++) {
            next[i] = nullptr;
        }
	}
	~Trie() {
		for(int i = 0;i < 10; i++) {
			if(next[i]) {
				delete next[i];
			}
		}
	}

	void insert(const string &key) {
		Trie *curr = this;
		for (auto c: key) {
			int index = c - '0';
			if (!curr->next[index]) {
				curr->next[index] = new Trie();
			}
			curr = curr->next[index];
		}
		curr->term = true;
	}

	//modified version to solve problem
	bool find(const string &key) {
		Trie *curr = this;
		for (auto c: key) {
			if (curr->term) {
				return true;
			}
			int index = c - '0';
			curr = curr->next[index];
		}
	return false;
	}
};

void solve(int n) {
	vector<string> input(n);
	Trie *root = new Trie();

	for (int i = 0; i < n; i++) {
		cin >> input[i];
		root->insert(input[i]);
	}

	for (int i = 0; i < n; i++) {
		if(root->find(input[i])) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int c;
	cin >> c;
	while(c--) {
		int n;
		cin >> n;
		solve(n);
	}
	return 0;
}
