#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
   int idx = -1;
    
    for(const char& cch : s){
        if(cch == ' '){
            answer += cch;
            idx = -1;
        }
        else{
            if(idx == -1){
                idx = 0;
            }
            
            if(idx++ % 2 == 0){
                answer += toupper(cch);
            }
            else{
                answer += tolower(cch);
            }
        }
    }
    
    
    return answer;
}