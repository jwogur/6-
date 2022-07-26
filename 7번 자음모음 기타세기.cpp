#include <iostream>
#include <string>
#include<cctype>
using namespace std;
int main()
{
	string temp;
	int moum = 0, zaum = 0, etc = 0;
	while (cin >> temp) {
		if (temp == "q")break;
		if (isalpha(temp[0])) {
			switch (temp[0]) {
			case'a':
			case'A':
			case'e':
			case'E':
			case'i':
			case'I':
			case'o':
			case'O':
			case'u':
			case'U':
				moum++;
				break;
			default:
				zaum++;
				break;
			}
		}
		else etc++;
	}
	cout << "모음: " << moum << endl;
	cout << "자음: " << zaum << endl;
	cout << "기타: " << etc << endl;
}
