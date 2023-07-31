#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    for(int i = 0; i < my_string.size(); i++){
        const char cch = tolower(my_string[i]);
        
        if(cch >= 'a' && cch <= 'z'){
            my_string[i] = ' ';
        }
    }
    
    stringstream ss;
    int num = 0;
    ss.str(my_string);
    
    while(ss >> num){
        answer += num;
    }
    
    
    return answer;
}