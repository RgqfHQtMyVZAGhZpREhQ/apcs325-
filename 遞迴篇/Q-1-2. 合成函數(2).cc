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
    int x, y, z;
    scanf("%c", &c);
    if (c == 'f')
    {
        x = eval();
        return 2*x - 3;
    }
    else if (c == 'g')
    {
        x = eval();
        y = eval();
        return 2*x + y - 7;
    }
    else if (c == 'h')
    {
        x = eval();
        y = eval();
        z = eval();
        return 3*x - 2*y + z;
    }
    else 
    {
        return 0;
    }
}
int main()
{
    printf("%d\n", eval());
    return 0;
}
