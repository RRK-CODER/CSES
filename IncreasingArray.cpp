#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
       long long int n,diff=0, res=0;
    cin>>n;
  long long int arr[n];
     for(int i=0; i<n; i++)
     cin>>arr[i];
   for(int i=0; i<n-1; i++)
{
    if(arr[i]>arr[i+1])
    {
        diff=arr[i]-arr[i+1];
        arr[i+1]=arr[i];
        diff+=res;
        res=diff;
    }
    else
    continue;
}

     cout<<res;
     return 0;
}