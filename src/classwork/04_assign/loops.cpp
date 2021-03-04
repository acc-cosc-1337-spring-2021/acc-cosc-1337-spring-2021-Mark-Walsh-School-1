//cpp
#include <iostream>
using namespace std;
int factorial(int num)

{

    int sentinel = num;
    for (int i = 1; i < sentinel; i++)
    {
        
        num *= i;
    }
    
    return num;
}