# include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, t;
    char c;
    cin >> n >> m;
    pair <int, int> x, o;
    t=0;
    if (m%2==1){
        x.first = 1;
        x.second = 1;
        o.first = 2;
        o.second = 1; 
            while (t < n*m){
            cin >> c;
            if (c == 'X'){
                cout << x.first << " " << x.second << "\n";
                if (x.first >= n-1){
                    if (x.second % 4 < 2){
                        x.first = 1;
                    } else {
                        x.first = 2;                       
                    }
                    x.second += 1;
                } else {
                    x.first += 2;
                }
            } else {
                cout << o.first << " " << o.second << "\n";
                if (o.first >= n-1){
                    if (o.second % 4 < 2){
                        o.first = 2;
                    } else {
                        o.first = 1;                       
                    }
                    o.second += 1;
                } else {
                    o.first += 2;
                }
            }
            cout << flush;
            t++;
        }
    } else {
        x.first = 1;
        x.second = 1;
        o.first = 1;
        o.second = 2;
            while (t < n*m){
            cin >> c;
            if (c == 'X'){
                cout << x.first << " " << x.second << "\n";
                if (x.second >= m-1){
                    if (x.first % 4 < 2){
                        x.second = 1;
                    } else {
                        x.second = 2;
                    }
                    x.first += 1;
                } else {
                    x.second += 2;
                }
    
            } else {
                cout << o.first << " " << o.second << "\n";
                if (o.second >= m-1){
                    if (o.first % 4 < 2){
                        o.second = 2;
                    } else {
                        o.second = 1;
                    }
                    o.first += 1;
                } else {
                    o.second += 2;
                }
            }
            cout << flush;
            t++;
        }
    }
    return 0;
}
