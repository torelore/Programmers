#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    
    
    int row = n % 2;
    
    if(row == 1 && n != 1)
        answer++;
    
    int max = (n - row) / 2;
    
    for(int i = 1; i < max; i++){
        
        int sum = 0;
        
        for(int j = i; j < max; j++){
            sum += j;
            
            if(sum == n){
                answer++;
                break;
            }
            else if(sum > n)
                break;
        } // for(j) end
    } // for(i) end
    
    
    
    
    return answer;
}