#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using db = long double;
using str = string;
 
using pi = pair<int, int>;
using pl = pair<ll, ll>;
 
template<class T> using vt = vector<T>; 
using vb = vt<bool>;
using vi = vt<int>;
using vl = vt<ll>;
using vs = vt<str>;
using vpi = vt<pi>;
using vpl = vt<pl>;
using vvb = vt<vb>;
using vvi = vt<vi>;
using vvl = vt<vl>;
 
#define sz(x) int((x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend() 
#define rsz resize
#define ins insert 
#define pb push_back
#define rb pop_back
#define eb emplace_back
#define fi first
#define se second
 
#define lb lower_bound
#define ub upper_bound
template<class T> int lwb(vt<T> &a, const T &b) { return int(lb(all(a), b) - a.begin()); }
template<class T> int upb(vt<T> &a, const T &b) { return int(ub(all(a), b) - a.begin()); }
 
#define FOR(i,a,b) for (int i = (a); i < (b); i++)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); i--)
#define R0F(i,a) ROF(i,0,a)
#define rep(a) F0R(_,a)
#define each(a,x) for (auto &a : x)
 
#define ckmin(a,b) a = min(a,b)
#define ckmax(a,b) a = max(a,b)
 
// Solving this problem without cheesing with OEIS 8 months later
 
ll fac(int n) {
  ll res = 1;
  FOR(i,2,n+1)
    res *= i;
  return res;
}
 
ll nck(int n, int k) {
  return fac(n)/(fac(k)*fac(n-k));
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  ll sets = nck(n,n/2)/2;
  ll arr = fac(n/2)/(n/2);
  cout << sets*arr*arr << '\n';
}
 
/*
  Read the problem statement very carefully
  Think twice before implementing!
*/