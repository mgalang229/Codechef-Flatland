#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n;
	cin >> n;
	if(n == 1) {
		cout << 1;
	}
	else {
		int tmp, cnt = 0;
		do {
			tmp = sqrt(n);
			n -= (tmp * tmp);
			cnt++;
		} while(n > 0);
		cout << cnt;
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		test_case();
	}
	return 0;
}
