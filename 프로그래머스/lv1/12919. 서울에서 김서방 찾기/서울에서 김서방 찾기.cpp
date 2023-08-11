#include <string>
#include <cstring>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    int idx = 0;
    
    string kim = "Kim";
    
    for(string name : seoul){
        if(strcmp(name.c_str(), kim.c_str()) == 0){
            return "김서방은 " + to_string(idx) + "에 있다";
        }
        
        idx++;
    }
    
    return "";
}