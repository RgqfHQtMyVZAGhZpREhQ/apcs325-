#include<bits/stdc++.h>
using namespace std;
int eval()
{
    int x, y;
    char token[7];
    scanf("%s", token);
    if (token[0] == 'f')
    {
        x = eval();
        return 2*x - 1;
    }
    else if (token[0] == 'g')
    {
        x = eval();
        y = eval();
        
        return x + 2*y - 3;
    }
    else
    {
        return atoi(token);
    }
    return 0;
}
int main()
{
    printf("%d\n", eval());
    return 0;
}
