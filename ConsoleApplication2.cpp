
#include <iostream>

int N = 20;

void FindOddOrEvenNumbers(int limit)
{
    std::cout << '\n';
    std::cout << "Enter: \"1\" - odd numbers, \"0\" - even numbers" << '\n';
    int IsOdd;
    std::cin >> IsOdd;
    for (int count = IsOdd; count < limit; count+=2)
       std::cout << count << " ";
    std::cout << '\n';
}


int main()
{ 
    for (int count = 0; count < N; count += 2)
        std::cout << count << " ";

    FindOddOrEvenNumbers(33);

    

   
}