#include <iostream>
using namespace std;

int main()
{
    int thang;
    cout << "Moi nhap vao thang: ";
    cin >> thang;
	switch (thang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "Thang co 31 ngay\n";
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "Thang co 30 ngay\n";
	case 2:
		cout << "Thang co 28 hoac 29 ngay\n";
	default:
		cout << "Ban nhap thang tao lao\n";
		break;
	}
}


