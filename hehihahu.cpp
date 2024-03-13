#include <iostream>
using namespace std;

int main()
{
    //1.ép kiểu rộng (ép từ kiểu bé>lớn) không lo mất dữ liệu
    short a = 10;
    //xuất ra giá trị a;
    cout << "a=" << a << endl;

    //khai báo biến b là kiểu int
    int b;
    b = a; //ép tắt
    b = (int)a; //ép tường minh
    cout << "b= " << b << endl;

    //2.ép kiểu hẹp (ép từ thằng lớn sang thằng bé)
    float soA = 1.25f;
    int soB;
    soB = soA; //ép tắt
    soB = (int)soA; //ép tường minh

    cout << "soA= " << soA << endl;
    cout << "soB= " << soB << endl;

//giải thích có thể mất dữ liệu
    int c = 5000;
    short d = c;
    cout << "c= " << c << endl;
    cout << "d= " << d << endl;


}
