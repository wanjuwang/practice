#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*int draft()
{
	char a;
	vector<string> temp;
	int argc_1 = 0;
	while ((a = getchar()) != EOF)
	{
		string save;/
		if (a != ' ' || a != '/n')
			string save = save + a;
		else {
			++argc_1;
			temp.resize(argc_1);
			temp[argc_1] = save;
			save = nullptr;
		}
	}
	const int argc_2 = static_cast<const int> (argc_1);
	constexpr int argc = argc_2;
	char *argv[argc];
	for (size_t index = 0; index != argc; ++index)
		char *argv[index] = temp[index].c_str;

	system("pause");
	return 0;
}*/

/*int wrong_main()
{
	char a;
	vector<string> temp;
	int argc_1 = 0;
	const int argc = 5;
	string save = {};
	while ((a = getchar()) != EOF)
	{
		 ¡°\¡± ·Ç ¡°/¡± 
		if ((a != ' ') && (a != '\n'))
			//string save = save + a;
			save = save + a;
		else {
			++argc_1;
			temp.resize(argc_1);
			temp[argc_1-1] = save;
			save = {};
		}
	}
	const int argc_2 = static_cast<const int>(argc_1);
	char *argv[argc_2];
	for (size_t index = 0; index < argc; ++index)
	{
		argv[index] = const_cast<char*> (temp[index].c_str());
		
	}
	cout << argc_1 << " " << argv[0] << " " << argv[1] << " " << argv[2] << " " << argv[3] << " " << argv[4] << endl;
	/*for (auto item : temp)
		cout << item << " ";
	cout << endl;
	system("pause");
	return 0;
}*/

int main(int argc, char *argv[])
{
	cout << "argv[0] = \"" << argv[0] << "\"" << endl;
	cout << "argv[1] = \"" << argv[1] << "\"" << endl;
	cout << "argv[2] = \"" << argv[2] << "\"" << endl;
	cout << "argv[3] = \"" << argv[3] << "\"" << endl;
	cout << "argv[4] = \"" << argv[4] << "\"" << endl;
	system("pause");
	return 0;
}