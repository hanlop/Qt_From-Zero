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
//ֱ�ӽ�������ȫ����
//using namespace Han;

//���������һ����
//using Han::x;

//int main()
//{
//	//ʹ�����������
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

//�����ռ��Ƕ��
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
////ʹ��using�ؼ��� չ��Han��������ռ��ȫ��Ȩ��
//using namespace Han;
//int main()
//{
//    //չ��֮��Ͳ���ʹ���������::�����������ռ��������
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
	//int& c = b;//errȨ�޲��ܷŴ�ֻ����С
	const int& d = b;

	const int& n = x * b;
	//int& z = x * b;

	return 0;
}