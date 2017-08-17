#include <iostream>
#include <vector>
#include <iterator>
#include "output.h"

using namespace std;

int main()
{
	vector<int> v = { 0,1,2,3,4,5,6,7 };
	output(v);
	//output_1(v);
	system("pause");
	return 0;
}