#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define floop1(a,b) for(int i=a; i<b; i++)
#define floop2(a,b) for(int i=a; i<=b; i++)

void solve() {
	int n; cin >> n;
	vector<int> primeFactors;

	for (long long d = 2; d * d <= n; d++) {
		while (n % d == 0) {
			primeFactors.push_back(d);
			n /= d;
		}
	}
}

int main() {
	solve();
}