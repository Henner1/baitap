#include <iostream>
int main()
{
    int m;
    float p = 1;
    int n;
    float q = 1;

    std::cout << ("\nNhap vao so m: ");
    std::cin >> m;
    if (m < 1)
    {
        std::cout << ("\nM phai lon hon 1 !");
    }
    while (m < 1);
    for (int i = 1; i <= m; i++) {
        p = p * i;
    }

    std::cout << ("\nNhap vao so n: ");
    std::cin >> n;
    if (n < 1)
    {
        std::cout << ("\nN phai lon hon 1 !");
    }
    while (n < 1);
    for (int i = 1; i <= n; i++)
    {
        q = q * i;
    }
    std::cout << "-----------------------------\n";
    std::cout << "Tong cua "<< m <<"! va " << n <<"! la " << p + q << '\n';
    return 0;

}
