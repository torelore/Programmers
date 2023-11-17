#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    int N, M;
    
    cin >> N >> M;
    
    int a, b, c;
    
    unordered_map<int, int> map;
    
    
    while(cin >> a >> b >> c){
        for(int i = a; i <= b; i++){
            map[i] = c;
        }
    }
    
    for(int i = 1; i <= N; i++){
        std::cout << map[i] << " ";
    }
    
    
    
    return 0;
}