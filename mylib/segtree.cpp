struct segtree {
   using S = ll;
   S op(S a, S b) {
      return a + b;
   }
   S e = 0;

   int N;
   vector<S> data;
   segtree(int n) {
      N = 1;
      while (N < n) N*=2;
      data.assign(2 * N, e);
   }
   S prod_inner (int l, int r, int idx, int left, int right) {
      //今考えている木を2分割する
      if (l == r) return e;
      if (l == left && r == right) return data[idx];
      int mid = (right + left) / 2;
      if (r <= mid) return prod_inner(l, r, idx * 2, left, mid);
      if (mid <= l) return prod_inner(l, r, idx * 2 + 1, mid, right);
      return op(prod_inner(l, mid, idx * 2, left, mid) , prod_inner(mid, r, idx * 2 + 1, mid, right));
   }
   S prod (int l, int r) { return prod_inner(l, r, 1, 0, N); }
   void set (int i, S x) {
      i += N;
      data[i] = x;
      i /= 2;
      while (i > 0) {
         data[i] = op(data[i * 2] , data[i * 2 + 1]);
         i /= 2;
      }
   }
};
