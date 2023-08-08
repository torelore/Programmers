#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    int max = 0;
    
    int size = a > b ? b : a;
    
    for(int i = 1; i <= size; i++){
        if(a % i == 0 && b % i == 0){
            max = i;
        }
    }
    
    b /= max;
    
    
    while(b / 2 > 0 && b % 2 == 0){
        b /= 2;
    }
    
    while(b / 5 > 0 && b % 5 == 0){
        b /= 5;
    }
    
    if(b != 1){
        return 2;
    }
    
    
    return b;
}