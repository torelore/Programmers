#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    vector<string> vecSuff;
    
    for(int i = 1; i <= my_string.size(); i++){
        string str = "";
        
        for(int j = my_string.size() - i; j < my_string.size(); j++){
            str += my_string[j];
        }
        
        vecSuff.push_back(str);
    }
    
    for(string str : vecSuff){
        if(is_suffix.compare(str) == 0){
            return 1;
        }
    }
    
    
    return 0;
}