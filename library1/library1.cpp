
#include <iostream>//Добавляем нужные библиотеки
#include <vector>
#include <string>
#include <Windows.h>

using namespace std;
class Line // Создаем класс, хранящий в себе одну строку информации о книге
{
	string a;
	string b;
	string c;
	string d;
	string e;
	string f;
public:// Создаем методы вывода и изменения переменных в единице класса
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

void retFull(vector<Line> mas) // Выводим весь список
{
	for (int i = 0; i < mas.size(); i++) 
	{
		cout << mas[i].retA() << " | " << mas[i].retB() << " | " << mas[i].retC() << " | " << mas[i].retD() << " | " << mas[i].retE() << "| " << mas[i].retF() << endl;
	}
}

void retNum(vector<Line> mas, string a) //Выводим книги по номеру
{
	int x = 0;
	for (int i = 0; i < mas.size(); i++)
	{
		if (a == mas[i].retB())
		{
			cout << mas[i].retA() << " | " << mas[i].retB() << " | " << mas[i].retC() << " | " << mas[i].retD() << " | " << mas[i].retE() << "| " << mas[i].retF() << endl;
			x = x + 1;
		}
		else if ((i == (mas.size() - 1)) && x == 0)
		{
			cout << "Данный номер отсутствует в списке";
		}
	}
}

void retNaz(vector<Line> mas, string a) //Выводим книги по названию
{
	int x = 0;
	for (int i = 0; i < mas.size(); i++)
	{
		if (a == mas[i].retA())
		{
			cout << mas[i].retA() << " | " << mas[i].retB() << " | " << mas[i].retC() << " | " << mas[i].retD() << " | " << mas[i].retE() << "| " << mas[i].retF() << endl;
			x = x + 1;
		}
		else if ((i == (mas.size() - 1)) && x == 0)
		{
			cout << "Данное название отсутствует в списке";
		}
	}
}

void retAuth(vector<Line> mas, string a) //Выводим книги по автору
{
	int x = 0;
	for (int i = 0; i < mas.size(); i++) 
	{
		if (a == mas[i].retC())
		{
			cout << mas[i].retA() << " | " << mas[i].retB() << " | " << mas[i].retC() << " | " << mas[i].retD() << " | " << mas[i].retE() << "| " << mas[i].retF() << endl;
			x = x + 1;
		}
		else if((i == (mas.size() - 1)) && x == 0)
		{
			cout << "Данный автор отсутствует в списке";
		}
	}
}
void retIzd(vector<Line> mas, string a) //Выводим книги по издательству
{
	int x = 0;
	for (int i = 0; i < mas.size(); i++)
	{
		if (a == mas[i].retE())
		{
			cout << mas[i].retA() << " | " << mas[i].retB() << " | " << mas[i].retC() << " | " << mas[i].retD() << " | " << mas[i].retE() << "| " << mas[i].retF() << endl;
			x = x + 1;
		}
		else if ((i == (mas.size() - 1)) && x == 0)
		{
			cout << "Данное издательство отсутствует в списке";
		}
	}
}
void retYear(vector<Line> mas, string a) //Выводим книги по году
{
	int x = 0;
	for (int i = 0; i < mas.size(); i++)
	{
		if (a == mas[i].retD())
		{
			cout << mas[i].retA() << " | " << mas[i].retB() << " | " << mas[i].retC() << " | " << mas[i].retD() << " | " << mas[i].retE() << "| " << mas[i].retF() << endl;
			x = x + 1;
		}
		else if ((i == (mas.size() - 1)) && x == 0)
		{
			cout << "Данный год издания отсутствует в списке";
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");//Учим консоль русскому языку
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Line a; // Создаем элемент класса Line
	int n = 1;// Вводим базовое число элементов в динамическом массиве
	vector<Line> mas(n); // Создаемм динамический массив элементов класса Line
	a.changeA("Название"); // Заполняем первую строку массива
	a.changeB("Идентефикационный номер");
	a.changeC("Автор");
	a.changeD("Год издания");
	a.changeE("Издательство");
	a.changeF("Состояние на прошлый год");
	mas[0] = a;//Приравниваем нулевой элемент массива к первой строке
	int d = 0;
	string z;
	while (true)
	{
		cout << "Программа запущена, выберите нужную вам команду и ввдите ее номер только числом" << endl;// Выводим интерфейс для пользователя 
		cout << "1. Добавить книгу в список" << endl;
		cout << "2. Удалить книгу из списка" << endl;
		cout << "3. Вывести весь список" << endl;
		cout << "4. Найти книгу по идентефикационному номеру" << endl;
		cout << "5. Отсортировать книги по названию" << endl;
		cout << "6. Отсортировать книги по автору" << endl;
		cout << "7. Отсортировать книги по издательству" << endl;
		cout << "8. Отсортировать книги по году издания" << endl;
		cout << "9. Изменить состояние на прошлый год" << endl;
		cin >> d;// Снимаем переменную d и создаем ветвление по вариантам работы программы
		if (d == 1)
		{
			cout << "Введите название" << endl;
			cin >> z;
			a.changeA(z);
			cout << "Введите идентефикационный номер" << endl;
			cin >> z;
			a.changeB(z);
			cout << "Введите автора" << endl;
			cin >> z;
			a.changeC(z);
			cout << "Введите год издания" << endl;
			cin >> z;
			a.changeD(z);
			cout << "Введите издательство" << endl;
			cin >> z;
			a.changeE(z);
			cout << "Введите состояние на прошлый год по шкале A-F" << endl;
			cin >> z;
			a.changeF(z);
			mas.push_back(a);
		}
		else if (d == 2)
		{
			cout << "Введите идентефикационный номер книги" << endl;
			cin >> z;
			for (int i = 0; i < mas.size(); i++)
			{
				if (mas[i].retF() == z)
				{
					mas.erase(mas.begin() + i - 1);

				}
				else if (mas[i].retF() != z && (i == (mas.size() - 1)))
				{

				}
			}
		}
		else if (d == 3)
		{
			retFull(mas);
		}
		else if (d == 4)
		{
			cout << "Введите идентефикационный номер книги" << endl;
			cin >> z;
			retNum(mas, z);
		}
		else if (d == 5)
		{
			cout << "Введите название книги" << endl;
			cin >> z;
			retNaz(mas, z);
		}
		else if (d == 6)
		{
			cout << "Введите имя автора" << endl;
			cin >> z;
			retAuth(mas, z);
		}
		else if (d == 7)
		{
			cout << "Введите название издательства" << endl;
			cin >> z;
			retIzd(mas, z);
		}
		else if (d == 8)
		{
			cout << "Введите год издания" << endl;
			cin >> z;
			retYear(mas, z);
		}
		else if (d == 9)
		{
			cout << "Введите идентефикационный номер книги" << endl;
			cin >> z;
			for (int i = 0; i < mas.size(); i++)
			{
				if (mas[i].retF() == z)
				{
					mas[i].changeF(z);
					cout << "Состояние изменено" << endl;
				}
				else if (mas[i].retF() != z && (i == (mas.size() - 1)));
			}
		}
	}


}
