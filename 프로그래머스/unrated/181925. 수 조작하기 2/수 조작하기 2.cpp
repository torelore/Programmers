#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    
    for(int i = 1; i < numLog.size(); i++){
        int count = numLog[i] - numLog[i - 1];
        
        if(count == 1)
            answer += 'w';
        if(count == 10)
            answer += 'd';
        if(count == -1)
            answer += 's';
        if(count == -10)
            answer += 'a';
    }
    
    
    return answer;
}