//https://www.acmicpc.net/problem/1021
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;
using i64 = long long int;

vector<int> iv;
int op_count = 0;

int pop() {
	int ret = iv[0];
	iv.erase(iv.begin());
	return ret;
}

void lshift() {
	op_count++;
	int x = pop();
	iv.push_back(x);
}

void rshift() {
	op_count++;
	int x = iv.back();
	iv.erase(iv.end() - 1);
	iv.insert(iv.begin(), x);
}

int find(int x) {
	int size = iv.size();
	for (int i = 0; i < size; i++) {
		if (iv[i] == x) {
			if (i <= size / 2) {
				return i;
			} else {
				return -(size - i);
			}
		}
	}
	return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		iv.push_back(i);
	}

	while (m--) {
		int x;
		cin >> x;
		int idx;
		while((idx = find(x)) != 0) {
			if (idx > 0) {
				for (int i = 0;i < idx; i++) {
					lshift();
				}
			} else {
				idx = -idx;
				for (int i = 0;i< idx; i++) {
					rshift();
				}
			}
		}
		//cout << iv.front() << endl;
		pop();
	}
	cout << op_count << "\n";
    return 0;
}
