#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    string c1, c2; cin >> c1 >> c2;

    reverse(all(c2));

    put((c1 == c2 ? "YES" : "NO"));
}
