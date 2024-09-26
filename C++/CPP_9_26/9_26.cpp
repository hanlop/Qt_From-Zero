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
//	//深拷贝
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
//        ptr = new int(val);  // 动态分配内存
//    }
//
//    ~MyClass() {
//        delete ptr;  // 释放内存
//    }
//
//    // 默认的拷贝构造函数执行浅拷贝
//    //默认的拷贝构造函数不写编译器会自动生成
//
//private:
//    int* ptr;
//};
//
//int main() {
//    MyClass obj1(10);
//    MyClass obj2 = obj1;  // 调用默认拷贝构造函数，执行浅拷贝
//
//    // 此时 obj1.ptr 和 obj2.ptr 指向同一块内存
//    return 0;
//}

class MyClass {
public:
    MyClass(int val) {
        ptr = new int(val);  // 动态分配内存
    }

    ~MyClass() {
        delete ptr;  // 释放内存
    }

    // 深拷贝：分配新内存并复制内容
    MyClass(const MyClass& other) {
        ptr = new int(*other.ptr);  // 深拷贝
        std::cout << "调用深拷贝" << std::endl;
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
    MyClass obj2 = obj1;  // 调用深拷贝构造函数

    std::cout << "obj1.ptr points to " << obj1.GetMem() << std::endl;
    std::cout << "obj2.ptr points to " << obj2.GetMem() << std::endl;

    return 0;
}