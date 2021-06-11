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
       ll ind=-1,max=minf;
       for(ll i=0;i<n;i++)
       {
           ll num;
           cin>>num;
           vec.pb(num);
           if(max<vec[i])
           {
               ind=i;
               max=vec[i];
           }
       } 
       //vll ara[101];
       queue<ll>q;
       q.push(ind);
       ll  vis[101]={0};
       ll level[101]={0};
       while(!q.empty())
       {
           ll x=q.front();
           q.pop();
           vis[x]=1;
           ll nmax=minf,nind=-1;
           for(ll i=x-1;i>=0;i--)
           {
               if(vis[i]==1)
               break;
               if(vec[i]>nmax)
               {
                   nind=i;
                   nmax=vec[i];
               }
           }
           if(nind!=-1)
           {
               q.push(nind);
               level[nind]=level[x]+1;

           }
           
           nmax=minf;nind=-1;
           for(ll i=x+1;i<n;i++)
           {
               if(vis[i]==1)
               break;
               if(vec[i]>nmax)
               {
                   nind=i;
                   nmax=vec[i];
               }
           }
           if(nind!=-1)
           {
               q.push(nind);
               level[nind]=level[x]+1;
           }
       } 
       for(ll i=0;i<n;i++)
       {
           cout<<level[i]<<" ";
       }
       cout<<endl;



       
    }


}
