#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    int min = a;
    int max = b;
    
    if(a > b){
        min = b;
        max = a;
    }
    
    for(int i = min; i <= max; i++){
        answer += i;
    }
    
    return answer;
}