#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    
    for(int num : arr){
        answer.push_back(num);
        
        for(int del : delete_list){
            if(num == del){
                answer.pop_back();
                
                break;
            }
        }
    }
    
    return answer;
}