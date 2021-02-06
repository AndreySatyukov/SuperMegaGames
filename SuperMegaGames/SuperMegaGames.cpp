#include <iostream>
#include <locale>


int main()
{
    setlocale(LC_CTYPE, "Russian");

    std::cout << "Hello World!\n";
}