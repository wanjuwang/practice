#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string word;
	vector<string> a;
	while (cin >> word) {
		a.push_back(word);
	}
	for (auto c : a) {
		for (auto &d : c)
			d = toupper(d);
		cout << c << endl;
	}
	system("pause");
	return 0;

}
