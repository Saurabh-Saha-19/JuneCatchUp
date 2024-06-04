#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define floop1(a,b) for(int i=a; i<b; i++)
#define floop2(a,b) for(int i=a; i<=b; i++)

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> freq(8, 0);

	floop1(0, n) {
		char x;
		cin >> x;
		freq[(x - 'A') + 1]++;
	}
	int ans = 0;
	floop2(1, 7) {
		if (freq[i] >= m)
			continue;
		else {
			ans += (m - freq[i]);
		}
	}

	cout << ans << "\n";

}

int main() {
	int TC;
	cin >> TC;

	while (TC--)
		solve();
}