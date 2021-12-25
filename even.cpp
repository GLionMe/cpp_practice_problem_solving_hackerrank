#include<iostream>

int main()
{
    int num;
    std::cout << "Enter a number to check if it is even or odd: " << std::endl;
    std::cin >> num;

    if (num % 2 == 0)
    {
        std::cout << num << " is even number." << std::endl;
    } else {
        std::cout << num << " is odd number." << std::endl;
    }
    
}