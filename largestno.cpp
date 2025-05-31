#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    int maxi = INT_MIN;

    for(auto it: v){
        if(it > maxi){
            maxi = it;
        }
    }

    cout << maxi;

    return 0;
}