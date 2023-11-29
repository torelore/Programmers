#include <iostream>
#include <vector>

using namespace std;

int main(){
    string ans;
    
    vector<vector<char>> WMat(5, vector<char>(15, ' '));
    
    for(int y = 0; y < 5; y++){
        string getStr;
        
        getline(cin, getStr);
        
        for(int x = 0; x < getStr.size(); x++)
            WMat[y][x] = getStr[x];
    }
    
    
    for(int x = 0; x < 15; x++){
        for(int y = 0; y < 5; y++){
            const char& cch = WMat[y][x];
            
            if(cch != ' ')
                ans += cch;
        }
    }
    
    cout << ans;
    
    return 0;
}