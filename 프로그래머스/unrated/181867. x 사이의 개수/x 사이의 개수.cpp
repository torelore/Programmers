#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    
    int stan = 0;
    
    for(auto& str : myString){
        if(str == 'x'){
            answer.push_back(stan);
            stan = 0;
            continue;
        }
        
        stan++;
    }
    
    answer.push_back(stan);
    
    return answer;
}