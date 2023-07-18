#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	const auto v1 = "YONSEI"s;
	const auto v2 = "KOREA"s;

	auto f1 = int{ 0 };
	auto n1 = int{ 0 };
	for (auto i = 0; i < s.length(); ++i) {
		if (v1[n1] == s[i]) {
			f1 = i;
			++n1;
		}
	}

	auto f2 = int{ 0 };
	auto n2 = int{ 0 };
	for (auto i = 0; i < s.length(); ++i) {
		if (v2[n2] == s[i]) {
			f2 = i;
			++n2;
		}
	}

	if (n2 != v2.length()) {
		cout << v1;
	}
	else if (n1 != v1.length()) {
		cout << v2;
	}
	else {
		if (f1 < f2) {
			cout << v1;
		}
		else {
			cout << v2;
		}
	}

	return 0;
}