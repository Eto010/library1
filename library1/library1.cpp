
#include <iostream>//Добавляем нужные библиотеки
#include <vector>
#include <string>
using namespace std;
class Line
{
	string a;
	string b;
	string c;
	string d;
	string e;
	string f;
public:
	void changeA(string z)
	{
		a = z;
	};
	void changeB(string z)
	{
		b = z;
	};
	void changeC(string z)
	{
		c = z;
	};
	void changeD(string z)
	{
		d = z;
	};
	void changeE(string z)
	{
		e = z;
	};
	void changeF(string z)
	{
		f = z;
	};
	string retA()
	{
		return a;
	};
	string retB()
	{
		return b;
	};
	string retC()
	{
		return c;
	};
	string retD()
	{
		return d;
	};
	string retE()
	{
		return e;
	};
	string retF()
	{
		return f;
	};
};

void retAuth(vector<Line> mas, string a) //Выводим книги по автору
{
	int x = 0;
	for (int i = 0; i < mas.size(); i++) 
	{
		if (a == mas[i].retC())
		{
			cout << mas[i].retA() << " | " << mas[i].retB() << " | " << mas[i].retC() << " | " << mas[i].retD() << " | " << mas[i].retE() << "| " << mas[i].retF() << endl;
			x + 1;
		}
		else if((i == (mas.size() - 1)) && x == 0)
		{
			cout << "Данный автор отсутствует в списке";
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");//Учим консоль русскому языку
	Line a;
	int n = 1;
	vector<Line> mas(n);
	a.changeA("Название");
	a.changeB("Идентефикационный номер");
	a.changeC("Автор");
	a.changeD("Год издания");
	a.changeE("Издательство");
	a.changeF("Состояние на прошлый год");

	cout << "Программа запущена, выберите нужную вам команду и ввдите ее номер только числом" << endl;
	cout << "1. Добавить книгу в список" << 
}


