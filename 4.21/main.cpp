#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int word;
	vector<int> a;
	while (cin >> word)
	{
		a.push_back(word);
	}

	for (auto i : a)
	{
		cout << i << endl;
	}
	return 0;

}