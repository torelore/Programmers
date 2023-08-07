#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    
    for(string line : picture){
        string str = "";
        
        for(const char cch : line){
            for(int i = 0; i < k; i++){
                str += cch;
            }
        }
        
        for(int i = 0; i < k; i++){
            answer.push_back(str);
        }
    }
    
    return answer;
}