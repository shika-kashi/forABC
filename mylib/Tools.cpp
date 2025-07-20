vecl make_id(const vecl&a){
    ll n = a.size();
    vecl id(n) ;
    rep(i,0,n)id[i] = i ;
    auto s1 = [&](ll i , ll j) -> bool{
        return a[i] < a[j] ;
    };
    sort(all(id) , s1);
    return id ;
}

bool inrange(ll l , ll r , ll x){
    //[l,r)にxがあるか
    return (l <= x && x < r);
}
