#include <iostream>

using namespace std;

int main(int argc, char** argv){
	int N;
	int res = 0;
	cin >> N;
	
	res += N / 1000 + N % 1000 / 100 + N % 100 / 10 + N % 10;

	cout << res << endl;
	
	return 0;
}