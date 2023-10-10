#include <iostream>
using namespace std;

//1. От 1 до n.
//Дано натуральное число n.Выведите все числа от 1 до n.Этим должна заниматься отдельная функция, которая вызывается из мейна.
//Ввод: 5
//Вывод : 1 2 3 4 5


//2. От A до B.
//Даны два целых числа A и В.Выведите все числа от A до B включительно, в порядке возрастания, если A < B, или в порядке убывания в противном случае.
//Ввод: 5 1
//Вывод : 5 4 3 2 1

//3. Точная степень двойки.
//Дано натуральное число N.Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.
//Операцией возведения в степень пользоваться нельзя!
//Ввод: 3 8
//Вывод : NO YES

//4. Сумма цифр числа.
//Дано натуральное число N.Вычислите сумму его цифр.
//При решении этой задачи нельзя использовать строки, списки, массивы, глобальные переменные(ну и циклы, разумеется).
//Ввод: 179
//Вывод : 17



void increase();

void decreasing();

void degree(int user_number);

int sum(int number);

void back(int n);

void front(int f);

int main()
{
	cout << "#1:\n";
	increase();
	cout << "\n";

	cout << "#2:\n";
	decreasing();
	cout << "\n";

	cout << "#3:\n";
	int user_number;
	cout << "Input number: ";
	cin >> user_number;
	degree(user_number);
	cout << "\n";

	cout << "#4:\n";
	int number;
	cout << "Input number: ";
	cin >> number;
	cout << sum(number) << "\n";
	cout << "\n";


	cout << "#5:\n";
	int n;
	cout << "Input number: ";
	cin >> n;
	back(n);
	cout << "\n";

	cout << "#6:\n";
	int f;
	cout << "Input number: ";
	cin >> f;
	front(f);
	cout << "\n";
}

void increase() {
	static int a = 0;
	a++;

	cout << a << "\n";
	if (a < 5)
	{
		increase();
	}

}

void decreasing(){
	static int b = 6;
	b--;
	cout << b << "\n";

	if (b != 1)
	{
		decreasing();
	}

}


void degree(int user_number)
{
	if (user_number > 0 && (user_number & (user_number - 1)) == 0)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
}


int sum(int number) {
	int temp = 0;
	while (number > 0)
	{
		temp += number % 10;
		number = number / 10;
	}
	return temp;
}


void back(int n)
{
	if (n > 0)
	{
		cout << n % 10 << " ";
		back(n / 10);
	}
}


void front(int f)
{
	if (f >= 10)
	{
		front(f / 10);
		cout << " ";
	}
	cout << f % 10;
}