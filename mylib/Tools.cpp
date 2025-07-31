vl make_id(const vl&a){
    ll n = a.size();
    vl id(n) ;
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
