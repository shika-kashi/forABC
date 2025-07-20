//基本的なtrie木
//使用例：なし(かなしい)
struct trie{
    vector<ll>emp;
    vector<vector<ll>> next;
    vector<ll> val; //持ってる数
    ll sz = 1;
    trie() : next(1) , val(1) , emp(26 , -1){
        next[0] = emp;
        //custom
        val[0] = 1;
    };
    void add(string s){
        ll nowv = 0;
        rep(i,0,s.size()){
            if(next[nowv][s[i]-'a'] == -1){
                next[nowv][s[i]-'a'] = sz;
                nowv = sz;
                sz ++ ;
                next.push_back(emp);
                val.push_back(1);
            }else{
                nowv = next[nowv][s[i]-'a'];
                val[nowv] ++ ;
            }
        }
    }
    ll settozi(string s){
        ll nowv = 0;
        rep(i,0,s.size()){
            nowv = next[nowv][s[i]-'a'];
            if(nowv == -1)return 0;
        }
        return val[nowv];
    }
};
