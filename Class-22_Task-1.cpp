//Problem link - https://codeforces.com/contest/514/problem/A


#include <bits/stdc++.h>
#include <string>
using namespace std;
 
#define endl '\n'
#define int long long 
 
 
   
 
void fastIO()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
 
 
void solve(){
	
	string s;
	cin>>s;
	
	vector<int>v;
	
	
	for(int i=0 ; i<s.size()   ; ++i){
		int num ;
		num = s[i] - '0';
		v. push_back(num);
	}
	
	if(v[0] == 9) cout<<"9";
	else {
		if((9-v[0]) <= v[0]){
			cout<<(9-v[0]);
		}else{
			cout<<v[0];
		}
	}
		
	
	for(int i=1 ; i<s.size()  ; ++i){
		int x = (9 - v[i]);
		if(x<=v[i] ) cout<<x;
		else cout<<v[i];
	}
	
	
	
}
 
 
 
 
 
int32_t main(){
	
	fastIO();
	
	
		solve();
 
	
	
	
} 
