#include<iostream>
using namespace std;
int main() {
	// 1st Pattern
	int rows = 0;
	cout << "Enter no of rows"<<endl;
	cin >> rows;
	for (int i = 0; i <= rows; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}