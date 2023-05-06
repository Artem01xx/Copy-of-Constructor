// Programming.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <string>

using namespace std;


class MyClass
{
private:
	int* data;
	int size;

public:

	MyClass(int size)
	{
		this->data = new int[size];
		this->size = size;

		for (int i = 0;i < size;i++)
		{
			data[i] = i;
			cout << " Конструктор " << this << endl;
		}
	}

	MyClass(const MyClass& other)
	{
		this->size = other.size;
		this->data = new int[other.size];

		for (int i = 0;i < size;i++)
		{
			data[i] = i;
			cout << " Конструктор копирования " << this << endl;
		}

	}


	~MyClass()
	{
		cout << " Деструктор " << this << endl;
		delete[]data;
	}
};


int main()
{
	setlocale(LC_ALL, "ru");
	MyClass a(1);
	MyClass b(a);

	return 0;
}