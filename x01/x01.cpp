#include <iostream>

int add(int i1, int i2)
{
    return (i1 + i2);
}

template <typename T>
T add(T i1, T i2)
{
    return (i1 + i2);
}

template <typename T>
T sqr(T i1)
{
    return (i1 * i1);
}

template <typename T>
T max(T i1, T i2) 
{
    if (i1 > i2) return i1;
    else return i2;
}

template <typename T>
T min(T i1, T i2) 
{
    if (i1 < i2) return i1;
    else return i2;
}


int main()
{
    //int
    std::cout << add(20, 25) << std::endl;
    //Typename T
    std::cout << add(34.5, 10.0) << std::endl;
    //sqr
    std::cout << sqr(23.4f) << std::endl;
    //max
    std::cout << max(54, 79) << std::endl;
    //min
    std::cout << min(54, 79) << std::endl;
}
