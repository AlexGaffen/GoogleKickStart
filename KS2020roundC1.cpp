#include <bits/stdc++.h>
using namespace std;

void solve(int t) {
    int N, K; cin >> N >> K;
    int arr[N];
    
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    int count = 0;
    
    for (int i = 0; i < N; i++) {
        if (arr[i] == K) {
            for (int j = i + 1; j < i + K; j++) {
                if (arr[i - 1] - arr[i] != 1) {
                    count--;
                    break;
                }
            }
            count++;
        }
    }
    
    cout << "Case #" << t << ": " << count << endl;
}

int main() {
    int T; cin >> T;
    for (int t = 1; t <= T; t++)
        solve(t);
    
    return 0;
}
