#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    ll n,res=0,x,count;
    cin>>n>>x;
    ll arr[n];
     map<int,int> s;
     for(int i=0; i<n; i++) cin>>arr[i]; 
      if(x==res) count++;
   if(s.find(res-x)!=s.end()) 
   { count++;
   s.insert(res); }
  
 cout<<res;
      return 0;

}