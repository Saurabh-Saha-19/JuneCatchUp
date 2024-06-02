#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define floop1(a,b) for(int i=a; i<b; i++)
#define floop2(a,b) for(int i=a; i<=b; i++)

void solve() {
	int row, col;
	cin >> row >> col;
	char ans[row][col] = {'.'};
	int alt = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if ((i & 1) == 0) {
				ans[i][j] = '#';
			}
			else {
				if (alt == 0 && j != col - 1) {
					ans[i][j] = '.';
				}
				else if (alt == 0 && j == col - 1) {
					ans[i][j] = '#';
				}
				if (alt == 1 && j == 0) {
					ans[i][j] = '#';
				}
				else if (alt == 1 && j != 0) {
					ans[i][j] = '.';
				}
			}
		}
		if (i & 1)
			alt = (alt ^ 1);
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << ans[i][j];
		}
		cout << "\n";
	}
}

int main() {

	solve();
}