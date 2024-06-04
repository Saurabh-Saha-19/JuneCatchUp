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

/*--------------------------------------------------------------------------------------------------------------------------*/
void solve() {
	ll n;
	cin >> n;
	ll ans = 0;
	for (ll i = 2; i <= n; i++) {
		ll num = i;
		ll count = 0;
		for (ll j = 2; j * j <= num; j++) {
			if (num % j == 0) {
				count ++;
				while ((num % j) == 0) {
					num = num / j;
				}
			}
			if (count > 2) break;
		}
		if (num > 1) {
			count++;
		}
		if (count == 2) {
			ans ++;
		}
	}
	cout << ans << nline;
}
int main() {
	fastio();
	auto start1 = high_resolution_clock::now();
	solve();
	auto stop1 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef Priyansh31dec
	cerr << "Time: " << duration . count() / 1000 << endl;
#endif
}