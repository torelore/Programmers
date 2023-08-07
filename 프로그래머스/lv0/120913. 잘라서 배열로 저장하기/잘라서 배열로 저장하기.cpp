#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;

    string str = "";
    int idx = 1;
    
    for(const char cch : my_str){
        str += cch;
        
        if(idx >= n){
            answer.push_back(str);
            str = "";
            idx = 1;
        }
        else{
            idx++;
        }
    }
    
    if(str != "")
        answer.push_back(str);
    
    return answer;
}