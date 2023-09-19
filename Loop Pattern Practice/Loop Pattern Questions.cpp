#include<iostream>
using namespace std;
int main() {
	int rows = 0;
	cout << "Enter no of rows"<<endl;
    cin >> rows;
	// 1st Pattern
	/*for (int i = 0; i <= rows; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}*/
	//2nd Pattern
	/*for (int i = 0; i <= rows; i++) {
		for (int j = 0; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}*/
	return 0;
}