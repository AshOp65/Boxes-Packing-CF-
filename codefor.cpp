#include"bits/stdc++.h"
using namespace std;
typedef vector <int> vi;
typedef pair< int , int > pii;
#define all(v) v.begin(),v.end()
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define pb push_back
#define mk make_pair
#define ff first
#define ss second
#define li long long int
#define ll long long
#define ld long double
#define mod 1000000007
#define nl  "\n"
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl;
#define take_input freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define tx  int n; cin>>n;
#define w(x)  int t; cin>>t; while(t--)
#define cheetah ios_base::sync_with_stdio(false); cin.tie(0);
#define mod   1000000007

//जय श्री राम

//<------------------------------------------------------------------------------->

void solve() {

int n;
cin>>n;
int a[n];
f0(i,n) cin>>a[i];
map<int,int>m;
f0(i,n){
  m[a[i]]++;
}
int temp,ans=0;
for(auto it: m){
  temp=it.second;
  ans=max(temp,ans);
}
cout<<ans;

}

int main()
{
  cheetah;

  int t = 1;
// cin>>t;
  while (t--) {
    solve();
  }
  return 0;

}