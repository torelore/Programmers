#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    sort(tangerine.begin(), tangerine.end());
    
    vector<int> TanCount;
    
    int BackTan = tangerine[0];
    
    int count = 1;
    
    for(int i = 1; i < tangerine.size(); i++){
        if(tangerine[i] != BackTan){
            BackTan = tangerine[i];
            TanCount.push_back(count);
            count = 1;
        }
        else {
            count++;
        }
    }
    
    TanCount.push_back(count);
    
    
    sort(TanCount.begin(), TanCount.end());
    
    
    for(int i = 0; i < TanCount.size(); i++){
        int idx = TanCount.size() - 1 - i;
        
        k -= TanCount[idx];
        answer++;
        
        if(k <= 0)
            break;
    }    
    
    
    
    return answer;
}