#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
       long long int n,j=0;
    cin>>n;
  long long int arr[n],z=0,x=0;
  if(n==1) cout<<"1";
  else if(n<4) cout<<"NO SOLUTION";
  else{
    if(n%2==0)
    {
 arr[0]=2;
  while(arr[j]<n)
        {
            arr[j+1]=arr[j]+2;
            j++;
        }
    z=j+1;
   while (z<n)
   {
    arr[z]=arr[x]-1;
    z++;
    x++;
}
 for(int i=0; i<n; i++)
     cout<<arr[i]<<" ";
     return 0;
    }
    else{
  arr[0]=1;
      while(arr[j]<n)
        {
            arr[j+1]=arr[j]+2;
            j++;
        }
    z=j+1;
   while (z<n)
   {
    arr[z]=arr[x]+1;
    z++;
    x++;
}
 for(int i=0; i<n; i++)
     cout<<arr[i]<<" ";
     return 0;
  }
    }
  
  
}