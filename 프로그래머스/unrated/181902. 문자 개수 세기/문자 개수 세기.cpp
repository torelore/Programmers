#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    
    for(int i = 0; i < 52; i++){
        answer.push_back(0);
    }
    
    for(const char cch : my_string){
        if(cch >= 'a' && cch <= 'z'){
            answer[cch - 'a' + 26] += 1;
        }
        
        if(cch >= 'A' && cch <= 'Z'){
            answer[cch - 'A'] += 1;
            
        }
    }
    
    
    return answer;
}