#include <bits/stdc++.h>
using namespace std;
 
int main() {
 cin.sync_with_stdio(0);
 cin.tie(0);
 int t;
 cin >> t;
 while (t--) {
  int n;
  cin >> n;
  cout << (n % 2020 <= n / 2020 ? "YES" : "NO") << '\n';
 }
}