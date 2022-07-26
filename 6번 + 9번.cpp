#include<iostream>
#include<fstream>
#include<string>
using namespace std;
typedef struct
{
	string name;
	double money;
}gibuza;
int main()
{
	fstream open("test1.txt", ios::in);
	int n;
	open >> n;
	char ch;
	gibuza* p = new gibuza[n];
	for (int i = 0; i < n; i++) {
		open.get(ch);
		getline(open, p[i].name);
		open >> p[i].money;
	}
	for (int i = 0; i < n; i++) {
		if (p[i].money >= 10000)cout << "고액기부자입니다." << endl;
		cout << p[i].name << endl;
		cout << p[i].money << endl;
		cout << "----------------------" << endl;
	}
}