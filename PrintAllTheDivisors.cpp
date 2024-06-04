#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define floop1(a,b) for(int i=a; i<b; i++)
#define floop2(a,b) for(int i=a; i<=b; i++)

void solve() {
	long long n; cin >> n;
	vector<long long> allDiv;

	for (long long d = 1; (d * d) <= n; d++) {
		if ((n % d) == 0) {
			allDiv.push_back(d);
			if ((n / d) != d)
				allDiv.push_back(n / d);
		}

	}

	int tot = allDiv.size();
	floop1(0, tot) {
		cout << allDiv[i] << "\n";
	}
}

int main() {
	solve();
}