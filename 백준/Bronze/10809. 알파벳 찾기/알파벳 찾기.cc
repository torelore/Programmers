#include <unordered_map>
#include <iostream>

using namespace std;

int main(){
    unordered_map<int, int> myMap;
    
    for(int i = (int)'a'; i <= (int)'z'; i++){
        myMap[i] = -1;
    }
    
    string word;
    
    cin >> word;
    
    int idx = 0;
    for(const char& cch : word){
        int cNum = (int) cch;
        
        if(myMap[cNum] == -1){
            myMap[cNum] = idx;
        }
        
        idx++;
    }
    
    
    
    for(int i = (int)'a'; i <= (int)'z'; i++){
        cout << myMap[i] << " ";
    }
    
    
    return 0;
}