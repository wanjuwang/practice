#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
	int a1, a2;
	cin >> a1 >> a2;
    begin: try
	{
     if (a2 == 0)
		throw runtime_error("disivor is zero");
	}
	catch (runtime_error err)
	{
		cout << "Try again with enter two new numbers"<<endl;
		cin >> a1 >> a2;
		goto begin;

	}
	
	cout << (a1 / a2) << endl;
	system("pause");
	return 0;
}