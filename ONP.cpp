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
bool pre(char ch){
    if(ch=='^') return 2;
    if(ch=='*'||ch=='/') return 1;
    return 0;
}
int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        int n;
        string s;
        cin>>n;
        rep(i,0,n){
            cin>>s;
            string postfix="";
            stack<char> st;
            rep(j,0,(int)s.size()){
                if(s[j]>='a'&&s[j]<='z'){
                    postfix+=s[j];
                }
                else if(s[j]=='('){
                    st.push(s[j]);
                }
                else if(s[j]=='+'||s[j]=='-'||s[j]=='*'||s[j]=='/'||s[j]=='^'){
                     while(!st.empty()&&st.top()!='('&&pre(st.top())>pre(s[j])){
                            postfix+=st.top();
                            st.pop();
                    }
                    st.push(s[j]);
                }
                else{
                    while(!st.empty()&&st.top()!='('){
                         postfix+=st.top();
                         st.pop();
                    }
                    st.pop();
                }
            }
            while(!st.empty()&&st.top()!='('){
                    postfix+=st.top();
                    st.pop();
            }
            st.pop();
            cout<<postfix<<"\n";
        }
	return 0;
}
