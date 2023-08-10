#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    
    map<int, int> myMap;
    
    
    for(const auto& line : lines){
        for(int i = line[0]; i < line[1]; i++)
            myMap[i]++;
    }
    
    for(auto newLine : myMap){
        if(newLine.second > 1)
            answer++;
    }
    
    
    return answer;
}