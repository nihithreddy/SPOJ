#include<bits/stdc++.h>
using namespace std;
int main(){
   for(int i=0;i<2;i++){
	string a,b;
	cin>>a>>b;
	int n=a.size();
	int m=b.size();
	int f=0,j=0;
	for(int i=0;i<=n-m;i++){
		for(j=0;j<m;j++){
			if(a[i+j]!=b[j]) break;
		}
		if(j==m){
		   f = 1;
			break;
		}
	}
	cout<<f<<"\n";
	}
	return 0;
}