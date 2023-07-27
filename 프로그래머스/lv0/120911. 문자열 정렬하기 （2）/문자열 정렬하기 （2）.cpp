#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(const char cch : my_string){
        answer += tolower(cch);
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}