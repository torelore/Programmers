#include <string>
#include <vector>
#include <iostream>

using namespace std;


vector<int> solution(string s) {
    int TransCount = 0;
    int ZeroCount = 0;
       
    while(true){
        if(s.size() == 1)
            break;
        
        string s2;

        for(size_t Size = 0; Size < s.size(); Size++){
            if(s[Size] == '1')
                s2 += s[Size];
            else
                ZeroCount++;
        } // for end
        
        int strSize = s2.size();
        
        s = "";
        
        while(strSize != 1){
            s = (strSize % 2 == 0 ? '0' : '1') + s;
            strSize = strSize / 2;
        } // while end

        s = '1' + s;
        
        TransCount++;
    }
    
    
    return {TransCount, ZeroCount};
}