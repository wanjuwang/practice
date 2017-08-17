#include <iostream>
#include "swap.h"
using namespace std;
int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	int *p1 = &num1, *p2 = &num2;
	swap(p1, p2);
	cout << num1 << " " << num2 << endl;
	system("pause");
}