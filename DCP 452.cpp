#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()

{
    int p[30000];
    ll mx=1000000007;
    ll t,a,b,c,d,e,f,k,l,o,q,h;
    ll s=0;
    cin>>t;
    ll pos=1;
    for(ll i = 1; i <= 3000 ; i ++)
    {
        s+=i-1;
        p[pos]=s+1;
        pos++;
    }

//    for(int i = 1; i < pos; i ++)
//     cout<<p[i]<<" ";


    while(t--)
    {
        ll sum=0;

        cin>>a>>b>>c>>d>>e>>f;

        if(a==c){
            k=a;l=min(b,d);
            o=e;h=f;
        }
        else if(c==e){
            k=e;l=min(d,f);
            o=a;h=b;
        }
        else{
            k=e;l=min(b,f);
            o=c;h=d;
        }

        if(o>k){
               q=k;
               ll cp=(o-k)+1;
             for(ll i = cp; i >= 1; i--){
                sum+= (i*(2*(p[q]+l-1)+(i-1)*1)/2);
                 q++;l++;
            }
        }
        else
        {
            ll cp = (k - o)+1;
            q=o;
            for( ll i = 1 ; i <= cp ; i ++){
                sum+= ((i*(2*(p[q]+h-1)+(i-1)*1))/2);
                q++;
            }

        }

        cout<<sum%mx<<endl;
    }
}



/*  input
8
1 1
3000 1
3000 3000
2 2
4 2
4 4
*/

