#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

const ll Inf = 4000000000000000000;
const int Maxn = 3005;

int n, k;
int a[Maxn];
ll dp[Maxn][Maxn];

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, a + n);
    fill((ll*)dp, (ll*)dp + Maxn * Maxn, Inf);
    dp[0][0] = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i && j <= k; j++) if (dp[i][j] < Inf) {
            int my = j, his = i - j;
            if (my < k) {
                ll add = ll(a[i]) * (his - (n - k - his));
                cout<<"add 1-> i: "<<i<<" j : "<<j<<" add "<<add<<endl;
                dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + add);
                cout<<"dp of "<<i+1<<" "<<j+1<<" is "<<dp[i+1][j+1]<<endl;
            }
            if (his < n - k) {
                ll add = ll(a[i]) * (my - (k - my));
                cout<<"add 2-> i: "<<i<<" j : "<<j<<" add "<<add<<endl;
                dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + add);
                cout<<"dp of "<<i+1<<" "<<j<<" is "<<dp[i+1][j]<<endl;
            }
        }
    printf("%lld\n", dp[n][k]);
    return 0;
}
