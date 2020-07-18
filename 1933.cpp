#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int n;
	int res[1000];
	int cnt = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (n%i == 0) {
			res[cnt] = i;
			cnt++;
		}
	}

	for (int i = 0; i < cnt; i++) {
		cout << res[i] << " ";
	}
	cout << endl;
}