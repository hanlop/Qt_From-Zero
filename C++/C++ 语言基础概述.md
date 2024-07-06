[TOC]

# C++ 语言基础概述

## 1.C++的发展历史

**1979年：C with Classes**

- **Bjarne Stroustrup**在贝尔实验室开始开发C++，当时称为“C with Classes”，旨在将面向对象的特性添加到C语言中。

**1983年：C++**

- 语言更名为C++，名称中的“++”表示递增运算符，象征着C的进化和增强。
- 添加了许多新特性，包括虚函数（virtual functions）、函数重载（function overloading）、引用（references）以及常量（const）修饰符。

**1985年：第一版发布**

- **Bjarne Stroustrup**出版了《The C++ Programming Language》，这是第一本关于C++的书。
- 第一版C++编译器Cfront发布。

**1989年：ANSI C兼容**

- C++变得与ANSI C兼容，同时引入了新特性，如静态成员函数（static member functions）、常量成员函数（const member functions）。

**1990年：第二版《The C++ Programming Language》**

- 第二版《The C++ Programming Language》发布，涵盖了C++的最新发展和特性。

**1998年：ISO/IEC标准化**

- C++被标准化为ISO/IEC 14882:1998，这标志着C++98标准的诞生。
- 标准库引入了STL（标准模板库），包括容器、迭代器和算法。

**2003年：C++03**

- 发布C++03标准，这是对C++98的一个小修订，主要修复了一些缺陷和错误。

**2011年：C++11**

- C++11是一次重要的语言更新，引入了许多新特性，包括自动类型推导（auto）、范围for循环（range-based for loops）、lambda表达式、智能指针（smart pointers）、多线程支持（threading support）等。

**2014年：C++14**

- C++14是对C++11的一个增量更新，改进了现有特性并引入了一些新功能，如通用lambda捕获（generalized lambda captures）、二进制字面值（binary literals）等。

**2017年：C++17**

- C++17引入了结构化绑定（structured bindings）、折叠表达式（fold expressions）、if constexpr语句、并行STL算法等。

**2020年：C++20**

- C++20带来了协程（coroutines）、概念（concepts）、范围库（ranges）、模块（modules）等重大特性。

**未来发展**

- 未来的C++标准（如C++23及后续版本）将继续在性能、可用性和可维护性方面进行改进，进一步增强语言的功能和应用场景。

C++作为一种强大且灵活的编程语言，广泛应用于系统编程、游戏开发、高性能计算等领域，其不断发展的特性使其能够应对各种复杂的编程挑战。

## 2.C++输入与输出

### 2.1标准输出流

```c++
#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```

- `<<`是流插入运算符，用于将数据插入到输出流中。
- `endl`用于插入换行符，并刷新输出缓冲区。

**输出:**

>Hello, World!

### 2.2标准输入流

```c++
#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "You entered: " << number << endl;
    return 0;
}
```

- `>>`是流提取运算符，用于从输入流中提取数据。

> Enter a number: 8
> You entered: 8

在C++中，`setw()`函数是`<iomanip>`头文件中的一个函数，用于设置输出流中下一个输出字段的宽度。这个函数通常与`std::cout`结合使用，用于格式化输出。下面是`setw()`函数的基本用法和示例：

### 2.3setw()基本用法

```c++
#include <iostream>
#include <iomanip> // 包含头文件

using namespace std;

int main() {
    int num1 = 1234;
    double num2 = 45.6789;

    cout << setw(10) << num1 << endl;
    cout << setw(10) << num2 << endl;

    return 0;
}
```

**解释和示例**

1. **包含头文件 `<iomanip>`**
	- `setw()`函数定义在 `<iomanip>` 头文件中，因此需要包含这个头文件以使用它。
2. **设置字段宽度**
	- `setw(n)`函数设置下一个输出字段的宽度为 `n`，**字段宽度**指输出占用的字符数。(不管换没换行)
	- 如果输出的内容不够宽度 `n`，则**会在左侧用空格填充**，以保证达到指定的宽度。
3. **示例说明**
	- 在上面的示例中，`num1` 和 `num2` 分别输出在宽度为10的字段中。
	- 如果 `num1` 或 `num2` 的字符数不足10个，会在左侧用空格填充，使其总宽度达到10个字符。

**输出示例**

输出将会是：

```c
      1234
   45.6789
```

这里，`1234` 和 `45.6789` 分别在宽度为10的字段中输出，并在左侧用空格填充，以保证输出占据整个字段宽度。

## 3.内联函数的定义

在函数定义前面使用 `inline` 关键字即可将函数声明为内联函数。内联函数通常在头文件中定义，因为编译器需要在每个使用该函数的地方进行函数展开，而头文件可以被多个源文件包含，确保函数定义在每个需要的地方都可见。

```c++
// 内联函数的定义
inline int add(int a, int b) {
    return a + b;
}
```

### 3.1内联函数的特点

1. **函数体内联展开**：内联函数的主要特点是函数调用处会直接将函数体的代码插入，而不是进行传统的函数调用操作。这样可以减少函数调用的开销，特别是对于一些简单的、频繁调用的函数。
2. **编译器决定**：使用 `inline` 关键字只是向编译器提出建议，具体是否内联展开，最终由编译器决定。通常，编译器会根据函数的大小、调用频率等因素进行判断。
3. **多次定义的处理**：如果同一个内联函数在多个源文件中定义，编译器会选择一个定义并丢弃其他定义。为了避免这种情况，通常在头文件中定义内联函数。

**图示:**

![](../assets/QQ截图20240706162109.png)

### 3.2使用内联函数的场景

- **简短的函数体**：适合内联，避免函数调用的开销。
- **频繁调用的函数**：提升程序的执行效率。
- **模板函数**：模板函数的实现通常放在头文件中，并且编译器会将其视为内联函数。

**示例**

```c++
#include <iostream>

// 内联函数的定义
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4);  // 内联函数调用
    std::cout << "Result: " << result << std::endl;
    return 0;
}
```

**注意事项:**

- **过度使用内联**：对于复杂函数或者函数体较大的情况，过度使用内联可能会导致代码膨胀，反而降低性能。
- **类的成员函数**：类的成员函数如果在类声明中定义，通常会自动被编译器视为内联函数。

## 4.函数重载

### 4.1函数重载在C++中有以下要求：

1. **函数名称相同**：

	- 函数重载要求多个函数使用相同的名称。

2. **参数列表不同**：

	- 参数列表必须不同，可以通过以下方式区分：

		- 参数类型不同。

		```c++
		#include <iostream>
		using namespace std;
		
		// 函数重载示例，参数类型不同
		void print(int num) {
		   cout << "Integer number: " << num << std::endl;
		}
		
		void print(double num) {
		    cout << "Double number: " << num << std::endl;
		}
		
		void print(char ch) {
		   cout << "Character: " << ch << std::endl;
		}
		
		int main() {
		    print(10);       // 调用 print(int num)
		    print(3.14);     // 调用 print(double num)
		    print('A');      // 调用 print(char ch)
		
		    return 0;
		}
		```

		- 参数个数不同。

		```c++
		#include <iostream>
		using namespace std;
		
		void print(char ch) {
		    cout << "Character: " << ch << endl;
		}
		
		void print(int num1, int num2) {
		    cout << "Sum of integers: " << num1 + num2 << endl;
		}
		
		int main() {
		    
		    print('A');      // 调用 print(char ch)
		    print(5, 3);     // 调用 print(int num1, int num2)
		
		    return 0;
		}
		```

		- 参数顺序不同（参数类型相同但顺序不同）。

		```c++
		#include <iostream>
		using namespace std;
		
		void print(int num1, double num2) {
		    cout << "Sum of integer and double: " << num1 + num2 << endl;
		}
		
		void print(double num1, int num2) {
		    cout << "Sum of double and integer: " << num1 + num2 << endl;
		}
		
		int main() {
		
		    print(2, 4.5);     // 调用 print(int num1, double num2)
		    print(1.2, 7);     // 调用 print(double num1, int num2)
		
		    return 0;
		}
		```

3. **返回类型可以相同也可以不同**：

	- 返回类型可以相同也可以不同，但不能仅仅通过返回类型的不同来重载函数。

4. **同一作用域内**：

	- 函数重载必须在同一个作用域内进行，即在同一个命名空间内或者同一个类内部。

5. **函数重载解析**：

	- 当调用重载函数时，编译器根据函数调用时提供的参数列表来选择匹配的函数。
	- 如果找不到匹配的函数或者有多个匹配的函数，编译器将报错。