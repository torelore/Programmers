#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    
    for(int i = 0; i < n; i++){
        vector<int> ans;
        
        for(int j = 0; j < n; j++){
            if(i == j){
                ans.push_back(1);
            }
            else {
                ans.push_back(0);
            }
        }
        
        answer.push_back(ans);
    }
    
    return answer;
}