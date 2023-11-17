#include <iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    double T;
    
    std::cin >> T;
    
    for(double i = 0 ; i < T; i++){
        int a, b;
        
        std::cin >> a >> b;
        
        std::cout << a + b << "\n";
    }
    
    
    return 0;
}