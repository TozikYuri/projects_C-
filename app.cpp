#include<iostream>

using namespace std;

int main() {

	setlocale(LC_ALL,"ru");
	
	float sum=0;

	float max = 0;
	float min = 0;

	float array[] = {12.3,4.5,-5.3,7.8,12.5,6.8,-2.6};

	cout << "Исходный массив" << endl;

	for (float n : array) {
		cout << n << " ";
		if (n < 0)sum += n;
		if (n > max)max = n;
		if (n < min)min = n;
	}
	cout << "\nСумма отрицательных элементов массива:"<<sum<< endl;
	cout << "Max:" << max << endl;
	cout << "Min" << min << endl;
	

	return 0;
}


