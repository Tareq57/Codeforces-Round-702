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
       ll c0=0,c1=0,c2=0;
       for(ll i=0;i<n;i++)
       {
           ll num;
           cin>>num;
           if(num%3==0)
           c0++;
           else if(num%3==1)
           c1++;
           else
           c2++;
       }
       ll ans=0;
       ll p=n/3;
       if(c0>p)
       {
           ll k=c0-p;
           c1+=k;
           ans+=k;
           c0=p;
       }
       if(c1>p)
       {
           ll k=c1-p;
           c2+=k;
           ans+=k;
           c1=p;
       }
       if(c2>p)
       {
           ll k=c2-p;
           c0+=k;
           ans+=k;
           c2=p;
       }
       if(c0>p)
       {
           ll k=c0-p;
           c1+=k;
           ans+=k;
           c0=p;
       }
       if(c1>p)
       {
           ll k=c1-p;
           c2+=k;
           ans+=k;
           c1=p;
       }
       if(c2>p)
       {
           ll k=c2-p;
           c0+=k;
           ans+=k;
           c2=p;
       }
       cout<<ans<<endl;

    }


}
