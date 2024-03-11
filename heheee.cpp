#include <iostream>
using namespace std;

int main()
{
    //1.Khai báo hằng
    const int DOSOI = 100;
    const int DODONG = 0;
    int tuoi = 15;
    cout << "Nhiet do soi =" << DOSOI << endl;
    cout << "Nhiet do dong =" << DODONG << endl;

    
    tuoi = 100;

    //2.type promotion
    int a = 8;
    double b = 7.5;
    //xuất thử a+b
    cout << "a+b=" << a + b << endl;

    //khai báo biến kq để nhận kết quả là tổng
    int kq;
    kq = a + b;
    //xuất thử kq
    cout << "a+b=" << kq << endl;

    double kq2;
    kq2 = a + b;
    //xuất thử kq
    cout << "a+b=" << kq2 << endl;

}


