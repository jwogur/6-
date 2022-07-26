#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector <double> darr;
	double temp;
	while (cin >> temp&&darr.size()<=10) {
		darr.push_back(temp);
	}
	for (auto& i : darr)cout << i << endl;
}