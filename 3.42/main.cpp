#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> a = { 0,1,2,3,4,5,6,7,8,9 };
	int b[10];
	for (size_t c = 0;c <= 9;++c) {
		decltype(a.size()) d = c;
		b[c] = a[d];
		cout << b[c];
	}
	system("pause");
	return 0;
}