#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    for(int i = 0; i < t.size() - p.size() + 1; i++){
        bool isSmaller = false;
        
        for(int j = 0; j < p.size(); j++){
            if(t[i + j] == p[j]){
                if(j == p.size() - 1)
                    answer++;
                
                continue;
            }
            else if(t[i + j] < p[j]){
                answer++;
            }
            
            break;
            
        }
    }
    
    
    return answer;
}