#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pil;
typedef pair<long,long> pll;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<pll> vpll;
typedef map<ll,ll> map;
#define pb push_back 
#define loop(i,a,b) for(ll i=a;i<b;i++) 
#define For(i,n) for(int i=0;i<(ll)n;i++)
#define Rev(i,n) for(int i=n-1;i>=0;i--)
#define Rep(i,n) for(int i=1;i<=n;++i)
#define F first
#define S second
#define sortv(v) sort(v.begin(),v.end())
#define sorta(a,n) sort(a,a+n)
#define mp(a,b) make_pair(a,b)
#define int long long

ll gcd(ll a,ll b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

ll lcm(ll a,ll b){
    return (a*b)/gcd(a,b);
}

void solve(){
    ll n;  cin>>n;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t=1;
    cin>>t;  
    while(t--){
        solve();
    }
    return 0;
}