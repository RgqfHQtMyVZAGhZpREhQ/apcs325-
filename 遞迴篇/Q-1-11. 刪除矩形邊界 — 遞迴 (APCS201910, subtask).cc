#include <bits/stdc++.h>
using namespace std;

int slove(vector<vector<int>> &matrix, int top, int bottom, int left, int right)
{
    if (bottom - top == 1) return 0;
    if (right - left == 1) return 0;
    int t, b, l, r {};
    int cz {},co {};
    int czs {}, cos{};

    for (int i = left; i < right; i++)
    {
        if (matrix[top][i] == 0)
        {
            cz++;
        }
        else
        {
            co++;
        }
        if (matrix[bottom - 1][i] == 0)
        {
            czs++;
        }
        else
        {
            cos++;
        }
    }
    t = min(cz, co);
    b = min(czs, cos);
    cz = co = czs = cos = 0;
    for (int i = top; i < bottom; i++)
    {
        if (matrix[i][left] == 0)
        {
            cz++;
        }
        else
        {
            co++;
        }
        if (matrix[i][right - 1] == 0)
        {
            czs++;
        }
        else
        {
            cos++;
        }
    }
    l = min(cz, co);
    r = min(czs, cos);
    cz = co = czs = cos = 0;

    int total {};
    total = min({ t + slove(matrix, top+1, bottom, left, right),
              b + slove(matrix, top, bottom-1, left, right),
              l + slove(matrix, top, bottom, left+1, right),
              r + slove(matrix, top, bottom, left, right-1) });
    return total;
}

int main()
{
    int m, n {};
    scanf("%d%d", &m, &n);
    vector<vector<int>> matrix (m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("%d", slove(matrix, 0, m, 0, n));
}
