#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> srtVec = arr;
    
    sort(srtVec.begin(), srtVec.end());
    
    vector<int> answer;
    
    for(int num : arr){
        if(num != srtVec[0])
            answer.push_back(num);
    }
    
    if(answer.size() == 0){
        answer.push_back(-1);
    }
    
    return answer;
}