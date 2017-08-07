#include <iostream>
#include <vector>
using namespace std;

//ERROR: 题目要求的是，找到a中的奇数值，将这些值本身翻倍。指的是修改a内的值，不是翻倍后push到另一个vector。
int main()
{
	int word;
	vector<int> a;
    vector<int> b;
	while (cin >> word)
	{
		a.push_back(word);
	}
	for (auto &i : a){
		(i % 2) ? b.push_back(2 * i) : nullptr;
	}
	for (auto &j : b){
		cout << j << " ";
	}
	cout << endl;
	system("pause");
	return 0;

}