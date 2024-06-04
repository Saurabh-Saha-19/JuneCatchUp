#pragma GCC optimize("O3,unroll-loops")

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
void solve() {
	int n;
	cin >> n;
	if (n == 1) {
		cout << 1 << nline;
		cout << 1 << nline;
		return;
	}
	vector<ll> sA (n + 2, 1);

	for (int i = 2; i <= n + 1; i++) {
		if (sA[i] == 1) {
			for (int j = 2 * i; j <= n + 1; j += i) {
				sA[j] = 2;
			}
		}
	}

	n > 2 ? cout << 2 << nline : cout << 1 << nline;
	for (int i = 2; i <= n + 1; i++) {
		cout << sA[i] << " ";
	}
	cout << nline;

}
int main() {
	solve();
}