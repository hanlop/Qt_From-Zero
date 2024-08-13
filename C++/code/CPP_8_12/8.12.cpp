#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//int Add(int x, int y)
//{
//	return x + y;
//}
//
////int x = 20;
//
//namespace Han
//{
//	int x = 10;
//	int Add(int x, int y)
//	{
//		return 2*x + y;
//	}
//}
//直接讲作用域全部打开
//using namespace Han;

//打开作用域的一部分
//using Han::x;

//int main()
//{
//	//使用域作用域符
//	//cout << x << endl;
//	//cout << Han::x << endl;
//
//
//	//cout << Add(10, 20) << endl;
//	//cout << Han::Add(10, 20) << endl;
//
//
//	return 0;
//}

//命名空间的嵌套
//namespace Family
//{
//	namespace son
//	{
//		int x = 20;
//	}
//
//	namespace father
//	{
//		int x = 30;
//	}
//}
//int main()
//{
//	cout << Family::son::x << endl;
//	cout << Family::father::x << endl;
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//void add(double a, double b) {
//    cout << "add(double a, double b)" << endl;
//}
//
//void subtract(double a, double b) {
//    cout << "subtract(double a, double b)" << endl;
//}
//
//namespace MathFunctions {
//    void add(double a, double b) {
//        cout << "MathFunctions::add(double a, double b)" << endl;
//    }
//
//    void subtract(double a, double b) {
//        cout << "MathFunctions::subtract(double a, double b)" << endl;
//    }
//}
//
//int main() {
//    add(0.0, 0.0);
//    subtract(0.0, 0.0);
//
//    MathFunctions::add(0.0, 0.0);
//    MathFunctions::subtract(0.0, 0.0);
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//namespace Han
//{
//    int x = 10;
//
//    int add(int x, int y)
//    {
//        return x + y;
//    }
//}
////使用using关键字 展开Han这个命名空间的全部权限
//using namespace Han;
//int main()
//{
//    //展开之后就不用使用域操作符::来访问命名空间的内容了
//    cout << x << endl;
//
//    cout << add(10, 20) << endl;
//    return 0;
//}

//int add(int x = 10, int y = 20);
//
//int add(int x , int y )
//{
//	return x + y;
//}
//
//int main()
//{
//	cout << add() << endl;
//
//	return 0;
//}

//int& Modify_n(int* arr, int n)
//{
//	return arr[n];
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	cout << arr[2] << endl;
//	
//	Modify_n(arr, 2)=10;
//
//	cout << arr[2] << endl;
//
//	return 0;
//}

int main()
{
	int x = 10;
	int& a = x;

	const int b = 20;
	//int& c = b;//err权限不能放大只能缩小
	const int& d = b;

	const int& n = x * b;
	//int& z = x * b;

	return 0;
}