#include<iostream>

using namespace std;

int main() {

  	int numberOne, numberTwo;
	int summa;

	setlocale(LC_ALL,"ru");

	cout << "¬ведите первое число" << endl;
	cin>> numberOne;
	cout << "¬ведите второе число " << endl;
	cin >> numberTwo;

	if (numberOne == numberTwo) cout << "1=2" << endl;
	else if (numberOne > numberTwo)cout << "1>2" << endl;
	else cout << "2>1" << endl;


	return 0;
}