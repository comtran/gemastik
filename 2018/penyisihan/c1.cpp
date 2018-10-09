#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, i, j;
	unsigned long long total, noLimit, aa, aNa;
	cin >> t;
	for(i=0; i < t; i++) {
		total = 0;
		noLimit = 0;
		aa = 0;
		aNa = 0;
		cin >> n;
		for(j=0; j<n; j++) {
			total += (j+1);
		}
		noLimit = total * total;
		aa = n*n;
		aNa = (total - n) * 2;
		n > 1 ? cout << noLimit - aa - aNa << endl : cout << 1 << endl;

	}
	return 0;
}