#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//class Myclass1
//{
//public:
//	Myclass1(int capacity)
//	{
//		_capacity = capacity;
//		_arr = (int*)malloc(sizeof(int) * _capacity);
//	}
//
//	//���
//	Myclass1(const Myclass1& s)
//	{
//		_capacity = s._capacity;
//		_arr= (int*)malloc(sizeof(int) * _capacity);
//	}
//
//private:
//	int _capacity;
//	int* _arr;
//};
//
//
//
//int main()
//{
//
//
//	return 0;
//}

//class MyClass {
//public:
//
//    MyClass(int val) {
//        ptr = new int(val);  // ��̬�����ڴ�
//    }
//
//    ~MyClass() {
//        delete ptr;  // �ͷ��ڴ�
//    }
//
//    // Ĭ�ϵĿ������캯��ִ��ǳ����
//    //Ĭ�ϵĿ������캯����д���������Զ�����
//
//private:
//    int* ptr;
//};
//
//int main() {
//    MyClass obj1(10);
//    MyClass obj2 = obj1;  // ����Ĭ�Ͽ������캯����ִ��ǳ����
//
//    // ��ʱ obj1.ptr �� obj2.ptr ָ��ͬһ���ڴ�
//    return 0;
//}

class MyClass {
public:
    MyClass(int val) {
        ptr = new int(val);  // ��̬�����ڴ�
    }

    ~MyClass() {
        delete ptr;  // �ͷ��ڴ�
    }

    // ������������ڴ沢��������
    MyClass(const MyClass& other) {
        ptr = new int(*other.ptr);  // ���
        std::cout << "�������" << std::endl;
    }

    int* GetMem()
    {
        return ptr;
    }
private:
    int* ptr;
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1;  // ����������캯��

    std::cout << "obj1.ptr points to " << obj1.GetMem() << std::endl;
    std::cout << "obj2.ptr points to " << obj2.GetMem() << std::endl;

    return 0;
}