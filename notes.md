<div align="center">

# Data Structure Notes(CPP)

</div>

- CPP is used for building Performance critical System
- It brings speed + control 
---

### C++ Code Execution

C++ source code is compiled into machine code before execution. The CPU executes this machine code directly.

```cpp
// hello.cpp
#include <iostream>

int main() {
    std::cout << "Hello C++";
    return 0;
}
```

---

### Compiled Language Nature

C++ does not use an interpreter or virtual machine. The executable runs directly on hardware.

```bash
g++ hello.cpp
./a.out
```

---

### No Runtime Translation

There is no bytecode or runtime translation in C++. All conversions happen at compile time.

```cpp
int a = 10;   // type resolved at compile time
```

---

### Comparison with Python / Java

Python and Java perform execution using interpreters or virtual machines, which adds runtime overhead. C++ avoids this overhead.

```cpp
int sum(int a, int b) {
    return a + b;   // resolved at compile time
}
```

---

### Compile-Time Type Checking

C++ checks types during compilation and throws errors early.

```cpp
int x = 10;
// x = "hello";  // compile-time error
```

---

### No Garbage Collection

C++ does not automatically free memory. The programmer controls memory explicitly.

```cpp
int* p = new int(5);
delete p;   // manual memory release
```

---

### Minimal Runtime Overhead

C++ avoids dynamic type checking and runtime services, making execution faster.

```cpp
int square(int x) {
    return x * x;
}
```

---

### Class Memory Layout

Class size may include padding due to alignment.

```cpp
class Student {
    int age;
    char gender;
};
```

---

### Padding and Alignment

The compiler adds padding to align data for faster access.

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << sizeof(Student);
}
```

---

### Struct Member Ordering

Placing larger members first reduces padding.

```cpp
struct A {
    int i;
    char c;
};

struct B {
    char c;
    int i;
};
```

---

### Cache-Friendly Design

C++ allows control over memory layout, improving cache usage.

```cpp
int arr[1000];   // contiguous memory, cache friendly
```

---

### Applications of C++

C++ is used in performance-critical systems such as game engines, databases, OS kernels, and embedded systems.

---

### Manual Memory Management

Memory allocation and deallocation are controlled by the programmer.

```cpp
int* arr = new int[10];
delete[] arr;
```

---

### Stack and Heap Control

Local variables go to stack; dynamic memory goes to heap.

```cpp
int x = 5;           // stack
int* y = new int(5); // heap
```

---

### Deterministic Behavior

Resources are released exactly when their scope ends.

```cpp
void func() {
    int x = 10;  // destroyed when function exits
}
```

---

### RAII Concept

Resource acquisition happens during initialization and release happens automatically at scope end.

```cpp
#include <fstream>

void readFile() {
    std::ofstream file("data.txt");
    file << "Hello";
} // file automatically closed
```

---

### RAII Full Form

RAII stands for Resource Acquisition Is Initialization.

---

### Header Files

Header files contain declarations and are included during compilation.

```cpp
#include <iostream>
```

---

### Header File Protection

System headers should not be modified by users.

```cpp
#ifndef MYHEADER_H
#define MYHEADER_H
// declarations
#endif
```

---

### Java vs C++ Program Structure

Java programs run inside JVM, while C++ programs compile to native executables.

```cpp
int main() {
    return 0;
}
```

---

### `std::cout`

Used for printing output to the console.

```cpp
std::cout << "Output";
```

---

### Namespaces

Namespaces prevent name conflicts.

```cpp
using namespace std;
cout << "Hello";
```

---

### `this` Pointer

The `this` pointer holds the address of the current object.

```cpp
class Demo {
public:
    void show() {
        std::cout << this;
    }
};
```

---

### Pointer Basics

Pointers store addresses of variables.

```cpp
int x = 10;
int* p = &x;
```

---

### Pointer Arithmetic

Pointer increment depends on data type size.

```cpp
int arr[3] = {1, 2, 3};
int* p = arr;
p++;   // moves by 4 bytes
```

---

### References

References act as aliases for variables.

```cpp
int a = 10;
int& ref = a;
```

---

### Purpose of References

References prevent copying and make code safer than pointers.

```cpp
void update(int& x) {
    x = 20;
}
```

---

### Key Advantages of C++

C++ provides high performance, deterministic execution, manual memory control, and is ideal for system-level programming.

---