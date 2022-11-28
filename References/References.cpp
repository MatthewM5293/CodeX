#include <iostream>

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap(int* a, int* b)
{
	int* temp = a;
	a = b;
	b = temp;
}
template <typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
void swap(T* a, T* b)
{
	T* temp = a;
	a = b;
	b = temp;
}

int main()
{
    int i1 = 10;
    int i2 = 30;

    int& ir = i1;
    int* ip = &i2;

    // to declare a reference variable, what symbol do you use?
    // -> &

    // to declare a pointer variable, what symbol do you use?
    // -> *

    // to get an address of a variable, what symbol do you use?
    // -> &

    ir = 20;
    std::cout << i1 << std::endl;
    // once a reference is assigned to a variable, can it later reference a different varaible?
    // -> no
    
    // can a reference be null?
    // -> yes
    
    // can you declare a reference and not assign it when declared ( int& i; ) ?
    // -> yes
    std::cout << &i1 << std::endl;
    std::cout << &ir << std::endl;
    // are the addresses of a reference and the variable it is referencing the same?
    // -> yes

    // display the value the pointer is pointing at (dereference)
    //https://cplusplus.com/doc/tutorial/pointers/
    std::cout << *ip << std::endl;

    // explain what it means to dereference a pointer
    // -> get the data from the address stored in the pointer
    
    // can a pointer be null?
    // -> yes
    // 
    // can you dereference a null pointer (explain)?
    // -> yes but it can crash the program if it's not handled
    std::cout << &i2 << std::endl;
    std::cout << &ip << std::endl;
    // are the addresses of a pointer and the object it is pointing to the same?
    // -> no

    // ** pointers are variables with their own address
    // ** a reference is an alias (another name for) the object it is refering to

    ip = &i1;
    // once a pointer is pointing to a variable, can it later point to a different varaible?
    // -> no

    // read the following page
    // https://www.geeksforgeeks.org/pointers-vs-references-cpp/
    // when should a pointer be used and when should a reference be used?
    // -> though they both hold the address of another variable, a pointer should be used when you want to reassign it to other variables and a pointer has it's own memory address while a reference shares the same memory of the variable without being able to be reassigned
}