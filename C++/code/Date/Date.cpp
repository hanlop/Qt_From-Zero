#define _CRT_SECURE_NO_WARNINGS 1
#include "Date.h"

Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}


int Date::GetMonthDay(int year, int month)
{
	static int arr[13] = { -1,31,28,31,30,31,30,31,31,30,31,30,31 };

	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
	{
		return 29;
	}
	else
	{
		return arr[month];
	}

}

Date::Date(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
}

Date& Date::operator=(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;

	return *this;
}

void Date::Print()
{
	cout << _year << "-" << _month << "-" << _day << endl;
}
bool Date::operator==(const Date& d)
{
	if (_year == d._year && _month == d._month && _day == d._day)
	{
		return true;
	}

	return false;
}
bool Date::operator>(const Date& d)
{
	if (_year > d._year)
	{
		return true;
	}
	else if (_year == d._year && _month > d._month)
	{
		return true;
	}
	else if (_year == d._year && _month == d._month && _day > d._day)
	{
		return true;
	}

	return false;
}
bool Date::operator>=(const Date& d)
{
	return *this > d || *this == d;
}
bool Date::operator<(const Date& d)
{
	return !(*this >= d);
}
bool Date::operator<=(const Date& d)
{
	return !(*this > d);
}

bool Date::operator!=(const Date& d)
{
	return !(*this == d);
}


Date& Date::operator+=(int day)
{
	if (day < 0)
	{
		*this -= -day;
	}
	else
	{
		_day += day;
		while (_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);
			_month++;
			if (_month == 13)
			{
				_year++;
				_month = 1;
			}
		}
	}

	return *this;
}

Date Date::operator+(int day)
{
	Date temp(*this);

	temp += day;

	return temp;
}


//日期-=天数
Date& Date::operator-=(int day)
{
	if (day < 0)
	{
		*this += -day;
	}
	else
	{
		_day -= day;
		while (_day < 0)
		{
			_month--;
			if (_month == 0)
			{
				_year--;
				_month = 12;
			}
			_day += GetMonthDay(_year, _month);
		}
	}

	return *this;
}


//日期-天数
Date Date::operator-(int day)
{
	Date temp(*this);

	temp -= day;

	return temp;
}


//前置++
Date& Date::operator++()
{
	*this += 1;
	return *this;
}
//后置++
Date Date::operator++(int)
{
	Date temp(*this);
	*this += 1;
	return temp;
}

//前置--
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}
//后置--
Date Date::operator--(int)
{
	Date temp(*this);
	*this -= 1;
	return temp;
}

//日期-日期返回天数
int Date::operator-(const Date& d)
{
	int count = 0;
	int flag = 1;
	Date max(*this);
	Date min(d);

	if (max < min)
	{
		max = d;
		min = *this;
		flag = -1;
	}
	while (min!=max)
	{
		count++;
		min++;
	}

	return flag*count;
}

ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "-" << d._month << "-" << d._day ;

	return out;
}

istream& operator>>(istream& in, Date& d)
{
	in >> d._year >> d._month >> d._day;
	return in;
}