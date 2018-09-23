//https://www.acmicpc.net/problem/2941

#include <cstdio>
#include <cstring>
using namespace std;

char s[102];

int main()
{
	scanf("%s", s);
	int count = 0;
	int n = strlen(s);

	for (int i = 0; i < n; i++) {
		if (s[i] == 'c') {
			if (s[i + 1] == '-' ||
				s[i + 1] == '=') {
				i++;
			}
		}

		if (s[i] == 'd') {
			if (s[i + 1] == 'z' && s[i + 2] == '=') {
				i += 2;
			}
			else if (s[i + 1] == '-') {
				i++;
			}
		}

		if (s[i + 1] == 'j' && (s[i] == 'l' || s[i] == 'n')) {
			i++;
		}

		if ((s[i] == 's' || s[i] == 'z') && s[i + 1] == '=') {
			i++;
		}
		count++;
	}

	printf("%d\n", count);
	return 0;
}