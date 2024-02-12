//////PROGRAMM MADE BY ALISHER RADJABOV
///// U2310215
#include <iostream>
using namespace std;
void swap();
void conv();
void termi();
void ar();
void menu();

void menu() {
	
		cout << "......||.........[CHOOSE THE PROGRAM]........||....." <<endl;
		cout << "1) Swapping Papping programm" << endl;
		cout << "2) CONVERTING-FLODING PROGRAMM" << endl;
		cout << "3) THE SUM41 programm" << endl;
		cout << "4) AREA-TREA programm" << endl;
		cout << "5) GET FLACKIN OUT!!!" << endl;
	
}

///////// PROGRAMM1
void swap(int &a , int &b) {
	int z;
	cout << " Enter the first number: "; cin >> a;
	cout << " Enter the Sec Num"; cin >> b;
	z = a;
	a = b;
	b = z;
	cout << " GULASAL, YOU RE HEALTHY!!!" << a << b;
}

/////////PROGRAMM 2
void conv() {
	int tot, hrs, min, sec;

	cout << "Input total minutes: ";
	cin >> tot;
	cout << "Input total seconds: ";
	cin >> sec;

	hrs = tot / 60;
	min = tot % 60;

	cout << "Time: " << hrs << ":" << min << ":" << sec;
}

//////////PROGRAMM 3
int factorial(int num) {
	int fact = 1;
	for (int i = 1; i <= num; i++) {
		fact *= i;
	}
	return fact;
}

double calculateSum(int n) {
	double sum = 0.0;
	for (int i = 1; i <= n; i++) {
		double term = pow(i, i) / factorial(i);
		sum += term;
	}
	return sum;
}

 
 ///////////PROGRAMM 4
void ar() {
	const float P = 3.14;
	int rad;
	double area;

	cout << "Enter the radius of circle";
	cin >> rad;
	area = P * rad * rad;
	cout << "HEEEEEEEEEEEEEEEEEY " << area;
}

int main() {
	int n;

	// Input the value of n
	std::cout << "Enter the value of n: ";
	std::cin >> n;

	// Calculate the sum of the series using function
	double sum = calculateSum(n);

	// Display the sum of the series
	std::cout << "Sum of the series: " << sum << std::endl;

		return 0;

	}
