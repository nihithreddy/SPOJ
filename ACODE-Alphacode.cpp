#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define repk(i,a,b,k) for(int i=(a);i<(b);i+=k)
#define forn(i,n) for(int i=(a);i<(b);i++)
#define all(c) (c).begin(),(c).end()
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
        string s;
        while(getline(cin,s)){
            if(s=="0") break;
            int n =(int)s.size();
            int dp[n+1]={0};
            dp[0]=dp[1]=1;
            for(int i=2;i<=n;i++){
                if(s[i-1]>'0') dp[i]=dp[i-1];
                if(s[i-2]=='1'||(s[i-2]=='2'&&s[i-1]<'7')) dp[i]+=dp[i-2];
            }
            cout<<dp[n]<<"\n";
        }
	return 0;
}
