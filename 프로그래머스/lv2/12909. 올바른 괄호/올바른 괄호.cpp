#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    size_t Max = s.size() - 1;
    
    if(s[0] == ')' || s[Max] == '(')
        return false;
    
    int Count = 0;
    
    for(size_t Size = 0; Size <= Max; Size++){
        if(s[Size] == '('){ 
            Count++;
            continue;
        }
        
        if(s[Size] == ')'){
            if(Count == 0)
                return false;
            
            Count--;
        }
    }
    
    if(Count != 0)
        answer = false;

    return answer;
}