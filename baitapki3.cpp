//phan mem dem so uoc chan cua 1 so nguyen duong n
#include <iostream>
using namespace std;
void main()
{
	int n, i, s = 0;
	cout << "moi ban nhap so nguyen duong n: ";
	cin >> n; cin.ignore();
	for (i = 1; i <= n; i++)
	{
		if (n%i == 0 && (n / i) % 2 == 0)s++;
	}
	cout << "\n vay so luong uoc chan cua n la: " << s;
	cin.get();
}