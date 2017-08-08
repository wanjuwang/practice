#include <iostream>
#include <string>

using namespace std;

int main()
{
	char letter;
	string text;
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, ffCnt=0, flCnt=0, fiCnt=0;
	while (cin >> letter)
	{
		text += letter;
	}

	for (auto item = text.begin(); item != text.end(); ++item) {
		switch (*item) {
		case 'a':
		case 'A':
			++aCnt;
			break;
		case 'e':
		case 'E':
			++eCnt;
			break;
		case 'i':
		case 'I':
			++iCnt;
			break;
		case 'O':
		case 'o':
			++oCnt;
			break;
		case 'u':
		case 'U':
			++uCnt;
			break;
		case 'f' :
			if ((item+1) != text.end()) {
				switch (*(item+1))
				{
				case 'l':
					++flCnt;
					break;
				case 'f':
					++ffCnt;
					break;
				case 'i':
					++fiCnt;
					break;
				default:
					break;
				}
			}
			break;
		default:
			break;
		}

	}
	cout << "the number of vowel A and a is " << aCnt << '.' << endl;
	cout << "the number of vowel E and e is " << eCnt << '.' << endl;
	cout << "the number of vowel I and i is " << iCnt << '.' << endl;
	cout << "the number of vowel O and o is " << oCnt << '.' << endl;
	cout << "the number of vowel U and u is " << uCnt << '.' << endl;
	cout << "the number of 'fl' is " << flCnt << '.' << endl;
	cout << "the number of 'ff' is " << ffCnt << '.' << endl;
	cout << "the number of 'fi' is " << fiCnt << '.' << endl;
	system("pause");
	return 0;
}