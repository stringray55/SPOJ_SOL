#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
//#define getchar_unlocked getchar
#define pb push_back
#define mp make_pair
#define f first
#define sc second
#define pii pair<int,int>
#define M 1000000007
#define inf (int)(2e+9)
#define all(o) (o).begin(), (o).end()
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
int lcm(int a, int b) { return (a * (b / gcd(a, b))); }
LL max(LL a,LL b,LL c){return max(a,max(b,c));}
inline LL power(LL x,LL y)
{
    LL ans=1;
    while(y>0){
        if(y&1)
            ans=(ans*x)%M;
        x=(x*x)%M;
        y/=2;
    }
    return ans;
}
inline int read()
{
	int ret = 0,temp=1;
	int c = getchar_unlocked();
	while(c<'0' || c>'9'){
		c = getchar_unlocked();
	}
	while(c>='0' && c<='9')
	{
		ret = (ret<<3) + (ret<<1) + c - '0';
		c = getchar_unlocked();
	}
        return ret;
}
int a[50005];
int main()
{
    int t;
    //scanf("%d",&t);
    t=read();
    while(t--){
        int n;
       // scanf("%d",&n);
       n=read();
        for(int i=0;i<n;i++) a[i]=read();//scanf("%d",&a[i]);
        sort(a,a+n);
        LL ans=0;
        LL cnt=1;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){
                cnt++;
            }
            else
            {
                ans=ans+cnt*i;
                cnt=1;
            }
        }
        ans=ans+cnt*n;
        printf("%lld\n",ans);
    }
    return 0;
}
