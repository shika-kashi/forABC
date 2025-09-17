#include<bits/stdc++.h>
using namespace std;
using ll = long long;//int型は使わない
using vl = vector<ll> ; //1次元
using vvl = vector<vl> ;//2次元
using vvvl = vector<vvl> ;//3次元
using vvvvl = vector<vvvl>;//4次元
using vb = vector<bool>   ; //1
using vvb = vector<vb>    ; //2
using vvvb = vector<vvb>  ; //3
using vvvvb = vector<vvvb>; //4
using vs = vector<string>  ; //1
using vvs = vector<vs>     ; //2
using vvvs = vector<vvs>   ; //3
using vvvvs = vector<vvvs> ; //4
using pll = pair<ll , ll>;
using vp = vector<pll> ; //1次
using vvp = vector<vp> ; //2次
using vvvp = vector<vvp> ; //3次
const ll INF = 2e18 ;
const ll MOD = 998244353;
#define rep(i,a,b) for(ll i=(ll)a; i<(ll)b; i++)
#define rrep(i,a,b) for(ll i=(ll)b-1; i>=(ll)a; i--)
#define all(vec1) (vec1).begin(), (vec1).end()
#define yn(b,ex) if(1){if(b)cout << "Yes" << endl;else cout << "No" << endl ;if(ex)return 0;}
#define debug(var) cerr << #var << " : " << var << endl;

//fastio
struct FastIO {
    FastIO() {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
    }
} fastio;
//あまり(負の数対応)
template<typename T>
T ovr(T a,T b){
  T ret=a%b;
  if(ret<0)ret+=b;
  return ret;
}
const string MOD_bi = "111111111111111111111110110111";
//MOD下での逆元
ll minv(ll ina){
  ll a = ina % MOD;
  ll ret = 1;
  ll V = a;
  rep(i,0,MOD_bi.size()){
    if(MOD_bi[i]=='1')ret=(ret*V)%MOD;
    V=(V*V)%MOD;
  }
  return ret;
}

//指数をある値で割った余り
ll mpow(ll a , ll b , ll M){
    ll ret = 1;
    ll V = a;
    rep(i,0,64){
        if((b >> i) & 1)ret=(ret*V)%M;
        V=(V*V)%M;
    }
    return ret;
}

/////////main/////////

int main()
{
    
    return 0;
}
