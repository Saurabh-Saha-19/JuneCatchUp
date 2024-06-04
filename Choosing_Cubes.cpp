#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define floop1(a,b) for(int i=a; i<b; i++)
#define floop2(a,b) for(int i=a; i<=b; i++)

void solve() {
	int n; int fav; int rem;
	cin >> n >> fav >> rem;
	int arr[n];
	floop1(0, n) {
		cin >> arr[i];
	}
	if (n <= rem) {
		cout << "Yes" << "\n";
		return;
	}

	int fe = arr[fav - 1];
	int totalFe = 0; int greaterFe = 0;
	floop1(0, n) {
		if (fe == arr[i]) {
			totalFe++;
		}
		else if (fe < arr[i]) {
			greaterFe++;
		}
	}
	// cout << greaterFe << " " << totalFe << "\n";
	if (greaterFe >= rem) {
		cout << "No" << "\n";
		return;
	}
	else {
		if (greaterFe == 0) {
			if (totalFe > rem)
				cout << "Maybe" << "\n";
			else
				cout << "Yes" << "\n";
			return;
		}
		int diff = rem - greaterFe;
		if (diff >= totalFe) {
			cout << "Yes" << "\n";
		}
		else cout << "Maybe" << "\n";
		return;
	}
}

int main() {
	int TC;
	cin >> TC;

	while (TC--)
		solve();
}