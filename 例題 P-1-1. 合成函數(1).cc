#include<bits/stdc++.h>
using namespace std;
int eval()
{
    int val;
    if (scanf("%d", &val) == 1)
    {
            return val;
    }
    char c;
    int x, y;
    scanf("%c", &c);
    if (c == 'f')
    {
        x = eval();
        return 2*x - 1;
    }
    if (c == 'g')
    {
        x = eval();
        y = eval();
        return x + 2*y - 3;
    }
    return 0;
}
int main()
{
    printf("%d\n", eval());
    return 0;
}
