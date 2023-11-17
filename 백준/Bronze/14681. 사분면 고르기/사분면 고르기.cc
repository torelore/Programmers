#include <iostream>

int main(){
    int a, b;
    
    int c = 1;
    
    std::cin >> a >> b;
    
    if(a < 0)
        c++;
    if(b < 0)
        c++;
    
    if(a > 0 && b < 0)
        c = 4;
    
    
    std::cout << c;
    
    return 0;
}