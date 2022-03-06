// Efficient only for Test Set 1
#include <bits/stdc++.h>
using namespace std;

void solve(int t) {
    int N; cin >> N;
    int arr[N];
    
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    for (int i = 1; i < N; i++)
        arr[i] += arr[i - 1];
    
    int count = 0, y;
    
    for (int start = 0; start < N; start++) {
        for (int end = start; end < N; end++) {
            if (start) {
                y = sqrt(arr[end] - arr[start - 1]);
                count += (y * y == arr[end] - arr[start - 1]);
            }
            else {
                y = sqrt(arr[end]);
                count += (y * y == arr[end]);
            }
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
