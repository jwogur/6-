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
		else cout << "���ĺ��� �Է�" << endl;
		cout << "��ȯ�� ����: " << ch << endl;
	}
}