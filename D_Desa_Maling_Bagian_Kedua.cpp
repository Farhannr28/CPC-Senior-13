# include <bits/stdc++.h>

using namespace std;

int x,y,n,r;
char c;
pair <int, int> a,b,mid;
int turn = 1;

int main(){
    cin >> x >> y >> n;
    a = {x,0};
    b = {0,y};
    while (turn < n+1){
        mid = {min(a.first, b.first) + abs(a.first-b.first)/2, min(a.second, b.second) + abs(a.second-b.second)/2};
        cout << "? " << mid.first << " " << mid.second << "\n";
        cout << flush;
        cin >> r >> c;
        if (r==1){
            b = {max(a.first, b.first), max(a.second, b.second)};
        } else if (r==2){
            b = {min(a.first, b.first), max(a.second, b.second)};
        } else if (r==3){
            b = {min(a.first, b.first), min(a.second, b.second)};
        } else{
            b = {max(a.first, b.first), min(a.second, b.second)};
        } 

        a = mid;

        if (c == 'U'){
            a.second = min(a.second + 1, y);
            b.second = min(b.second + 1, y);
        } else if (c == 'D'){
            a.second = max(a.second - 1, 0);
            b.second = max(b.second - 1, 0);
        } else if (c == 'R'){
            a.first = min(a.first + 1, x);
            b.first = min(b.first + 1, x);
        } else if (c == 'L'){
            a.first = max(a.first - 1, 0);
            b.first = max(b.first - 1, 0);
        } else {
            ;
        }

        if (abs((a.first-b.first) * (a.second-b.second)) == 1){
            turn = n+1;
        }
        turn++;
    }
    cout << "! " << max(a.first, b.first) << " " << max(a.second, b.second) << "\n";
    cout << flush;
    return 0;
}
