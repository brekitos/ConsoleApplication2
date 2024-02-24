
#include <iostream>
#include <string>

int main()
{
    std::string  s = "Stroka s tekstom _";
   
    std::cout << "String - " << "\"" << s << "\"" << "\n";
    std::cout << "Line length - " << s.size() << "\n";
    std::cout << "First character - " << "\"" << s.front() << "\"" << "\n";
    std::cout << "Last character - " << "\"" << s.back() << "\"" << "\n";

    return 0;
}