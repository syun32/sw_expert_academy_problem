#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;

	for (int test_case = 1; test_case <= t; test_case++) {
		int score[1000] = {};	//성적 저장할 배열
		int arr[101] = {};		//점수별 학생 수 count할 배열
		int result = 0;
		cin >> test_case;
		for (int i = 0; i < 1000; i++) {
			cin >> score[i];
			arr[score[i]]++;
		}

		int temp = 0;

		for (int i = 0; i < 100; i++) {
			if (arr[i] >= temp) {
				temp = arr[i];
				result = i;
			}
		}


		cout << "#" << test_case << " " << result << endl;
	}

	return 0;
}