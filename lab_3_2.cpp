#include <iostream>
#include <limits>
using namespace std;

int main() {
  // เขียนโปรแกรมเพิ่ม เพื่อหาขนาดตัวแปรที่กำหนด
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of short signed int : " << sizeof(short signed int) << endl;
   cout << "Size of short unsigned int : " << sizeof(short unsigned int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;


   // เขียนโปรแกรมเพิ่มเพื่อหาช่วงของค่าที่เก็บได้
   cout << "Min of char : " << numeric_limits<char>::min() << endl;
   cout << "Max of char : " << numeric_limits<char>::max() << endl;

   cout << "Min of signed char : " << numeric_limits<signed char>::min() << endl;
   cout << "Max of signed char : " << numeric_limits<signed char>::max() << endl;

   cout << "Min of unsigned char : " << numeric_limits<unsigned char>::min() << endl;
   cout << "Max of unsigned char : " << numeric_limits<unsigned char>::max() << endl;

   cout << "Min of char int : " << numeric_limits<int>::min() << endl;
   cout << "Max of char int : " << numeric_limits<int>::max() << endl;

   cout << "Min of signed int : " << numeric_limits<signed int>::min() << endl;
   cout << "Max of signed int : " << numeric_limits<signed int>::max() << endl;

   cout << "Min of unsigned int : " << numeric_limits<unsigned int>::min() << endl;
   cout << "Max of unsigned int : " << numeric_limits<unsigned int>::max() << endl;

   cout << "Min of short int : " << numeric_limits<short int>::min() << endl;
   cout << "Max of short int : " << numeric_limits<short int>::max() << endl;

   cout << "Min of signed short int : " << numeric_limits<signed short int>::min() << endl;
   cout << "Max of signed short int : " << numeric_limits<signed short int>::max() << endl;

   cout << "Min of long int : " << numeric_limits<long int>::min() << endl;
   cout << "Max of long int : " << numeric_limits<long int>::max() << endl;

   cout << "Min of signed long int : " << numeric_limits<signed long int>::min() << endl;
   cout << "Max of signed long int : " << numeric_limits<signed long int>::max() << endl;

   cout << "Min of unsigned long int : " << numeric_limits<unsigned long int>::min() << endl;
   cout << "Max of unsigned long int : " << numeric_limits<unsigned long int>::max() << endl;

   cout << "Min of float : " << numeric_limits<float>::min() << endl;
   cout << "Max of float : " << numeric_limits<float>::max() << endl;

   cout << "Min of double : " << numeric_limits<double>::min() << endl;
   cout << "Max of double : " << numeric_limits<double>::max() << endl;

   cout << "Min of long double : " << numeric_limits<long double>::min() << endl;
   cout << "Max of long double : " << numeric_limits<long double>::max() << endl;

   cout << "Min of long double : " << numeric_limits<long double>::min() << endl;
   cout << "Max of long double : " << numeric_limits<long double>::max() << endl;

   cout << "Min of bool : " << numeric_limits<bool>::min() << endl;
   cout << "Max of bool : " << numeric_limits<bool>::max() << endl;


  return 0;
}
