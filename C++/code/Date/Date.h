#pragma once
#include <iostream>
using namespace std;

class Date
{
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);
public:
	//��ӡ����
	void Print();
	//��ȡĳ��ĳ�µ�����
	int GetMonthDay(int year, int month);
	//ȫȱʡ�Ĺ��캯��
	Date(int year = 1, int month = 1, int day = 1);

	//�������캯��
	Date(const Date& d);

	//��ֵ���������
	Date& operator=(const Date& d);

	bool operator==(const Date& d);
	bool operator>(const Date& d);
	bool operator>=(const Date& d);
	bool operator<(const Date& d);
	bool operator<=(const Date& d);
	bool operator!=(const Date& d);

	//����+=����
	Date& operator+=(int day);
	//����+����
	Date operator+(int day);
	//����-=����
	Date& operator-=(int day);
	//����-����
	Date operator-(int day);

	//ǰ��++
	Date& operator++();
	//����++
	Date operator++(int);

	//ǰ��--
	Date& operator--();
	//����--
	Date operator--(int);


	//����-���ڷ�������
	int operator-(const Date& d);

private:
	int _year;
	int _month;
	int _day;
};
