//#include <iostream>
//#include <cmath>
//#include <algorithm>
//
//using namespace std;
//
//typedef long long L2;
//
//int main()
//{
//	L2 n, k, m, ans = 0;
//	cin >> n >> k;
//
//	if (n > k) {
//		ans += k * (n - k);
//	}
//
//	m = sqrt(k);
//
//	for (L2 j = 1; j < m; j++) {
//		L2 l = min(k / j, n), r = k / (j + 1) + 1;
//		if (l < r) {
//			continue;
//		}
//		ans += k * (l - r + 1) - (1 + r) * (1 - r + 1) * j / 2;
//	}
//	for (L2 j = 1; j <= min(k / m, n); j++) {
//		ans += k % j;
//	}
//
//	cout << ans;
//
//	return 0;
//}

#include <stdio.h>
#include <math.h>
#include <algorithm>>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    ll n, k, m, ans = 0;
    scanf_s("%lld %lld", &n, &k);
    if (n > k) {
        ans += k * (n - k);
    }
    m = sqrt(k);
    for (ll j = 1; j < m; j++) {
        ll l = min(k / j, n), r = k / (j + 1) + 1; 
            if (l < r) {
                continue;
            }
        ans += k * (l - r + 1) - (l + r) * (l - r + 1) * j / 2;
    }
    for (ll j = 1; j <= min(k / m, n); j++) {
        ans += k % j;
    }
    printf("%lld", ans);
}