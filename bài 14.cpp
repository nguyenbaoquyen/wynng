#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, delta, x1, x2;
	//cho người dùng nhập a,b,c
	cout << "Mời nhập vào a: ";
	cin >> a;
	cout << "Mời nhập vào b: ";
	cin >> b;
	cout << "Mời nhập vào c: ";
	cin >> c;

	//tính delta
	delta = (b * b) - (4 * a * c);
	if (delta < 0)
		cout << "Phương trình vô nghiệm ";
	else if (delta == 0) {
		x1 = (-b) / (2 * a);
		cout << "Phương trình có nghiệm kép x1 = x2 = " << x1;
	}
	else 
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "Phương trình có 2 nghiệm phân biệt x1 = " << x1 << "và x2 = " << x2;
	}





