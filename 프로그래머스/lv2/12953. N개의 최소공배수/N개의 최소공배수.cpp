#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    
    sort(arr.begin(), arr.end());
    
    answer = arr[0] * arr[arr.size() - 1];
    
    
    while(true){
        bool IsLCM = true;
        
        for(int i = 0; i < arr.size(); i++){
            if(answer % arr[i] != 0){
                IsLCM = false;
                break;
            }
        }
        
        if(IsLCM)
            break;
        
        answer += arr[0];
    }
    
    
    
    return answer;
}