#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (b == 0)
		throw runtime_error("disivor is zero");
	cout << (a / b) << endl;
	system("pause");
	return 0;
}