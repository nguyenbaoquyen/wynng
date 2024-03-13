#include <iostream>
using namespace std;

int main()
{
	int thang, nam;
	cout << "Moi nhap vao mot thang: ";
	cin >> thang;
	//kiểm tra điều kiện
	if (thang == 2) {
		cout << "Moi nhap vao nam: ";
		cin >> nam;
		//kiểm tra xem năm nhập vào có phải nhuận hay không?
		if (((nam % 4 == 0) && (nam % 100 != 0)) || (nam % 400 == 0))
			cout << thang << "/" << nam << "có 29 ngay ";
		else
			cout << thang << "/" << nam << "có 28 ngày ";
	}
	else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
		cout << thang << "có 30 ngày";
	else
		cout << thang << "có 31 ngày";
}




	



