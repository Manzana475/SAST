#include <iostream>
#include <cstring>
#include <cstdio> 

void vulnerableFunction() {
    char buffer[32];  
    int secret = 42;

    std::cout << "Enter some text: ";
    std::cin.read(buffer, 64); 

    std::cout << "You entered: " << buffer << std::endl;
    std::cout << "Secret value: " << secret << std::endl;
}

void safeFunction() {
    char buffer[32]; 
    std::cout << "Enter some text: ";
    fgets(buffer, sizeof(buffer), stdin);  
    buffer[strcspn(buffer, "\n")] = 0;  
    std::cout << "You entered: " << buffer << std::endl;
}

int main() {
    //vulnerableFunction(); 
    safeFunction();  

    return 0;
}
