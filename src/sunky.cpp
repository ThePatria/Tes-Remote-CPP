#include <iostream>
#include <string>

int main(){
    int c, b;
    int zen = (c = 1, b = 4, c+b);
    std::cout  << zen << std::endl;
    return 0;
}