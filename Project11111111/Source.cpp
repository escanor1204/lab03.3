#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>


using namespace std;
int main()
{

	double x; //������� ��������
	double R; //������� ��������
	double y; //��������� ���������� ������
	const double PI = 3.141592653589793;
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if (x <= -7 - R)
		y = R;
	else
		if (-7 - R < x && x <= -7 + R)
			y = R - sqrt(R * R - x * x - 14 * x - 49);
		else
			if (-7 + R < x && x <= -4)
				y = R;
			else
				if (-4 < x && x <= 0)
					y = 3 * R / 4;
				else
					if (0 < x && x <= PI)
						y = sin(x);
					else
						y = x - PI;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;




}