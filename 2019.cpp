#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int n;
	int res = 1;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cout << res << " ";
		res *= 2;
	}
	cout << res << endl;
	return 0;
}