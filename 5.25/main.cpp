#include <iostream>
#include <stdexcept>

using namespace std;

//TODO: 不要使用goto实现该题。
//NOTE: 不要在编程中使用goto。goto能表达的逻辑都可以通过if和for, while等实现。
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