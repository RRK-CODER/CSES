#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;

void solve(int src, int dest, int aux,int n)
{
    if(n<=0) return;
    solve(src,aux,dest,n-1);
    cout<<src<<" "<<dest<<endl;
    solve(aux,dest,src,n-1);
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    long long int n,res=0;
    cin>>n;
  cout<<(1<<n)-1<<endl;
  solve(1,3,2,n);

    return 0;
}