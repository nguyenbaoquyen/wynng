#include <iostream>
using namespace std;

int main()
{
    double dtb;
    cout << "Moi nhap vao diem trung binh: ";
    cin >> dtb;
    string ketQua = (dtb >= 8) ? "Gioi" : ((dtb >= 6.5 && dtb < 8) ? "Kha" : (dtb >= 5 && dtb < 6.5) ? "Trung Binh" : "yeu");
    cout << ketQua;
}
