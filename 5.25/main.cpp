#include <iostream>
#include <stdexcept>

using namespace std;


int do_while_method() {
	int a1, a2;

	bool is_error = false;
	do {
	   is_error = false;
		cin >> a1 >> a2;
		try
		{
			if (a2 == 0)
				throw runtime_error("disivor is zero");
		}
		catch (runtime_error err)
		{
			is_error = true;
			cout << "Try again with entering two new numbers" << endl;
		}
	} while (is_error);

	cout << (a1 / a2) << endl;
	system("pause");
	return 0;
}

int while_method() {
	int a1, a2;	
	bool is_error = true;
	while (is_error) {
		is_error = false;
			cin >> a1 >> a2;
			try
			{
				if (a2 == 0)
					throw runtime_error("disivor is zero");
			}
			catch (runtime_error err)
			{
				is_error = true;
				cout << "Try again with entering two new numbers" << endl;
			}
	}
	cout << (a1 / a2) << endl;
	system("pause");
	return 0;
}

int main()
{
	return do_while_method();
	//return while_method();
}