//UnionFind
//使用例：https://atcoder.jp/contests/atc001/submissions/64814072
struct UF{
    vl par;
    UF(ll n) : par(n){
        rep(i,0,n)par[i]=-1;
    }
    ll root(ll x){
        return (par[x] == -1) ? x : (par[x] = root(par[x]));
    }
    void comb(ll x,ll y){
        if(root(x)!=root(y)){
            par[root(x)]=y;
        }
    }
};
