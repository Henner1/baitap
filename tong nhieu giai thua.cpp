#include <iostream>
using namespace std;

int main() {

	int n;
    int sum = 0;

	cout << "Co bao nhieu so: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{

		int number;
		cout << "Enter number " << i + 1 << ": ";
		cin >> number;
		float p = 1;
		for (int j = 1; j <= number; j++)

		 p = p * j;
		sum = sum + p;
		
	}
	
	cout << "tong : " << sum << endl;
	return 0;

}

