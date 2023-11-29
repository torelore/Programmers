#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string inStr;
    int inNum = 0;
    
    cin >> inStr >> inNum;
    
    unsigned int ans = 0;
    
    for(int i = 0; i < inStr.size(); i++){
        int num = 0;
        
        const char& ch = inStr[i];    
        
        if(ch >= '0' && ch <= '9'){
            num = ch - '0';
        }
        else{
            num = ch - 'A' + 10;
        }
        
        int exp = inStr.size() - i - 1;
        
        ans += pow(inNum, exp) * num;
    }
    
    
    cout << ans;
    
    return 0;
}