# CPP_vector

It was written by referring to Pearson International Edition How To C++ Program And ChatGPT's answer

## 7.11 Introduction to C++ Standard Library Class Template vector

vector, which represents a more robust type of array featuring many additional capabilities

C++ does not check whether subscripts fall outsides the range of an array

Two arrays cannot be meaningfully compared with equality operators or relational operators

: vector는 배열을 등호와 관계 연산자를 사용할 수 있게 한다.

---

Array names are simply pointers to where the arrays begin in memory, and, of course, two arrays, two arrays will always be at different memory locations. When an array is passed to a general-purpose function designed to handle arrays of any size, the size of the array must be passed as an additional argument. Furthermore, one array cannot be assigned to another with the assignment operator array names `const` pointers, as you will learn in Ch8, a constant pointer cannot be used on the left side of an assignment operator, These and other capabilities certainly seem like “naturals” for dealing with arrays, but C++ does not provide such capabilities. However, the C++ Standard Library provides class template vector to al-low programmers to create a more powerful and less error-prone alternative to arrays.

: C++ 에서는 배열은 정적 포인터이다. 정적 포인터는 할당 연산자 좌항에 위치할 수 없다. 이런 배열을 대체하기 위해 클래스 템플릿인 vector가 있다.

---

The vector class template is available to anyone building applications with C++. The notations that the vector example uses might be unfamiliar to you, because vectors use template notation.

: vector는 템플릿 표기법을 사용하기 때문에 친숙하지 않을 수 있다.

---

For now, you should feel comfortable using class template vector by mimicking the syntax in the example we show in this section. The Program of Fig. 7.26 demontrates capabilites provided by C++ Standard Library class template vector that are not available for C-style pointer-based arrays. Standard class template vector provides many of the same features as the Array class that we construct in Chapter 11, Operator Overloading; String and Array Objects. Standard class template vector is defined in header <vector>(ln 11) and belongs to namespace std(ln12) ch22 discusses the full functionality of standard class template vector. ln 19-20 create  two vector objects that store values of type int intteger1 contains 7 elements, and integers2 contains 10 elements By default, all the elements of each vector object are set to 0. Note that vectors can be defined to store any data type, by replacing int in vector <int> with the appropriate data type. This notation, which specifies the type stored in the vector, is similar to the template notation that Section 6.18 itroduced with fuction templates

: vector는 C 스타일 포인터 기반의 배열을 사용할 수 없다.
 vector를 사용하려면 header에 따른 namespace 정의하고 사용해야 한다. 
vector는 어떤 데이터 타입이든 저장할 수 있다.

---

## Header

```cpp
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
```

1. `#include <iostream>`
: This line tells the compiler to include the standard input/output stream library. This library provides functionalitis for input and output operations. Specifically, it defines objects like `cout` , `cin` and manipulators like `endl`, that commonly used for printing to the console and reading from the console.
2. `using std::cout;`
: This line is a directive that allows you to use `cout` directly without having to prefix it with `std::` . `cout` is an object of the `ostream` class that represents the standard output stream. By including this directive, you can write `cout` instead of `std::cout`
3. `using std::cin`
: Similarly, this directive allows you to use `cin` directly without the `std::` prefix. `cin` is an object of the `istream` class that represents the standard input stream. It is used to read input from the keyboard.
4. `using std::endl;`
: This directive allows you to use `endl` without the `std::` prefix. `endl` is a manipulator used to insert a newline character into the output stream and flush the stream. It’s useful for ending lines of output and ensuring that all output is displated immediately.

```cpp
#include <iomanip>
using std::setw; explain
```

1. `#include <iomanip>`
: This directive includes the `<iomanip>` header, which stand for “input/output manipulators” The `<iomanip>` header provides functions and manipulators The `<iomanip>` header provides functions and manipulators that allow you to control the formatting of input and out put streams in C++. These manipulators help you format the data that is displated, such as setting the width of the output, specifying the precision of floating -point numbers, and more.
2. `using std::setw`
: This line allows you to use the `setw` manipulator without having to prefix it with `std::` . The `setw` (set width) manipulator is used to set the width of the next input or output field. This means that the next output will occupy a field of at least the specified width

## Fig 7.26

```cpp
 Size of vector integers is 10
vector after initialization:
           0           0           0           0
           0           0           0

 Size of vector integers2 is10
vector after initialization:

Enter 17 integers:
1
2
101111
505
405
400
500
1
2
45
55555
44
66
77
5
11
44

After input, the vectors contain:
integers1:
           1           2      101111         505
         405         400         500
integers:
           1           2          45       55555
          44          66          77           5
          11          44

Evaluating: integers1 != integers2
integers1 and integers2 are not equal

Size of vector integers3 is 7
vector after initialization:
           1           2      101111         505
         405         400         500

Assigning integers2 to integers1:
integers1:
           1           2          45       55555
          44          66          77           5
          11          44
integers2:
           1           2          45       55555
          44          66          77           5
          11          44

Evaluating: integers1 == integers2
integers1 and integers2 are equal

Assigning 1000 to integers1[5]
integers1:
           1           2          45       55555
          44        1000          77           5
          11          44

Attempt to assign 1000 to integers1.at(15)
```
