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
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    int sel = abs(a - b);
    if (a > b) {
        int batas = 1;
        for (int i = 1; i <= sel; i++) {
            for (int j = 1; j <= sel; j++) {
                if (j >= batas)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
            batas++;
        }
        batas -= 2;
        for (int i = 1; i <= sel - 1; i++) {
            for (int j = 1; j <= sel; j++) {
                if (j >= batas) {
                    cout << "*";
                } else
                    cout << " ";
            }
            cout << endl;
            batas--;
        }
    } else if (a < b) {
        int batas = abs(a - b);
        for (int i = 1; i <= sel; i++) {
            for (int j = 1; j <= sel; j++) {
                if (j <= batas)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
            batas--;
        }
        batas += 2;
        for (int i = 1; i <= sel - 1; i++) {
            for (int j = 1; j <= sel; j++) {
                if (j <= batas) {
                    cout << "*";
                } else
                    cout << " ";
            }
            cout << endl;
            batas++;
        }
    } else {
        for (int i = 0; i < 2 * a - 1; i++) {
            for (int j = 0; j < a; j++) {
                cout << "*";
            }
            if (i < 2 * a - 2) cout << endl;
        }
    }
}

int main() { fathurwithyou slv return 0; }
