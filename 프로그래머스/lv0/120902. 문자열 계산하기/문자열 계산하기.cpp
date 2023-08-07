#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    stringstream ss;
    ss.str(my_string);
    string str;
    
    bool isSum = true;
    bool isMinus = false;
    
    while(ss >> str){
        if(isSum){
            answer += stoi(str);
            
            isSum = false;
        }
        
        if(isMinus){
            answer -= stoi(str);
            
            isMinus = false;
        }
        
        
        if(str[0] == '+'){
            isSum = true;
        }
        
        if(str[0] == '-'){
            isMinus = true;
        }
    }
    
    
    
    return answer;
}