#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
void solve()
{
    
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    ll n;
    cin>>n;
    ll nums[n];
    for(int i=0; i<n; i++) cin>>nums[i];

        ll sum=0, maxm=-1000000000;
        for(auto it : nums)
        {
            sum+=it;
            maxm=max(maxm,sum);
            if(sum<0)
                sum=0;
        }
    cout<<maxm;
    return 0;
}