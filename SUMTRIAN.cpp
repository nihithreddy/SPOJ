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
int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        int t,n;
        cin>>t;
        while(t--){
              cin>>n;
              int a[n][n];
              memset(a,0,sizeof(a));
              rep(i,0,n){
                  rep(j,0,i+1) cin>>a[i][j];
              }
              /*rep(i,0,n){
                  rep(j,0,n) cout<<a[i][j]<<" ";
                  cout<<"\n";
              }*/
              rep(i,1,n){
                  rep(j,0,i+1){
                      if(j==0) a[i][j]+=a[i-1][j];
                      else a[i][j]+=max(a[i-1][j],a[i-1][j-1]);
                  }
              }
              /*rep(i,0,n){
                  rep(j,0,n) cout<<a[i][j]<<" ";
                  cout<<"\n";
              }*/
              int mx = 0;
              rep(i,0,n){
                  mx=max(mx,a[n-1][i]);
              }
              cout<<mx<<"\n";
        }
	return 0;
}
