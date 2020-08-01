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
        int t;cin>>t;
        while(t--){
            string s;
            cin>>s;
            int i=0,j=s.size()-1;
            while(i<j){
                if(s[i]!=s[j]){
                    int d=min(s[i],s[j])-'0';
                    s[i]=s[j]=(char)(d+'0');
                }
                i++;
                j--;
            }
            if()
        }
	return 0;
}
