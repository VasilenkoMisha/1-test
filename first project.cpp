#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "rus");


	int x1, x2, z, q, a, b;

	cout << "для прямоугольного треугольника, с гипотенузой лежащей на оси x=y введите вершины x1 и x2" << endl;
	
	cout << "x1 = ";
	cin >> x1;
	cout << endl;

	cout << "x2 = ";
	cin >> x2;
	cout << endl;

	cout << "для треугольника, лежащего над прямой х=у, нажмите 1, для треугольника, лежащего под прямой х=у, нажмите 2";
	cout << endl;

	cin >> z;
	cout << endl;

	switch (z)
	{
	case 1:

		cout << "введите количество точек, которые необходимо проверить на их принадлежность к треугольнику: q = ";
		cin >> q;
		cout << endl;

		for (int i = 0; i < q; i++)
		{
			cout << "введите координаты проверяемой точки (а;b)" << endl;
			cout << "a = ";
			cin >> a;
			cout << endl;

			cout << "b = ";
			cin >> b;
			cout << endl;

			if (a >= x1 && a<=x2 && b>=x1 && b<=x2 && b>=a)
			{
				cout << "точка находится внутри треугольника" << endl;
			}
			else
			{
				cout << "точка находится вне треугольника" << endl;

			}


		}

		break;

	case 2:
		cout << "введите количество точек, которые необходимо проверить на их принадлежность к треугольнику: q = ";
		cin >> q;
		cout << endl;

		for (int i = 0; i < q; i++)
		{
			cout << "введите координаты проверяемой точки (a;b)" << endl;
			cout << "a = ";
			cin >> a;
			cout << endl;

			cout << "b = ";
			cin >> b;
			cout << endl;

			if (a >= x1 && a<=x2 && b>=x1 && b<=x2 && a>=b)
			{
				cout << "точка находится внутри треугольника" << endl;
			}

			else
			{
				cout << "точка находится вне треугольника" << endl;
			}


		}
		
		break;

	default:
		cout << "вы ввели некорректное значение";
		break;
	}

}