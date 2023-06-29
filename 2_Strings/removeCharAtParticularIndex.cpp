// Remove character from string at given index position
#include <iostream>

int main()
{
    std::string strValue = "workspace";

    int indexPos = 3;

    strValue.erase(indexPos, 1);

    std::cout<<strValue << std::endl;


    return 0;
}