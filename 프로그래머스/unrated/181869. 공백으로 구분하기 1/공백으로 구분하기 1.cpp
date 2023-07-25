#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    string str = "";
    
    for(int i = 0 ; i < my_string.size(); i++){
        if(my_string[i] == ' ' || my_string.size() - 1 == i){
            if(my_string.size() - 1 == i){
                str += my_string[i];
            }
            
            answer.push_back(str);
            str = "";
            
            continue;
        }
        
        str += my_string[i];
    }
    
    return answer;
}