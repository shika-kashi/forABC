// rolling hash
// 使用例：https://atcoder.jp/contests/abc141/submissions/66834047
vecl Base = {1000000007 , 998244353 , 899714971 , 149500807 , 864701587 , 950722351 , 801857789 , 428889689 , 104848109} ;//必要に応じ削る
//文字の種類、文字列の長さの最大値
ll Char_size = 27 , hash_limit_size = 1000005;
//数字に変換する関数
ll ch2ll(char s){
    return ll(s - 'a') + 1;
}
vecl r26;graph p26;
//init,忘れずに！
int init_hash(){
    rep(i,0,Base.size())r26.push_back(mpow(Char_size , Base[i] - 2 , Base[i]));
    rep(i,0,Base.size()){
        p26.push_back({1});
        rep(j,1,hash_limit_size){
            p26[i].push_back(p26[i].back() * Char_size % Base[i]);
        }
    }
    return 0;
}
struct Hash{
    vecl val;
    ll dig = 0;
    deque<ll> mem;
    Hash() : val(){
        rep(i,0,Base.size())val.push_back(0);
    }
    ll get(){
        return val[0];
    }
    void r_add(char s){
        mem.push_back(ch2ll(s));
        rep(i,0,Base.size()){
            val[i] += ch2ll(s) * p26[i][dig];
            val[i] %= Base[i];
        }
        dig ++ ;
    }
    void l_add(char s){
        mem.push_front(ch2ll(s));
        rep(i,0,Base.size()){
            val[i] = val[i] * Char_size + ch2ll(s) ;
            val[i] %= Base[i];
        }
        dig ++ ;
    }
    void r_del(){
        dig -- ;
        rep(i,0,Base.size()){
            val[i] -= mem.back() * p26[i][dig];
            val[i] = ovr(val[i] , Base[i]);
        }
        mem.pop_back() ;
    }
    void l_del(){
        dig -- ;
        rep(i,0,Base.size()){
            val[i] -= mem.front() ;
            val[i] *= r26[i];//Char_size で割る
            val[i] = ovr(val[i] , Base[i]);
        }
        mem.pop_front();
    }
};
