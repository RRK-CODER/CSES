#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    long long n,res;
   set<long long> s;
    cin>>n;
 long long arr[n];
 for(long long i=0; i<n; i++){
 cin>>arr[i];
 s.insert(arr[i]);
 }
 res=s.size();
 cout<<res;
    return 0;
}