#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define repk(i,a,b,k) for(int i=(a);i<(b);i+=k)
#define forn(i,n) for(int i=(a);i<(b);i++)
#define all(c) (c).begin(),(c).end()
#define clear(c) (c).clear()
#define pb push_back
#define ff first
#define ss second
#define endl "\n"
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pii> vpii;
bool check(string s){
    int n = s.size();
    rep(i,0,n/2){
        if(s[i]!=s[n-i-1]){
            return 0;
        }
    }
    return 1;
}
int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        int t,n,q,a,cnt=1;
        string s;
        char ch;
        cin>>t;
        while(t--){
            cin>>n>>s;
            cin>>q;
            cout<<"Case "<<cnt<<":"<<"\n";
            rep(i,0,q){
                cin>>a>>ch;
                s[--a]=ch;
                if(check(s)) cout<<"YES\n";
                else cout<<"NO\n";
            }
            ++cnt;

        }
	return 0;
}
