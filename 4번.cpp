#include <iostream>
#include <string>
using namespace std;
typedef struct
{
	string name[3];
	int prefer;
}member;
int main()
{
	member* mem = new member[5];
	for (int i = 0; i < 5; i++) {
         cout << "3���� �̸� �Է�: " << endl;
		for (int j = 0; j < 3; j++) {
			cin >> mem[i].name[j];
		}
		cout << "ǥ���� �̸���ȣ �Է�: " << endl;
		cin >> mem[i].prefer;
	}
	for (int i = 0; i < 5; i++) {
		cout << mem[i].prefer << "�� �̸�" << endl;
		cout << mem[i].name[mem[i].prefer] << endl;
	}
}
