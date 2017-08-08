#include <iostream>
#include <string>

using namespace std;

int main()
{
	char letter;
	unsigned vowel_cnt=0;
	while (cin >> letter)
	{
		if (letter == 'a')
			++vowel_cnt;
		if (letter == 'e')
			++vowel_cnt;
		if (letter == 'i')
			++vowel_cnt;
		if (letter == 'o')
			++vowel_cnt;
		if (letter == 'u')
			++vowel_cnt;		
	}
	cout << "the number of vowels is " << vowel_cnt <<'.'<<endl;
	system("pause");
	return 0;
}