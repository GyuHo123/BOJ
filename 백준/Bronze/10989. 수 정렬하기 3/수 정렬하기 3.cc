#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int arr[10001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;



    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        arr[input]++;
    }

    for(int i = 1; i < 10001; i++){
        for(int j = 0; j < arr[i]; j++){
            cout << i << endl;
        }
    }

}