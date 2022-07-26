#include<iostream>
using namespace std;
typedef enum {camera,piano,tree,game}DO;
int main()
{
	int choice;
	while (1) {
		cin >> choice;
		switch (choice) {
		case camera:
			cout << camera << endl;
			break;
		case piano:
			cout << piano << endl;
			break;
		case tree:
			cout << tree << endl;
			break;
		case game:
			cout << game << endl;
			break;
		defalut:
			break;
		}
		if (choice == 4)break;
	}
}
