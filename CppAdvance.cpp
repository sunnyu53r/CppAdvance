// CppAdvance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


//Memory in Cpp
//There are two memory: 1.Stack Memory 2. Heap Memory, difference is based on memory allocation
//Stack ->  Fast and predefined size
//Heap -> Not as much Fast, predefined but can grow.





#include <iostream>
//#include "adder.h"
#define END return 0
#define ENDMESSAGE cout << "Program ends here\n"
#define EXINT int32_t
#define console_log(a) cout << a << endl
#define console_log2(a,b) cout << a << b << endl

using namespace std;

int memoryExample();
int headerFileExample();
int pointerAdvance();
int nullExample();
int veriadicExample();
EXINT factorial(EXINT a);

struct User {
    const int id;
    int age;

    User() :id(100), age(22) {}
};

template<typename T>

T addme(T a, T b) {
    return a + b;
}

int getTwo() {
    return 2;
}

void intersting() {
    puts("I am interesting");
}

void printval(int a) {
    printf("Integer value is %d\n", a);
}

void printval(double a) {
    printf("Double value is %f\n", a);
}

void printval(int *a) {
    printf("Pointer value is %p\n", a);
}

template <typename T>

void func(T t) {
    console_log2("first func ",t);
    //console_log(t);
}

template <typename T,typename... Args>
void func(T t, Args... args) {
    console_log2("second func ",t);
    func(args...);
}

int main()
{
    // memoryExample();
    // headerFileExample();
    // pointerAdvance();
    // nullExample();

    /*EXINT a;
    console_log("Enter a value: ");
    cin >> a;
    EXINT fact = factorial(a);
    cout << "Factorial : " << fact << endl;
    ENDMESSAGE;*/

    veriadicExample();

    END;
}


// veriadic operator (...)
int veriadicExample() {

    string myName = "shyam";
    func(myName);
    func(myName, 1, myName, 3.4, myName); // this will be called recursivly

    END;
}



// function Recursion
EXINT factorial(EXINT n) {
    if (n>1)
    {
        return n * factorial(n-1);
    }
    else {
        return n;
    }
}



//nulland nullptr
int nullExample() {

    printval(NULL);
    printval(nullptr);
    END;
}


// function pointer
int pointerAdvance() {

    cout << "getTwo: " << getTwo() << endl;

    void (*pointsToInteresting)() = intersting;
    pointsToInteresting();
    (*pointsToInteresting)(); // derefencing syntax
    END;
}

int headerFileExample() {
    cout << "int addition: " << addme(4, 6) << endl;
    cout << "float addition: " << addme(4.5f, 6.6f) << endl;
    END;
}


int memoryExample() {
    
    // stack
    int score = 100;
    User mike;

    //heap
    int* heap_score = new int;
    *heap_score = 200;

    User* nike = new User();

    cout << "user: id "<< nike->id <<" user: age "<<nike->age <<endl;

    // whenever we use new keyword we need to delete memory after using
    delete heap_score;
    delete nike;

    cout << "user: id " << nike->id << " user: age " << nike->age << endl;
    END;
}