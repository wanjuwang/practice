#include <iostream>
#include <string>

using namespace std;

int main()
{
	char letter;
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	while (cin >> letter)
	{
		switch (letter){
		case 'a':
		case 'A' :
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
		default:
			break;
		}
		
	}
	cout << "the number of vowel A and a is " << aCnt << '.' << endl;
	cout << "the number of vowel E and e is " << eCnt << '.' << endl;
	cout << "the number of vowel I and i is " << iCnt << '.' << endl;
	cout << "the number of vowel O and o is " << oCnt << '.' << endl;
	cout << "the number of vowel U and u is " << uCnt << '.' << endl;
	system("pause");
	return 0;
}