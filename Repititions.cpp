#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
       string s;
    cin>>s;
   long long int count1=1,res=1;
 for(int i=0; i<s.length()-1 ; i++)
 {
    if(s[i]==s[i+1]) 
    {count1++;
    res=max(res,count1);
    }
    
    else 
    count1=1;
  }
     cout<<res;
     return 0;
}