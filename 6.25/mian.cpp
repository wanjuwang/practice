#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	string result;
	for (size_t index = 0; index != argc; ++index)
		result += argv[index];
	cout << result << endl;
	system("pause");
	return 0;
}