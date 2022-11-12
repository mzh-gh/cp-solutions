#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double db;
 
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b) - 1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a) - 1; i >= 0; i--)
#define trav(a, x) for (auto &a : x)
 
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define pb push_back
#define ins insert
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
 
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
 
void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int neg = 0;
  trav(x, a) {
    cin >> x;
    neg += x < 0;
    x = abs(x);
  }
  F0R(i, neg) {
    a[i] = -a[i];
  }
  bool ok = true;
  F0R(i, n - 1) {
    ok &= a[i] <= a[i + 1];
  }
  cout << (ok ? "YES\n" : "NO\n");
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.exceptions(cin.failbit);
  int T = 1;
  cin >> T;
  while (T--) {
    solve();
  }
}