#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    
    vector<int> vecSize;
    
    for(int i = 0; i < 30; i++){
        vecSize.push_back(0);
    }
    
    
    for(string str : strArr){
        size_t Size = str.size();
        
        vecSize[Size - 1] += 1;
    }

    
    sort(vecSize.begin(), vecSize.end());
    
    
    return vecSize[29];
}