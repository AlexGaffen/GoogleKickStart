#include <bits/stdc++.h>
using namespace std;

void solve(int t) {
    string I, P; cin >> I >> P;
    int lenI = I.length(), lenP = P.length();
    
    int I_count = 0;
    for (int i = 0; i < lenP; i++) {
        if (P[i] == I[I_count])
            I_count++;
    }
    
    cout << "Case #" << t << ": ";
    if (I_count == lenI)
        cout << lenP - lenI << "\n";
    else
        cout << "IMPOSSIBLE" << "\n"; 
} 

int main() {
    int T; cin >> T;
    for (int t = 1; t <= T; t++)
        solve(t);
        
    return 0;
}
