//基数変換
vector<ll> tn(ll n , ll x){
    vecl ret ;
    ll s = n ;
    while(s != 0){
        ret.push_back(s % x) ;
        s /= x;
    }
    reverse(all(ret));
    return ret;
}
