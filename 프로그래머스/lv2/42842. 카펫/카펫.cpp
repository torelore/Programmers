#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
        
    int Total = brown + yellow;
        
    
    for(int i = 3; i < 2500; i++){
        if(Total % i == 0){
            for(int j = 3; j <= i; j++){
                if(Total == i * j){          
                    
                    if(i * 2 + j * 2 - 4 == brown){
                        answer.push_back(i);
                        answer.push_back(j);

                        return answer;
                    }
                }
            }  // for end 
        }
    } // for end
    
    
    
    return answer;
}