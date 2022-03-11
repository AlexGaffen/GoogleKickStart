#include <bits/stdc++.h>
using namespace std;

void solve(int t) {
    int N, P; cin >> N >> P;
    vector<int> Skill(N, 0), Prefix(N, 0);
    
    for (int i = 0; i < N; i++) {
        cin >> Skill[i];
        Prefix[i] = Skill[i];
    }
    
    sort(Prefix.begin(), Prefix.end());
    sort(Skill.begin(), Skill.end());
    
    for (int i = 1; i < N; i++)
        Prefix[i] += Prefix[i - 1];
        
    int min_time = (Skill[P - 1] * (P - 1)) - Prefix[P - 2];
    
    for (int i = P; i < N; i++)
        min_time = min(min_time, Skill[i] * (P - 1) - (Prefix[i - 1] - Prefix[i - P]));
                                 
    cout << "Case #" << t << ": " << min_time << endl;
}
                                  
int main() {
    int T; cin >> T;
    for (int t = 1; t <= T; t++)
        solve(t);
    
    return 0;
}
