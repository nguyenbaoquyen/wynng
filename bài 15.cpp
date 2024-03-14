#include <iostream>
using namespace std;

int main()
{
    int thang;
    cout << "Moi nhap vao thang: ";
    cin >> thang;

    //kiểm tra điều kiện
    if (thang >= 1 && thang <= 3)
        cout << "Quy 1";
    else if (thang >= 4 && thang <= 6)
        cout << "Quy 2";
    else if (thang >= 7 && thang <= 9)
        cout << "Quy 3";
    else if (thang >= 10 && thang <= 12)
        cout << "Quy 4";
    else
        cout << "Thang tao lao";
   
        
}




