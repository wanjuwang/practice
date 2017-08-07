#include <iostream>
#include  <string>

using namespace std;

int main()
{
	string a1("hello,world!");
	string a2("hello,earth?");
	char b1[] = "hello,world!";
	char b2[] = "hello,earth?";
	cout << ((a1 > a2) ? "a1 has a bigger size than a2" : (a1 == a2) ? "a1 is equal to a2" : "a1 has a smaller size than a2") << endl;
	cout << (((!strcmp(b1, b2))) ? "b1 is equal to b2" : ((strcmp(b1, b2)) > 0) ? "b1 has a bigger size than b2" : "b1 has a smaller size than b2") <<endl;

	system("pause");
	return 0;
}