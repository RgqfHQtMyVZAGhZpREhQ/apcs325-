#include <bits/stdc++.h>
using namespace std;

long long P{};
long long A[26];
int n{};
long long ans{}; 

void rec(int i, long long sum) 
{
    if (sum > P) return; // 這個我當初也沒考慮到，ai寫的，剪枝

    if (i >= n) 
    {
        if (ans < sum) 
        {
            ans = sum;
        }
        return;
    }
    
    rec(i + 1, sum + A[i]);
    rec(i + 1, sum);
}

int main()
{
    if (scanf("%d%lld", &n, &P) != EOF) 
    {
        for (int i = 0; i < n; i++) 
        {
            scanf("%lld", &A[i]);
        }
        
        ans = 0;
        rec(0, 0); 
        
        printf("%lld\n", ans);
    }
    return 0;
}
