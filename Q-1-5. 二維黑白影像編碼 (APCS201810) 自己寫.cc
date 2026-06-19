#include <bits/stdc++.h>
using namespace std;
#define N 11001000
char c[N];
int idx {0};
int sum(int n)
{
    int num {0};
    int len = n / 2;
    if (len < 0) return 0;
    for (int j = 0; j < 4; j++)
    {
        idx++;
        if (c[idx] == '0')
        {
        }
        else if (c[idx] == '1')
        {
            int squre = len * len;
            num+= squre;
        }
        else if (c[idx] == '2')
        {
            num += sum(len);
        }
        else return -1;
    }
    return num;
}

int main()
{
    int n;
    scanf(" %s%d", c, &n);
    if (c[idx] == '0')
    {
        // cout << 0  << endl;
        printf("%c", '0');
    }
    else if (c[idx] == '1')
    {
        // cout <<  1 << endl;
        printf("%d", n * n);
    }
    else if (c[idx] == '2')
    {
        printf("%d", sum(n));
    }
    else return -1;
    // system("pause");
}
