#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    
    int min = 1000;
    
    for(int num : array){
        if(n == num)
            return n;
        
        int numMin = abs(n - num);
        
        if(min > numMin){
            min = numMin;
            answer = num;
            continue;
        }        
        
        if(min == numMin){
            answer = answer > num ? num : answer;
        }
        
        
    }
    
    
    
    
    
    return answer;
}