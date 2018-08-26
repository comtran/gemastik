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

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int x = 0, y = 0;
    while (n--) {
      int a, b, c;
      cin >> a >> b >> c;

      x += min(a, min(b, c));
      y += max(a, max(b, c));
    }

    cout << x << ' ' << y << endl;
  }

  return 0;
}

