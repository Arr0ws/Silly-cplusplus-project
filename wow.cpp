#include <iostream>
#include <cstdlib>
#include <string>

void quiz1();

int main() 
{
    std::system("clear");
    std::string yesorno;
    std::cout << "Arr0ws silly quiz" << std::endl;
    std::cout << "Do you want to play it? [y][n]: ";
    std::cin >> yesorno;
    if (yesorno == "y")
    {
        quiz1();
    } else
    {
        std::cout << "Nuh uh" << std::endl;
        quiz1();
    }
    
    
    return 0;
}

void quiz1() 
{
    std::string answer;
    std::cout << "is 2+2 = 22? [y][n]:" << std::endl;
    std::cin >> answer;
    if (answer == "y")
    {
        std::cout << "You won!" << std::endl;
    } else if (answer == "n") 
    {
        std::cout << "fuck you" << std::endl;
    }

}
