#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    long long int n,sum=0,sum1=0;
    cin>>n;
  int arr[n];
  for(int i=1; i<n; i++)
  cin>>arr[i];

for(int i=1; i<n; i++)
sum+=arr[i];
  
  for(int i=1; i<=n ;i++)
sum1+=i;
  cout<<sum1-sum;
    return 0;
}