#include <iostream>
#include <vector>
using namespace std;

//ERROR: ��ĿҪ����ǣ��ҵ�a�е�����ֵ������Щֵ��������ָ�����޸�a�ڵ�ֵ�����Ƿ�����push����һ��vector��
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