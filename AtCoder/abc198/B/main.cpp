#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    string n; cin >> n;

    while(n.back() == '0') n.pop_back();

    auto t = n;
    reverse(all(t));

    if (t == n) put("Yes");
    else put("No");
}