#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
 cin.sync_with_stdio(false);
 cin.tie(nullptr);
 string s;
 cin >> s;
 int n = s.size();
 vector<int> digits;
 for (char c : s) {
  digits.push_back(c - '0');
 }
 map<int, int> mp;
 for (int i = 0; i < n - 1; i++){
  mp[digits[i]] = i;
 }
 bool haseven = digits[n - 1] % 2 == 0;
 for (int i = 0; i <= 8; i += 2) {
  haseven |= mp.count(i);
 }
 if (!haseven) {
  cout << -1 << '\n';
  return 0;
 }
 if (digits.back() % 2 == 0) {
  for (int i = 0; i < n; i++) {
   for (int j = 9; j > digits[i]; j--) {
    if (mp.count(j)) {
     swap(digits[i], digits[mp[j]]);
     goto label;
    }
    if (digits[i] % 2 == 0 && digits[n - 1] == j) {
     swap(digits[i], digits[n - 1]);
     goto label;
    }
   }
  }
  label:;
 } else {
  bool flag = false;
  for (int i = 0; i < n - 1; i++) {
   if (digits[i] % 2 == 0 && digits[i] < digits[n - 1]) {
    swap(digits[i], digits[n - 1]);
    flag = true;
    break;
   }
  }
  if (!flag) {
   for (int i = n - 2; i >= 0; i--) {
    if (digits[i] % 2 == 0) {
     swap(digits[i], digits[n - 1]);
     break;
    }
   }
  }
 }
 for (int x : digits) {
  cout << x;
 }
 cout << '\n';
}