#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    
    int stan = 0;
    
    for(const auto str : myString){
        if(str == 'x'){
            answer.emplace_back(stan);
            stan = 0;
            continue;
        }
        
        stan++;
    }
    
    answer.emplace_back(stan);
    
    return answer;
}