// Калькулитор.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Выберите какую операцию вы хотите выполнить:\n";
	cout << "1.Сложить два числа\n";
	cout << "2.Вычесть первое из второго\n";
	cout << "3.Перемножить два числа\n";
	cout << "4.Разделить первое на второе\n";
	cout << "5.Возвести в степень N первое число\n";
	cout << "6.Найти квадратный корень из первого числа\n";
	cout << "7.Найти один процент от первого числа\n";
	cout << "8.Найти факториал числа\n";
	cout << "9.Выйти из программы\n";

	string action;

	cin >> action;
	double result;

	do
	{
		if (action == "1")
		{
			double num1{}, num2{};
			cout << "Введите первое число\n";
			cin >> num1;
			cout << "Введите второе число\n";
			cin >> num2;
			result = num1 + num2;

			cout << "Результат: " << result;
			cout;
			cout << ("\nВведите операцию еще раз\n");
			cin >> action;
		}
		else if (action == "2")
		{
			double num1{}, num2{};
			cout << "Введите первое число\n";
			cin >> num1;
			cout << "Введите второе число\n";
			cin >> num2;
			result = num1 - num2;
			cout << "Результат: " << result;
			cout;
			cout << ("Введите операцию еще раз\n");
			cin >> action;
		}
		else if (action == "3")
		{
			double num1{}, num2{};
			cout << "Введите первое число\n";
			cin >> num1;
			cout << "Введите второе число\n";
			cin >> num2;
			result = num1 * num2;
			cout << "Результат: " << result;
			cout;
			cout << ("\nВведите операцию еще раз\n");
			cin >> action;
		}
		else if (action == "4")
		{
			double num1{}, num2{};
			cout << "Введите первое число\n";
			cin >> num1;
			cout << "Введите второе число\n";
			cin >> num2;
			if (num2 == 0)
			{
				cout << ("На ноль делить нельзя!\n");
				cout;
				cout << ("Введите операцию еще раз\n");
				cin >> action;
			}
			else
			{
				result = num1 / num2;
				cout << "Результат: " << result;
				cout;
				cout << ("\nВведите операцию еще раз\n");
				cin >> action;
			}
		}
		else if (action == "5")
		{
			double num1{}, num2{};
			cout << "Введите первое число\n";
			cin >> num1;
			cout << "Введите степень, в которое нужно возвести число\n";
			cin >> num2;
			result = pow(num1, num2);
			cout << "Результат: " << result;
			cout;
			cout << ("\nВведите операцию еще раз\n");
			cin >> action;
		}
		else if (action == "6")
		{
			double num1{};
			cout << "Введите число\n";
			cin >> num1;
			result = sqrt(num1);
			cout << "Результат: " << result;
			cout;
			cout << ("\nВведите операцию еще раз\n");
			cin >> action;
		}
		else if (action == "7")
		{
			double num1{};
			cout << "Введите число\n";
			cin >> num1;
			result = (num1 / 100);
			cout << "Результат: " << result;
			cout;
			cout << ("\nВведите операцию еще раз\n");
			cin >> action;
		}
		else if (action == "8")
		{
			double num1{};
			cout << "Введите число\n";
			double x;
			result = 1;
			for (x = 1; x <= num1; x++)
			{
				result = result * x;
			}
			cout << "Результат: " << result;
			cout;
			cout << ("\nВведите операцию еще раз\n");
			cin >> action;
		}
	} while (action != "9");
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
