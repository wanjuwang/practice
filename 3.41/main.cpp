#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	vector<int> b(begin(a), end(a));
	for (vector<int>::size_type c = 0; c != b.size();++c)
		cout << b[c] << " ";
	cout << endl;
	
	system("pause");
	return 0; 
}