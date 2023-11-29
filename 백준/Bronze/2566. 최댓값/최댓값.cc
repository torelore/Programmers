#include <iostream>
#include <string>

using namespace std;

int main(){
    int Max = -1;
    int OutX = 0;
    int OutY = 0;
    
    for(int y = 1; y <= 9; y++){
        string str;
        
        std::getline(cin, str);
        
        if(str.size() == 1)
            return 0;
        
        int x = 1;
        string numStr;
        
        
        for(int idx = 0; idx < str.size(); idx++){
            const char& cch = str[idx];
            numStr += cch;
            
            if(cch == ' ' || idx == str.size() - 1){
                int num = stoi(numStr);
                
                if(Max < num){
                    Max = num;
                    OutX = x;
                    OutY = y;
                }
                
                numStr = "";
                
                ++x;
            }
        }
    }
    
    cout << Max << "\n" << OutY << " " << OutX;
    
    
    return 0;
}