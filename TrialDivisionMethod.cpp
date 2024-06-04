#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define floop1(a,b) for(int i=a; i<b; i++)
#define floop2(a,b) for(int i=a; i<=b; i++)

void solve() {
	ll n; cin >> n;
	vector<int> primeFactors;

	for (long long d = 2; d * d <= n; d++) {
		if (n % d == 0) {
			primeFactors.push_back(d);

			while (n % d == 0) {
				n /= d;
			}
		}

	}

	for (ll i = 0; i < primeFactors.size(); i++) {
		cout << primeFactors[i] << " ";
	}
}

int main() {
	solve();
}