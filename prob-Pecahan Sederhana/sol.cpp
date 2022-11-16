#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define DEBUG(str, var) cout << str << " " << var << nL;
#define nL "\n"
#define vi vector<int>
#define vll vector<ll>
#define vall(x) x.begin(), x.end()
#define all(x) x, x + n
#define pb push_back
#define pob pop_back
#define mp make_pair
#define sz size
#define ld long double
#define slv solve();
#define tc        \
    int t;        \
    cin >> t;     \
    while (t--) { \
        solve();  \
    }
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mem(s, x) memset(s, x, sizeof(s))
#define fathurwithyou            \
    ios::sync_with_stdio(false); \
    cin.tie(0);
const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const int mod = 998244353;
const ld PI = acos(-1);
using namespace std;

void solve() {
    int n;
    double a, b, c, d;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c >> d;
        if (a / b == c / d)
            cout << "Sama" << endl;
        else if (a / b > c / d)
            cout << "Lebih Besar" << endl;
        else
            cout << "Lebih Kecil" << endl;
    }
}

int main() { fathurwithyou slv return 0; }
