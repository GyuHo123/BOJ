#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

long long dp[1000001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    dp[1] = 1, dp[2] = 2, dp[3] = 4;

    int mod = 1000000009;

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        for (int i = 4; i <= n; i++) {
            dp[i] = (dp[i - 1] % mod + dp[i - 2] % mod + dp[i - 3] % mod) % mod;
        }
        cout << dp[n] << endl;
    }
}

