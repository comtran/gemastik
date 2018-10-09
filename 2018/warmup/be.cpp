#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <float> K1, K2, K3, K4;
    int N;
    float X, Y;
    cin >> N;
    cin >> X >> Y;

    for (int i = 0; i < N; i++) {
        float P, Q, M;
        cin >> P >> Q;
        P = P-X;
        Q = Q-Y;
        //cout << P << ' ' << Q << ' ' << (P/Q) << '\n';
        if (P == 0)
            M = 0;
        else
            M = P/Q;
        if (P >= 0 && Q > 0 && find(K1.begin(), K1.end(), (M)) == K1.end()) {
            K1.push_back(M);
        } else if (P < 0 && Q >= 0 && find(K2.begin(), K2.end(), (M)) == K2.end()) {
            K2.push_back(M);
        } else if (P <= 0 && Q < 0 && find(K3.begin(), K3.end(), (M)) == K3.end()) {
            K3.push_back(M);
        } else if (P > 0 && Q <= 0 && find(K4.begin(), K4.end(), (M)) == K4.end()) {
            K4.push_back(M);
        }
    }

    cout << K1.size() + K2.size() + K3.size() + K4.size() << '\n';

    return 0;
}