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
	// 3rd Pattern 
	/*int q = 0;
	for (int i = 0; i <= rows; i++) {
		for (int j = 0; j <= i; j++) {
			cout << q;
			q++;
		}
		cout << endl;
	}*/
	//4th Pattern
	/*int q = 0;
	for (int i = 0; i <= rows; i++) {
		for (int j = 0; j <= i; j++) {
			cout << q<<" ";
			q++;
		}
		cout << endl;
	}*/
	//5th Pattern
	/*int k=0;
	
	for (int i = 0; i < rows; i++) {
		for (int j = rows; j >= i; j--) {
			cout << " ";
		} 
		for (k = 1; k <= 2 * i - 1; k++) {
		cout << "*";
	    }
		cout << endl; 
	}*/
	return 0;
}