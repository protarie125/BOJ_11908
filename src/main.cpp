#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto mx = int{ 0 };
	auto sum = int{ 0 };
	while (0 < (n--)) {
		int x;
		cin >> x;

		sum += x;
		if (mx < x) {
			mx = x;
		}
	}

	cout << sum - mx;

	return 0;
}