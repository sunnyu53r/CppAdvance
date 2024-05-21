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
using namespace std;

int memoryExample();

struct User {
    const int id;
    int age;
    User() :id(100), age(22);
};

int main()
{
    memoryExample();
}

int memoryExample() {
    
    // stack
    int score = 100;
    User mike;

    //heap
    int* heap_score = new int;
    *heap_score = 200;

    User* nike = new User();


    // whenever we use new keyword we need to delete extra memory at the end
    delete heap_score;
    delete nike;

}