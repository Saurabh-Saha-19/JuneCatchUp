#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define floop1(a,b) for(int i=a; i<b; i++)
#define floop2(a,b) for(int i=a; i<=b; i++)

void solve() {
	int n; cin >> n;
	vector<string> coll(n, "Poly");
	int totalFaces = 0;
	for (int i = 0; i < n; i++) {
		cin >> coll[i];
		if (coll[i][0] == 'T')
			totalFaces += 4;
		if (coll[i][0] == 'C')
			totalFaces += 6;
		if (coll[i][0] == 'O')
			totalFaces += 8;
		if (coll[i][0] == 'D')
			totalFaces += 12;
		if (coll[i][0] == 'I')
			totalFaces += 20;
	}
	cout << totalFaces << "\n";
}

int main() {
	solve();
}