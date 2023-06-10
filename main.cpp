#include<iostream>

using namespace std;

int main() {
	int n;
	char c, d, e;

	cin >> n;
	int res = 0;
	for (int i = 0; i < n; i++) {
		cin >> c >> d >> e;
		res += ((c & d) | (d & e) | (e & c)) & 1;
	}

	cout << res;
}
