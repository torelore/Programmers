#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<int, int> map;
    
    int num;
    
    while(cin >> num){
        map[num]++;
    }
    
    for(int i = 1 ; i <= 30; i++){
        if(map[i] == 0){
            cout << i << "\n";
        }
    }
    
    
    return 0;
}