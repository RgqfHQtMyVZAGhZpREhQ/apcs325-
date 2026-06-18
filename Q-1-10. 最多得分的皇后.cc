#include <bits/stdc++.h>
using namespace std;
int n {};
int maxq(vector<vector<int>>& score, int k, vector<int> &p)
{
    int best {};
    if (k >= n) return 0;
    int total{};
    int empt{};
    p[k] = -1;
    empt = maxq(score, k +1, p);

    //檢查對角線
    vector<bool> vaild(n);
    for (int c = 0; c < n; c++) vaild[c] = true;
    for (int j = 0; j < k; j++)
    {
        if (p[j] == -1) continue;
        vaild[p[j]] = false;
        int i = p[j] + (k - j);
        if (i < n) vaild[i] = false;
        i = p[j] - (k - j);
        if (i >=0) vaild[i] = false;
    }
    for(int i = 0; i < n; i++)
    {
        if (vaild[i] )
        {
            p[k] = i;
            total = maxq(score, k +1, p) + score[k][i];
            best = max((max (total , best), empt));
        }
    }
    return best;
}



int main()
{
    scanf("%d", &n);
    vector<vector<int>> score(n, vector<int>(n));
    vector<int> p(n);
    // 讀入二為陣列
    for(int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &score[i][j]);
        }
    }
    printf("%d", maxq(score, 0, p));

    return 0;
}
