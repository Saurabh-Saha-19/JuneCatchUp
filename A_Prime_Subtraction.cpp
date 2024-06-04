#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define floop1(a,b) for(int i=a; i<b; i++)
#define floop2(a,b) for(int i=a; i<=b; i++)

void solve() {
	ll x;
	ll y;
	cin >> x >> y;

	if ((x - y) > 1)
		cout << "Yes" << "\n";
	else
		cout << "No" << "\n";
}

int main() {
	int TC;
	cin >> TC;

	while (TC--)
		solve();
}