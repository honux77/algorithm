#include <cstdio>
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

int sr = 0;
int sc = 0;
int v = 1;
int delta = 1;
int csize = 1;
bool dc = true;
int a[50][5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int r1, c1, r2, c2, mr, mc;
    cin >> r1 >> c1 >> r2 >> c2;
    mr = -r1;
    mc = -c1;
    int fillCount = (r2 - r1 + 1) * (c2 - c1 + 1);
    int currentFill = 0;
    int vmax;

    while (currentFill < fillCount)
    {
        for (int t = 0; t < 2; t++)
        {
            for (int i = 0; i < csize; i++)
            {
                if (sr >= r1 && sr <= r2 && sc >= c1 && sc <= c2)
                {
                    a[sr + mr][sc + mc] = v;
                    currentFill++;
                    vmax = v;
                }

                //cerr << sr << " " << sc << " " << v << " " << currentFill << "\n";
                v++;
                if (dc)
                    sc += delta;
                else
                    sr += delta;
            }
            dc = !dc;
            delta *= -1;
        }
        delta *= -1;
        csize++;
    }

    int w = 0;
    while (vmax != 0)
    {
        vmax /= 10;
        w++;
    }

    for (int i = 0; i <= r2 - r1; i++)
    {
        for (int j = 0; j <= c2 - c1; j++)
        {
            cout << setw(w) << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}