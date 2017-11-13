#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, sum;
  	float avg;
  	cout << "Enter First Number: ";
  	cin >> num1;
  	cout << "Enter Second Number: ";
  	cin >> num2;
  	cout << "Enter Third Number: ";
  	cin >> num3;
  	sum = num1 + num2 + num3;
  	avg = sum / 3;
  	cout << "Average of the Three number is: ";
  	cout << avg;
  return 0;
}
