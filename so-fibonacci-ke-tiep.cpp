#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll f[100];

void fb(ll n){
    
    f[0] = 1;
    f[1] = 1;
    for(int i = 2; i<=n; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
    return;
}
bool check(ll n){
    int i=2;
    while(n >= f[i]){
        if(n == f[i]){
            return true;
        }
        i++;
    }
    return false;
}

int main(){
    fb(100);

    int n;
    cin >> n;
    if (n <= 3){
        cout << 4 << endl;
        return 0;
    }
    else {
        if (check(n + 1)){
            cout << n + 2 << endl;    // 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987
        }
        else cout << n + 1 << endl;
    }
    return 0;
}
