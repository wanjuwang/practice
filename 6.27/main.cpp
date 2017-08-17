#include <iostream>
#include <initializer_list>

using namespace std;

int sum(initializer_list<int> init)
{
	int sum = 0;
	for (auto i = init.begin(); i != init.end(); ++i)
		sum += *i;
	return sum;
}

int main()
{
	return 0;
}