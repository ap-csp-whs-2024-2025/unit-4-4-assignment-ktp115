#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
    // Complete the homework problems here

    //problem 1

    int num;
    std::cout << "Enter a number from 1-100.\n";
    std::cin >> num;
    while(num <1 || num > 100)
    {
        std::cout << "Invalid input.\n";
        std::cin >> num;
    }
    std::cout << "Thank you for your input.\n";

    //problem 2
    std::string favColor = "black";
    std::string hmm;
    int tries = 1;
    std::cout << "Guess the color.\n";
    std::cin >> hmm;
    while(hmm != favColor)
    {
        std::cout << "loud incorrect buzzer. Try again.\n";
        std::cin >> hmm;
        tries = tries + 1;
    }
    std::cout << "Correct. It took " << tries << " tries.\n";

    //problem 3
    int count;
    int sum = 0;
    
    std::cout << "How many numbers to sum up?\n";
    std::cin >> count;
    for (int i = 1; i <= count; i = i+1)
    {
        int num;
        std::cout << "Enter number " << i << ".\n";
        std::cin >> num;
        sum = sum + num;
    }
    std::cout << "The sum is: " << sum << "\n";

    return 0;
}
