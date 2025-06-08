#include<iostream>

using namespace std;


void main()
{
	setlocale(LC_ALL, "rus");

	cout << "для прямоугольного треугольника ABC, с гипотенузой, лежащей на прямой x = y:"<<endl;

	//координаты треугольника ABC:
	int  const XA = 4, YA = XA;
	int const XB = 10, YB = XB;
	int const XC = XA, YC = XB; 

	//координаты проверяемой точки (x0;y0)
	int x0, y0;

	for (int i = 0; i<1; )
	{
		cout << "введите координаты проверяемой точки\n";

		cout<<"x0 = ";
		cin >> x0;
		cout << endl;

		cout<<"y0 = ";
		cin >> y0;
		cout << endl;

		if(x0==0 && y0==0)
		{
			cout << "проверка окончена" << endl;
			break;
		}

		if(x0>=XA&&x0<=XB&&y0>=XA&&y0<=XB&&x0<=y0)
		{
			cout << "точка находится внутри треугольника" << endl;
		}
		else 
		{
			cout << "точка находится вне треугольника" << endl;
		}
	}


}