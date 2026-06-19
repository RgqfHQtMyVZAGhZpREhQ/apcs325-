#include <bits/stdc++.h>
using namespace std;

string s;
int idx = 0;

long long solve(int n) {
    char c = s[idx++]; 
    
    if (c == '0') return 0;
    if (c == '1') return 1LL * n * n;
    
    long long ans = 0;
    for (int i = 0; i < 4; ++i) {
        ans += solve(n / 2);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    if (cin >> s >> n) {
        cout << solve(n) << "\n";
    }
    return 0;
}
