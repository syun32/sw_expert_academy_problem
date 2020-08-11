#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;

	for (int test_case = 1; test_case <= t; test_case++) {
		int result;
		int p, q, r, s, w;
		cin >> p >> q >> r >> s >> w;

		int a = p * w;
		int b = 0;
		if (w < r)
			b = q;
		else
			b = q + (w - r)*s;

		result = (a < b) ? a : b;
		
		cout << "#" << test_case << " " << result <<  endl;
	}

	return 0;
}