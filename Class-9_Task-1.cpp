//Problem link - https://algo.codemarshal.org/contests/icpc-dhaka-20-preli/problems/J

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 
 

   

void fastIO()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}


void solve(){
	int x;   
	cin>>x;
	int count=0;
	for(int i=0 ; i<=x ; i=i+6){
		 count++;
	}
	
	
	
	
	
	cout<<count<<endl;
	
	
}

int32_t main(){
	
	fastIO();
	
	solve();

} 
