#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    long long int n;
    cin>>n;
   cout<<n<<" ";
    while(n!=1){
        if(n%2!=0)
        {
            n=(n*3)+1;
            cout<<n<<" ";
        }
        else{
          n=n/2;
        cout<<n<<" ";        
        }
      
    }
   
    return 0;
}