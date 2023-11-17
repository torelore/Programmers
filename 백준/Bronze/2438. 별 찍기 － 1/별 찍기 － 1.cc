#include <iostream>

int main(){
    int T;
    
    std::cin >> T;
    
    for(int i = 0; i < T; i++){
        for(int j = 0; j <= i; j++){
            std::cout << "*";
        }
        
        std::cout << "\n";
    }
    
    return 0;
}