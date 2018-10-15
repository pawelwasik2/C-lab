#include <iostream>

using namespace std;

void silnia(int a);
void pierwiastek(int a, int b, int c);
double obliczp(int a);
int fib(int a);

int main()
{
	int wybor;
	cout << "Wybierz: \n1 - silnia \n2 - pierwiastek rownania kwadratowego \n3 - fibonacci \n";
	cin >> wybor;
	switch (wybor)
	{
	case 1:
		int liczba;
		cout << "Z jakiej liczby chces zobliczyc silnie?\n";
		cin >> liczba;
		silnia(liczba);
		break;
	case 2:
		int a, b, c;
		cout << "podaj a \n";
		cin >> a;
		cout << "podaj b \n";
		cin >> b;
		cout << "podaj c \n";
		cin >> c;
		pierwiastek(a, b, c);
		break;
	case 3:
		int num;
		cout << "Podaj ktora z kolei liczbe ciagu chcesz zobaczyc \n";
		cin >> num;
		cout << "Wynik: " << fib(num) << "\n";
		break;
	}
	system("PAUSE");
}

void silnia(int a)
{
	int i,wynik = 1;
	for (i = 1; i <= a; i++)
	{
		wynik = wynik * i;
	}
	cout << a << "! = " << wynik << endl;
	system("PAUSE");
}

void pierwiastek(int a, int b, int c)
{
	double delta;
	delta = (b*b) - 4 * (a*c);
	if (delta > 0)
	{
		int x1 = 0, x2 = 0;
		int dp = obliczp(delta);
		x1 = (-b - dp) / 2 * a;
		x2 = (-b + dp) / 2 * a;
		cout << "Rozwiazania: " << x1 << " oraz " << x2 << endl;
		system("PAUSE");
	}
	if (delta==0)
	{
		int x1 = 0;
		x1 = -b / 2 * a;
		cout << "Rozwiazanie: " << x1;
		system("PAUSE");
	}
	else
		cout << "Delta ujemna = brak rozwiazan.";
		system("PAUSE");
}

double obliczp(int a)
{
	int i;
	for (i = 0; i < 50; i++)
	{
		if (i*i == a) return i;
	}
	return 0;
}

int fib(int a)
{
	if(a < 2)
		return a;
	else
		return fib(a-1) + fib(a-2);
}