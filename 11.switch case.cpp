#include <iostream>
using namespace std;

int main()
{
    //nhập vào n,ktra chẵn lẻ
    int n;
    cout << "Moi nhap vao so nguyen n: ";
    cin >> n;
    //kiểm tra số dư n / 2
    int div = n % 2;

    switch (div)
    {
    case 0:
        cout << n << "la so chan";
        break;


    default:cout << n << "la so le";
        break;
    }
        
}


