#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int word;
	vector<int> numbers;
    
	while (cin >> word)
	{
		numbers.push_back(word);
	}
	for (auto &i : numbers){
		i=((i % 2) ? (2 * i) : i);
		cout << i << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}