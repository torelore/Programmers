#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    
    int ans1 = 0;
    int ans2 = 0;
    
    bool Fail = false;    
    
    for(int i = 1; i < words.size(); i++){
        for(int j = 0; j < i; j++){
            if(words[i].compare(words[j]) == 0){
                
                ans1 = i % n + 1;
                ans2 = i / n + 1;
                
                Fail = true;
                break;
            }
        }
        
        if(Fail)
            break;
        
        string BackWord = words[i - 1];
        
        if(BackWord[BackWord.length() - 1] != words[i][0]){
            ans1 = i % n + 1;
            ans2 = i / n + 1;
            
            break;
        }
    }
    
    answer.push_back(ans1);
    answer.push_back(ans2);
    
    
    
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다. 
    //cout << Count << endl;

    return answer;
}