#include <iostream>

int main() {
    int a,b;
    char c;
    std::cout<<"enter the first number: ";
    std::cin>>a;
    std::cout<<"enter the operation: ";
    std::cin>>c;
    switch(c)
    {
    case '+':
    std::cout<<"enter the second number: ";
    std::cin>>b;
    std::cout<<"the result is: "<<a+b;
    break;
    
    case '-':
    std::cout<<"enter the second number: ";
    std::cin>>b;
    std::cout<<"the result is: "<<a-b;
    break;
    
    case '/':
    std::cout<<"enter the second number: ";
    std::cin>>b;
    std::cout<<"the result is: "<<a/b;
    break;
    
    case '*':
    std::cout<<"enter the second number: ";
    std::cin>>b;
    std::cout<<"the result is: "<<a*b;
    break;
    }

    return 0;
}