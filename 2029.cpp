#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int T;
	int arr[2] = {};
	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {
		cin >> arr[0] >> arr[1];
		cout << "#" << test_case << " " << arr[0] / arr[1] << " " << arr[0] % arr[1] << endl;
	}
	return 0;
}