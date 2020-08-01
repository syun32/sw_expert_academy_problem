#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int cnt = 0;
		if ((i / 100) % 3 == 0 && (i / 100) > 0 && i > 99)
			cnt++;
		if ((i % 100 / 10) % 3 == 0 && (i % 100 / 10) > 0 && i > 9)
			cnt++;
		if ((i % 10) % 3 == 0 && (i % 10) > 0)
			cnt++;

		if (cnt == 0) {
			cout << i;
		}
		else {
			for (int j = 0; j < cnt; j++)
				cout << "-";
		}
		cout << " ";
	}

	return 0;
}