#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    string str;
    
    cin >> str;
    
    unordered_map<int, int> myMap;
    
    for(const char& cch : str){
        myMap[(int)toupper(cch)]++;
    }
    
    string MaxAlp = "";
    int MaxCall = 0;
    bool isDuple = false;
    
    for(const auto& iter : myMap){
        if(MaxCall < iter.second){
            MaxAlp = iter.first;
            MaxCall = iter.second;
            
            isDuple = false;
        }
        else if(MaxCall == iter.second){
            isDuple = true;
        }
        
    }
    
    if(isDuple){
        cout << "?";
    }
    else{
        cout << MaxAlp;
    }
    
    
    return 0;
}