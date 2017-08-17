#include <iostream>
#include "swap_reference.h"
using namespace std;
int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	int &r1 = num1, &r2 = num2;
	swap(r1, r2);
	cout << num1 << " " << num2 << endl;
	system("pause");
}