#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	char ch=0 ;
	while (cin>>ch && ch != '@') {
		if (isalpha(ch)) {
			if (islower(ch))ch -= 32;
			else ch += 32;
		}
		else cout << "알파벳만 입력" << endl;
		cout << "변환된 문자: " << ch << endl;
	}
}