#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv){
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str.at(i) > 90)
			cout << str.at(i) - 96 << " ";
		else
			cout << str.at(i) - 64 << " ";
	}
	
	return 0;
}