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
       vll vec;
       ll cnt=0;
       for(ll i=0;i<n;i++)
       {
           ll num;
           cin>>num;
           vec.pb(num);
       } 
       for(ll i=0;i<n-1;i++)
       {
           if(min(vec[i],vec[i+1])*2<max(vec[i],vec[i+1]))
           {
               ll p=min(vec[i],vec[i+1]);
               ll q=max(vec[i],vec[i+1]);
               while(p*2<q)
               {
                   p*=2;
                   cnt++;
               }
           }
       }
       cout<<cnt<<endl;
    }


}
