#include <iostream>
using namespace std;
void sap_xep (int number[], int count)
{
    int temp, i, j, k;
    int x;
    for (j = 0; j < count; ++j)
    {
        for (k = j + 1; k < count; ++k)
        {
            if (number[j] > number[k])
            {
                temp = number[j];
                number[j] = number[k];
                number[k] = temp;
            }
        }
    }
    cout << "1.Sap xep tang dan\n";
    cout << "2.Sap xep giam dan\n";
    cout << "--------------------------------\n";
    cout << "Chon: ";
    cin >> x;
    cout << "--------------------------------\n";
    if (x == 1)
    {
        
        cout << "Cac so sau khi duoc sap xep tang dan: ";
        for (i = 0; i < count; ++i)
        cout << "\n" << "Enter number " << i + 1 << ": "<< number[i];
    }
    else if (x==2)
    {
        cout << "************************\n";
        cout << "*Toi khong biet lam dau*\n";
        cout << "************************\n";
    }
    else
    {
        cout << "****************\n";
        cout << "*Nhap 1 di pls *\n";
        cout << "****************";
    }


}
int main()
{
    int i, count, number[20];
    int x;
    cout << "Co bao nhieu so: ";
    cin >> count;
    cout << "--------------------------------\n";
    cout << "Cac so do la:\n";
    cout << "--------------------------------\n";

        for (i = 0; i < count; ++i)
         cin >> number[i];
        cout << "--------------------------------\n";
        sap_xep(number, count);
   
   return 0;
}
