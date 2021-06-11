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
    map<ll,ll>mp;
    for(ll i=1;i<10532;i++)
    {
        mp[i*i*i]=1;
    }
    while(t--)
    {
        ll n;
        cin>>n; 
        bool ok=true;
        for(ll i=1;i<10532;i++)
        {
            ll p=i*i*i;
            ll q=n-p;
            if(q<0)
            break;
            if(mp[q])
            {
                ok=false;
                break;
            }
        }
        if(ok)cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }


}
