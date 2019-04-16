#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>

using namespace std;

int gnum = 1;
vector <int>istack;
vector <char>oplog;

void push() {
	istack.push_back(gnum);
	gnum++;	
	oplog.push_back('+');
}

int pop() {
	if (istack.size() == 0) return -1;	
	oplog.push_back('-');	
	int ret = istack.back();
	istack.pop_back();	
	return ret;
}

int peek() {
	if (istack.size() == 0) return -1;
	return istack.back();
}

int main(void) {
	int n;	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int v;
		scanf("%d", &v);
		while (v > peek()) {
			push();
		}
		if (v == peek()) {
			pop();
		}
		else {
			printf("NO\n");
			return 0;
		}		
	}
	for (auto c : oplog) {
		printf("%c\n", c);
	}
	return 0;
}