#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define loop(i, s, n) for(int i = s; i <= n; i++)
#define LOOP(i, s, n) for(int i = s; i < n; i++)
#define MAXN 100001

using namespace std;

int rope[MAXN], maxWegiht, n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;

    loop(i, 0, n - 1){
        cin >> rope[i];
    }
    sort(rope, rope + n);
    loop(i, 0, n - 1){
        maxWegiht = max(maxWegiht, (n - i) * rope[i]);
    }
    cout << maxWegiht;
}
