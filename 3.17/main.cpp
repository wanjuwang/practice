#include <iostream>
#include <vector>
#include <string>
using namespace std;

//NOTE: ������벻ֻ�Ǹ������������еģ�Ҳ�Ǹ������˻����Ժ���Լ����ģ���д����ʱ����������Ҫ�������������ã������Լ������ݻ�����;��������������Ҳ����ˡ�
int main()
{
	vector<string> words;
	string input_word;
	while (cin >> input_word) {
		words.push_back(input_word);
	}


	//NOTE: �ڶ��Ƕ��ѭ����ʱ�����ʹ��������ĵ�������Ϊѭ������������Ҫʹ��a,b,c֮��ĵ����ַ���
	//��Ϊ�����ַ�û�����壬��С�ľͻ�Ū�죬�ô�
	for (auto &word : words) {
		for (auto &letter: word)
			letter = toupper(letter);
		cout << word << endl;
	}

	system("pause");
	return 0;
}
