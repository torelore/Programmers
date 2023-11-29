#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N = 0;
    int M = 0;
    
    cin >> N >> M;
    
    vector<vector<int>> MatA(M, vector<int>(N, 0));
    vector<vector<int>> MatB(M, vector<int>(N, 0));
    
    int idx = 0;
    
    for(int y = 0; y < M; y++){
        for(int x = 0; x < N; x++){
            cin >> MatA[y][x];
        }
    }
    
    for(int y = 0; y < M; y++){
        for(int x = 0; x < N; x++){
            cin >> MatB[y][x];
        }
    }
    
    for(int y = 0; y < M; y++){
        for(int x = 0; x < N; x++){
            cout << MatA[y][x] + MatB[y][x];
            
            if(x != N - 1){
                cout << " ";
            }
        }
        
        cout << "\n";
    }
    
    
    
    
    return 0;
}