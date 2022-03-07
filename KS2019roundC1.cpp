// Runtime Error. Needs debugging.
#include <bits/stdc++.h>
using namespace std;

void solve(int t) {
	int N, R, C, SR, SC; cin >> N >> R >> C >> SR >> SC;
	string S; cin >> S;
	
	vector<int> grid(R * C, 0);
	long long position = SC - 1 + (SR - 1) * C;
	
	for (int i = 0; i < N; i++) {
		do {
			if (S[i] == 'N') {
				grid[position]++;
				position -= C;
			}
			else if (S[i] == 'S') {
				grid[position]++;
				position += C;
			}
			else if (S[i] == 'E') {
				grid[position]++;
				position++;
			}
			else {
				grid[position]++;
				position--;
			}
		} while (grid[position]);			
	}
	cout << "Case #" << t << ": " << (position / C) + 1 << " " << (position % C) + 1 << endl;
}
	
int main() {
	int T; cin >> T;
	for (int t = 1; t <= T; t++)
		solve(t);
	
	return 0;
}
