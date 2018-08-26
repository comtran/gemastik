/*!
 * @author epicurean
 * @date   August 27th, 2018
 */

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n;
  cin >> n;

  ll a[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  ll sum = 0;
  for (int i = 0; i < n; i++) {
    ll x;
    cin >> x;

    sum += x;
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) ans += (a[i] * n) + sum;

  cout << ans << endl;

  return 0;
}

