#include<iostream>
using namespace std;
int main()
{
	int n;
	int k = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		k += i;
	cout << "Tong cac so tu 1 den " << n << " la:  " << k << "\n";

}