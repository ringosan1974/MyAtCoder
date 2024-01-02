#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pii = pair<int, int>;

#define all(x) (x).begin(),(x).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i,n) for (int i = 1; i <= (int)(n); i++)

ll N, K, A[1009], B[1009], C[1009], D[1009];
ll AB[1000009], CD[1000009];
int main() {
	cin >> N >> K;
	reps(i, N) cin >> A[i];
	reps(i, N) cin >> B[i];
	reps(i, N) cin >> C[i];
	reps(i, N) cin >> D[i];

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) AB[(i-1)*N + j] = A[i] + B[j];
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) CD[(i-1)*N + j] = C[i] + D[j];
	}

	sort(CD + 1, CD + N*N + 1);
	for (int i = 1; i <= N * N; i++) {
		ll ans = K - AB[i];
		if(binary_search(CD + 1, CD + N*N + 1, ans)) {
			cout << "Yes" << endl;
			return 0;
		}
		
	}
	cout << "No" << endl;
	return 0;
}