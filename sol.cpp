#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<vector<char>> a(3, vector<char>(3));
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}
	// view the image in this repository for better understanding
	bool checker = true;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			// the current a[i][j] must be equivalent to the a[2 - i][2 - j] which is
			// reflected using the center as a point of reflection
			// if this passes, then it is said to possess central symmetry
			// read more in the link provided in this repository
			if (a[i][j] != a[2 - i][2 - j]) {
				checker = false;
				break;
			}
		}
	}
	cout << (checker ? "YES" : "NO") << '\n';
	return 0;
}
