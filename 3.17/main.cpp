#include <iostream>
#include <vector>
#include <string>
using namespace std;

//NOTE: 程序代码不只是给机器编译运行的，也是给其他人还有以后的自己读的，在写程序时，变量名称要能起到自描述作用，描述自己的内容或是用途。函数名，类名也是如此。
int main()
{
	vector<string> words;
	string input_word;
	while (cin >> input_word) {
		words.push_back(input_word);
	}


	//NOTE: 在多层嵌套循环的时候，最好使用有意义的单词来作为循环变量，而不要使用a,b,c之类的单个字符。
	//因为单个字符没有意义，不小心就会弄混，用错。
	for (auto &word : words) {
		for (auto &letter: word)
			letter = toupper(letter);
		cout << word << endl;
	}

	system("pause");
	return 0;
}
