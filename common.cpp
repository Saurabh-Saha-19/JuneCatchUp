#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define floop1(a,b) for(int i=a; i<b; i++)
#define floop2(a,b) for(int i=a; i<=b; i++)

void solve() {
	int n; cin >> n;
	int c = 0; int power = 1;
	vector<int> arr;
	while (n > 0) {
		if (n % 10) {
			c++;
			arr.push_back((n % 10) * power);
		}
		n = n / 10;
		power *= 10;
	}

	cout << c << "\n";
	for (auto it : arr)
		cout << it << " ";
	cout << "\n";
}

int main() {
	int TC;
	cin >> TC;

	while (TC--)
		solve();
}