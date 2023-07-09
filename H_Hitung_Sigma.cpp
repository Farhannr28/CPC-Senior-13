#include <bits/stdc++.h>

using namespace std;

#define ll long long
const ll mod = 1000000007;

//10e9+5 representation = 111011100110101100101000000101

string bin = "111011100110101100101000000101";

ll pow(ll a){
    ll ans = 1;
    for (int i=0; i<30; i++){
        ans = (ans * ans) % mod;
        if (bin[i] == '1'){
            ans = (ans * a) % mod;
        }
    }
    return ans % mod;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll ans = 0;
    ll temp, temp2;
    ll fact[200001];
    fact[1] = 1;
    for (int i = 2; i <= 200000; i++){
        fact[i] = (fact[i-1] * i) % mod;
    }
    int t,n,m,k;
    cin >> t;
    while (t>0){
        cin >> n >> m >> k;
        temp2 = pow((fact[n+m-k]) * (fact[k]) % mod) % mod;
        temp = ((fact[n+m] % mod) * temp2) % mod;
        ans = (ans + temp) % mod;
        t--;
    }
    cout << ans % mod;
}