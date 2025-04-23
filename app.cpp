#include<iostream>

using namespace std;

int main() {

  	int numberOne, numberTwo;
	int summa;

	setlocale(LC_ALL,"ru");

	cout << "Enter number one " << endl;
	cin>> numberOne ;
	cout << "Enter number two" << endl;
	cin >> numberTwo;

	if (numberOne == numberTwo) cout << "1=2" << endl;
	else if (numberOne > numberTwo)cout << "1>2" << endl;
	else cout << "2>1" << endl;


	return 0;
}