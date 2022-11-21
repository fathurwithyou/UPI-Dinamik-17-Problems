#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define DEBUG(str, var) cout << str << " " << var << nL;
#define nL "\n"
#define vi vector<int>
#define vll vector<ll>
#define vall(x) x.begin(), x.end()
#define all(x) x, x+n
#define pb push_back
#define pob pop_back
#define mp make_pair
#define sz size
#define ld long double
#define slv solve();
#define tc int t; cin >> t; while(t--){solve();}
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mem(s, x) memset(s, x, sizeof(s))
#define fathurwithyou ios::sync_with_stdio(false); cin.tie(0); 
const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const int mod = 998244353;
const ld PI = acos(-1);
using namespace std;
string toBinary(int n)											{if (n ==1) return "1";else if (n%2==1) {return toBinary(n/2) + "1";}else{ return toBinary(n/2) + "0";}}
bool isUpper(char s)											{if (s >= 'A' && s <= 'Z') return true;return false;}
bool isLower(char s)											{if (s >= 'a' && s <= 'z') return true;return false;}
bool isPrime(int x)												{if (x == 1) return false;for (int i = 2; i*i <= x; i++){if (x%i==0)return false;}return true;}
ull gcd(ull a, ull b)											{if(b==0)return a; return gcd(b,a%b);}
ull lcm(ull a, ull b)											{if (gcd(a,b) == 1)return a*b;return a*b/gcd(a,b);}
int reverseInt(int n)											{int res = 0;	while (n > 0){res = (res*10) + (n % 10);n /= 10;}return res;}
int powCheck(int i, int n)										{int count = 0;while(n%i==0){n/=i;count++;}return count;}
int lcw(string s)												{int ans = 1, res = 1;for (int i = 1; i < s.length(); i++){if (s[i-1] == s[i]){ans++;}else{res = max(res, ans);ans = 1;}}res = max(ans, res);return res;}
int lcs(string X, string Y, int m, int n)						{int L[m + 1][n + 1];int i, j;for (i = 0; i <= m; i++) {for (j = 0; j <= n; j++) {if (i == 0 || j == 0)L[i][j] = 0;else if (X[i - 1] == Y[j - 1])L[i][j] = L[i - 1][j - 1] + 1;else L[i][j] = max(L[i - 1][j], L[i][j - 1]);}}return L[m][n];}
int lis(int arr[], int n)										{int *lis, i, j, max = 0;lis = (int*)malloc(sizeof(int) * n);for (i = 0; i < n; i++)lis[i] = 1;for (i = 1; i < n; i++)for (j = 0; j < i; j++)if (arr[i] > arr[j] && lis[i] < lis[j] + 1)lis[i] = lis[j] + 1;for (i = 0; i < n; i++)if (max < lis[i])max = lis[i];free(lis); return max;}

/*
*/
char find(ull n) {
    ll base = 9, start = 1, len = 1;
    while (n > len * base) {
        n -= len * base;
        len += 1;
        base *= 10;
        start *= 10;
    }
    start += (n - 1) / len;
    string s = to_string(start);
    return s[(n - 1) % len];
}

void solve() {
    ull k;
    cin >> k;
    cout << find(k);
}

int main() { fathurwithyou slv return 0; }
