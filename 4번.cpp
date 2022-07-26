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
         cout << "3가지 이름 입력: " << endl;
		for (int j = 0; j < 3; j++) {
			cin >> mem[i].name[j];
		}
		cout << "표시할 이름번호 입력: " << endl;
		cin >> mem[i].prefer;
	}
	for (int i = 0; i < 5; i++) {
		cout << mem[i].prefer << "번 이름" << endl;
		cout << mem[i].name[mem[i].prefer] << endl;
	}
}
