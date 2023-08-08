#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(vector<int> query : queries){
        int min = 1000001;
        
        for(int i = 0; i < arr.size(); i++){
            if(query[0] <= i && query[1] >= i){
                if(arr[i] > query[2]){
                    min = min < arr[i] ? min : arr[i];
                }
            }
        }
        
        if(min <= 1000000){
            answer.push_back(min);
        }
        else{
            answer.push_back(-1);
        }
        
        
    }
    
    
    return answer;
}