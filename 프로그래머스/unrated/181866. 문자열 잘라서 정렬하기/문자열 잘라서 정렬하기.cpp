#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    
    string str = "";
    
    for(const char cch : myString){
        if(cch == 'x'){
            if(str.size() > 0){
                answer.push_back(str);
            }
            str = "";
            
            continue;
        }
        
        str += cch;
    }
    
    if(str.size() > 0){
        answer.push_back(str);
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}