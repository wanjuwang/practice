#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> object1{ 0,1,1,2 };
	vector<int> object2{ 0,1,1,2,3,5,8 };
	int same_amount=0;
	if (object1.size() != object2.size()) {
		if (object1.size() > object2.size()) {
			for (decltype(object2.size()) index = 0; index != object2.size() && object1[index] == object2[index];++index)
				++same_amount;
			if (same_amount == object2.size())
				cout << "object2 is the prefix of object1." << endl;
		}
		if (object1.size() < object2.size()) {
			for (decltype(object1.size()) index = 0; index != object1.size() && object1[index] == object2[index];++index)
					++same_amount;
				if (same_amount == object1.size())
					cout << "object1 is the prefix of object2." << endl;
		}
	}
	system("pause");
	return 0;
}