#include <iostream>
#include <string>

int main(){
    int c = 12, b = 10;
    int zen = c - b;
    bool odd = (zen < b) ? true:false;
    std::cout << odd << std::endl;
    return 0;
}