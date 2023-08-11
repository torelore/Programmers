#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    while(true){
        if(n == pow(answer, 2))
            break;
        
        if(n < pow(answer, 2))
            return -1;
        
        answer++;
    }    
    
    
    return pow(answer + 1, 2);
}