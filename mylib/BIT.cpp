//普通のBIT(遅延セグ木はACLを使う)
//使用例：https://atcoder.jp/contests/tessoku-book/submissions/66834445
struct BIT{
    vecl tre;
    ll n;
    BIT(ll N) : tre(N+1){
        rep(i,0,N+1)tre[i]=0;
        n=N;
    }
    void add(ll i, ll x){
        ll v = i+1;
        while(v<=n){
            tre[v] += x;
            v += -v & v;
        }
    }
    ll sum(ll i){
        ll v = i;
        ll ret = 0;
        while(v>0){
            ret += tre[v];
            v -= -v & v;
        }
        return ret;
    }
};
