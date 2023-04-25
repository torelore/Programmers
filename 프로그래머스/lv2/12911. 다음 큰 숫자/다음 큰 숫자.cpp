#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int OCount = 1;
    int tempNum = n;
    
    while(true){
        if(tempNum == 1)
            break;
        
        if(tempNum % 2 == 1)
            OCount++;
        
        tempNum /= 2;
    } // while end
    
    while(true){
        int tempNum2 = ++n;
        int OCount2 = 1;
        
        while(true){
            if(tempNum2 == 1)
                break;

            if(tempNum2 % 2 == 1)
                OCount2++;

            tempNum2 /= 2;
        }
        
        if(OCount == OCount2){
            answer = n;
            break;
        }
    }    
    
    return answer;
}