#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(vector<int> query : queries){
        int idx = 0;
        
        int min = 1000001;
        
        for(int num : arr){
            
            if(query[0] <= idx && query[1] >= idx){
                if(query[2] < arr[idx])
                    min = min < num ? min : num;
            }
        }
            
        if(min <= 1000000)
            answer.push_back(min);
        else{
            answer.push_back(-1);
        }

        idx++;
    }
    
    
    return answer;
}