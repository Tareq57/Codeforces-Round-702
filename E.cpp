//BISMILLAH
//RABBI JIDNI ILMA
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ull  unsigned long long
#define vll  vector <long long>
#define pll pair <long long,long long>
#define f first
#define s second
#define up upper_bound
#define lp lower_bound
#define pq priority_queue
#define inf 1e10
#define minf -1e18
#define pi 3.14159265
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    fastio
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vll res;
        vector<pll>vec;
        for(ll i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            vec.pb(mp(num,i+1));
        }
        sort(vec.begin(),vec.end());
        ll cnt=1,sum=vec[0].f;
        res.pb(vec[0].s);
        for(ll i=1;i<n;i++)
        {
            if(sum>=vec[i].f)
            {
                cnt++;
                res.pb(vec[i].s);
            }
            else
            {
                res.clear();
                res.pb(vec[i].s);
                cnt=1;
            }
            sum+=vec[i].f;
        }
        sort(res.begin(),res.end());
        cout<<cnt<<endl;
        for(auto x:res)cout<<x<<" ";
        cout<<endl;




    }


}
