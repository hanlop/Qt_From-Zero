#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;

//class Myclass
//{
//	Myclass()
//	{
//		cout << "哈哈" << endl;
//	}
//
//	Myclass(int a = 10)
//	{
//		cout << " fsd " << endl;
//	}
//};
//int main()
//{
//	Myclass a;
//
//	return 0;
//}
//
//class Myclass
//{
//private:
//	int* a;
//public:
//
//	Myclass()
//	{
//		a = new int[10];
//	}
//
//	~Myclass()
//	{
//		delete[] a;
//	}
//};
//int main()
//{
//	Myclass* a=new Myclass;
//
//	delete a;
//
//	return 0;
//}


//class Myclass
//{
//private:
//	int m1;
//	int m2;
//public:
//	Myclass(int _x1, int _x2) :m1(_x1), m2(_x2)
//	{
//
//	}
//
//	Myclass(const Myclass& obj)
//	{
//		m1 = obj.m2;
//		m2 = obj.m2;
//	}
//
//	void display()
//	{
//		cout << m1 << "  " << m2 << endl;
//	}
//};
//
//int main()
//{
//	Myclass obj1(10,20);
//	obj1.display();
//
//	Myclass obj2 = obj1;
//	obj2.display();
//
//	return 0;
//}

//友元函数
//class Box
//{
//private:
//	int width;
//public:
//	Box(int _width) :width(_width)
//	{
//		cout << "初始化" << endl;
//	}
//
//	friend void display(Box& a);
//};
//
//void display(Box& a)
//{
//	cout << "这个箱子的宽度" << a.width << endl;
//}

//class Engine
//{
//	friend class Car;
//private:
//	int speed;
//public:
//	Engine(int _speed) :speed(_speed)
//	{
//
//	}
//
//};
//
//class Car
//{
//
//private:
//	string name;
//public:
//	Car(string _name) :name(_name)
//	{
//
//	}
//
//	void display(Engine& a)
//	{
//		cout << "这个车的速度" << name << "是" << a.speed << endl;
//	}
//};
//
//int main()
//{
//	//Box a(10);
//	//display(a);
//	Car a("奔次");
//	Engine a1(100);
//	a.display(a1);
//
//
//	return 0;
//}

//运算符重载示例
//
//class Complex
//{
//private:
//	int width;
//	int length;
//
//public:
//	Complex(int _width, int _length) :width(_width), length(_length)
//	{
//
//	}
//
//	Complex operator+(const Complex& obj)
//	{
//		Complex ret(width + obj.width, length + obj.length);
//		return ret;
//	}
//
//	void display()
//	{
//		cout << "宽度:" << width << " " << "长度:" << length << endl;
//	}
//};
//
//int main()
//{
//	Complex a(10, 20);
//	a.display();
//	Complex b(20, 30);
//	b.display();
//
//	Complex c = a + b;
//	c.display();
//
//	return 0;
//}


//运算符重载
class Complex
{
private:
	int real;
	int imag;

public:
	Complex()
	{

	}

	friend istream& operator>>(istream& is, Complex& obj)
	{
		is >> obj.real >> obj.imag;
		return is;
	}

	friend ostream& operator<<(ostream& os, Complex& obj)
	{
		os << obj.real << "+" << obj.imag << "i" << endl;
		return os;
	}

	~Complex()
	{

	}
};

int main()
{
	Complex a;
	cin >> a;
	cout << a << endl;
	
	return 0;
}