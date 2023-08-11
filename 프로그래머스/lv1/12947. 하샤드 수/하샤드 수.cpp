#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    
    int x2 = x;
    int hashad = 0;
    
    while(x2 > 0){
        hashad += x2 % 10;
        x2 /= 10;
    }
    
    return x % hashad == 0;
}