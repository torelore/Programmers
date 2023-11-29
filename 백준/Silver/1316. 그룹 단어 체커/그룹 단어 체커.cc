#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    int N = 0;
    
    cin >> N;
    
    int ans = 0;
    
    
    
    for(int i = 0; i < N; i++){
        string str;
        
        cin >> str;
        
        unordered_map<int, int> myMap;
        
        
    
        for(const char& cch : str)
            myMap[(int)cch]++;
        
    
        
        char bc = ' '; // 직전 단어
        bool isGroup = true;
        
        int count = 1; // 연결되어 나오는 문자의 카운트 수
        
        for(const char& cch : str){
            if(bc == cch){
                // 이전 단어와 현재 단어가 같을 때
                count++;
            }
            else{
                // 이전 단어와 현재 단어가 다를 때
                if(myMap[(int)bc] != count && bc != ' '){
                    isGroup = false;
                    break;
                }
                
                count = 1;
            }

            bc = cch;
        }
                
        if(isGroup)
            ans++;
    }
    
    cout << ans;
    
    return 0;
}