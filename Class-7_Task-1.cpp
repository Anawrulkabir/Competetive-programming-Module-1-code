//Problem link - https://www.beecrowd.com.br/judge/en/problems/view/1005

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
	float x,y;
	cin>>x>>y;
	
	float z = (x*3.5+y*7.5)/(3.5+7.5);
	
	cout<<fixed<<setprecision(5)<<"MEDIA = "<<z<<endl;
	
	
}

int32_t main(){
	
	fastIO();
	
	solve();

} 
