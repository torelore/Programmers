#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    unordered_map<string, int> part;
    
    for(string name : participant){
        part[name]++;
    }
    
    for(string name : completion){
        part[name]--;
    }
    
    for(auto iter : part){
        if(iter.second > 0)
            return iter.first;
    }
}