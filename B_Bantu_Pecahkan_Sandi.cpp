# include <bits/stdc++.h>

using namespace std;

#define ll long long

map <ll, ll> umap;
vector <pair<ll,ll>> sandi;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll sum = 0;
    ll n,m;
    ll temp;
    ll initial = 0;
    ll ans;
    cin >> n >> m;
    ll a[n], b;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<n; i++){
        cin >> b;
        initial += (a[i] % m) * b;
        sandi.push_back({b, a[i]});
        sum += b;
    }


    for (auto u : sandi){
        umap[m-(u.second % m)-1] += (u.first)*m;
    }

    ans = initial;
    temp = 0;
    for (auto u : umap){
        if (u.second >= sum){
            ans = max(ans, (initial + (u.first*sum) - temp));
        }
        temp += u.second;
    }
    cout << ans;
}