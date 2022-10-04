#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    long long int n, x;
    cin>>n>>x;
       map<int,int> s;
     for(int i=0; i<n; i++)
     {
        int value;
        cin>>value;
        if(s.count(x-value))
        {
            cout<<i+1<<" "<<s[x-value]<<endl;
            return 0;
        } 
        s[value]=i+1;
     }   
     cout<<"IMPOSSIBLE";
    return 0;
}