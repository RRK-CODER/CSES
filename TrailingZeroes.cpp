#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    long long int n,res=0;
    cin>>n;
  for(int i=5; i<=n; i=i*5)
    res=res+n/i;
    cout<<res;
    return 0;
}