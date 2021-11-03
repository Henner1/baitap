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
    cout << "**********************************\n";
    if (x == 1)
    {
        
        cout << "Cac so sau khi duoc sap xep tang dan: ";
        for (i = 0; i < count; ++i)
            cout << "\n" << number[i];
    }
    else if (x==2)
    {
        cout << "Toi khong biet lam dau";
    }
    else
    {
        cout << "****************\n";
        cout << "*Nhap 1 di pls *\n";
        cout << "*              *\n";
        cout << "****************";
    }


}
int main()
{
    int i, count, number[20];
    int x;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> count;
    cout << "--------------------------------";
    cout << "\nNhap gia tri cho tung phan tu trong mang:\n";
    cout << "--------------------------------\n";
    
        for (i = 0; i < count; ++i)
            cin >> number[i];
        cout << "--------------------------------\n";
        sap_xep(number, count);
   
   return 0;
}