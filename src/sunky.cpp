#include <iostream>
#include <string>

int main(){
    int c = 19, b = 18;
    int zen = c - b;
    std::string odd = (zen < b) ? "true":"false";
    std::cout << odd << std::endl;
    return 0;
}
