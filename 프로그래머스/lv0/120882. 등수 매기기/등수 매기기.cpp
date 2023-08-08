#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;

    vector<double> avg;

    for (vector<int> scr : score) {
        avg.push_back((scr[0] + scr[1]) / 2.0);
    }

    vector<double> copy = avg;

    sort(avg.begin(), avg.end());
    avg.erase(unique(avg.begin(), avg.end()), avg.end());

    
    
    for (double scr : copy) {
        int idx = 0;

        for (int i = 0; i < avg.size(); i++) {
            if (scr == avg[i]) {
                idx = avg.size() - i;

                break;
            }
        }

        answer.push_back(idx);
    }
    
    
    
    for(int i = 1; i < avg[avg.size() - 1] + 1; i++){
        int count = -1;
        
        for(int scr : answer){
            if(i == scr){
                count++;
            }
        }
        
        if(count > 0){
            for(int j = 0; j < answer.size(); j++){
                if(answer[j] > i){
                    answer[j] += count;
                }
            }
        }
    }




    return answer;
}