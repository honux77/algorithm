#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
using i64 = long long int;

struct People {
        int age;
        string name;
};

bool cmp(const People &a, const People &b) {
        return a.age < b.age;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
        vector <People> a(n);
        for (int i = 0; i < n; i++) {
                People p;
                cin >> p.age >> p.name;
                a[i] = p;
        }
        stable_sort(a.begin(), a.end(), cmp);

        for (int i = 0; i < n; i++) {
                cout << a[i].age << " " << a[i].name << '\n';
        }
    return 0;
}