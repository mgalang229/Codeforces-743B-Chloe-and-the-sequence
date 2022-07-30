#include <bits/stdc++.h>
using namespace std;

int search(long long l, long long r, long long need, int alph_size) {
	long long mid = l + (r - l) / 2LL;
	if (need < mid) {
		return search(l, mid - 1, need, alph_size - 1);
	} else if (need > mid) {
		return search(mid + 1, r, need, alph_size - 1);
	} else {
		return alph_size;
	}
}

void test_cases() {
	int n;
	long long k;
	cin >> n >> k;
	long long sz = 1;
	for (int i = 1; i < n; i++) {
		sz = sz * 2LL + 1LL;
	}
	cout << search(1, sz, k, n) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T = 1;
	//cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_cases();
	}
}
