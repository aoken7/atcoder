#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    char x, y;
    cin >> x >> y;
    if(x > y){
        put(">");
    }else if(x < y){
        put("<");
    }else{
        put("=");
    }
}
