
## Question 1

What will be the output of the following C++ program on a 64-bit system?

```cpp
#include <iostream>
using namespace std;

class A {
public:
	virtual void f() {}
};

int main() {
	cout << sizeof(A);
}
```

**Options**

A. 4  
B. 8  
C. 1  
D. 16  

---

## Question 2

What will be the output of the following C++ program?

```cpp
#include <iostream>

using namespace std;

class A {
public:
	~A() {
		cout << "A";
	}
};

class B : public A {
public:
	~B() {
		cout << "B";
	}
};

int main() {
	A *a = new B();
	delete a;
}
```

**Options**

A. B  
B. BA  
C. A  
D. AB  

---

## Question 3

What will be the output of the following C++ program?

```cpp
#include <iostream>

using namespace std;

class A {
public:
	virtual void show() { cout << "A"; }
};

class B : public A {
public:
	void show() { cout << "B"; }
};

int main() {
	A a = B();
	a.show();
}
```

**Options**

A. A  
B. Undefined Behaviour  
C. Compiler error  
D. B  

---

## Question 4

What will be the output of the following C++ program?

```cpp
#include <iostream>
using namespace std;

class A {
public:
	virtual void f() { cout << "A"; }
};

class B : public A {
public:
	void f() { cout << "B"; }
};

void call(A a) {
	a.f();
}

int main() {
	B b;
	call(b);
}
```

**Options**

A. A  
B. Undefined  
C. Error  
D. B  

---

## Question 5

What will be the output of the following C++ program?

```cpp
#include <iostream>
using namespace std;

class A {
public:
	virtual void f() { cout << "A"; }
};

class B : public A {};
class C : public A {};
class D : public B, public C {};

int main() {
	D d;
	d.f();
}
```

**Options**

A. Undefined  
B. B  
C. A  
D. Compile Error  

