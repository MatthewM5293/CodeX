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
    // ->
    // can a reference be null?
    // ->
    // can you declare a reference and not assign it when declared ( int& i; ) ?
    // ->
    std::cout << &i1 << std::endl;
    std::cout << &ir << std::endl;
    // are the addresses of a reference and the variable it is referencing the same?
    // ->

    // display the value the pointer is pointing at (dereference)
    //https://cplusplus.com/doc/tutorial/pointers/
    std::cout << *ip << std::endl;

    // explain what it means to dereference a pointer
    // ->
    // can a pointer be null?
    // ->
    // can you dereference a null pointer (explain)?
    // ->
    std::cout << &i2 << std::endl;
    std::cout << &ip << std::endl;
    // are the addresses of a pointer and the object it is pointing to the same?
    // ->

    // ** pointers are variables with their own address
    // ** a reference is an alias (another name for) the object it is refering to

    ip = &i1;
    // once a pointer is pointing to a variable, can it later point to a different varaible?
    // ->

    // read the following page
    // https://www.geeksforgeeks.org/pointers-vs-references-cpp/
    // when should a pointer be used and when should a reference be used?
    // ->
}