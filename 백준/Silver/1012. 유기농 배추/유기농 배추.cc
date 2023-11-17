#include <iostream>
#include <vector>

using namespace std;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

void dfs(int x, int y, vector<vector<int>>& graph, vector<vector<bool>>& visited){
    visited[y][x] = true;
    
    // 상하좌우 4방위에 대한 체크
    for(int i = 0; i < 4; i++){
        int nX = x + dx[i];
        int nY = y + dy[i];
        
        if(nY >= 0 && nY < graph.size() && nX >= 0 && nX < graph[0].size()){
            if(!visited[nY][nX] && graph[nY][nX] == 1){
                dfs(nX, nY, graph, visited);
            }
        }
    }
}

int main(){
    int T = 0;
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        int M = 0;
        int N = 0;
        int K = 0;
        
        cin >> M >> N >> K;
        
        vector<vector<int>> graph(N, vector<int>(M, 0));
        vector<vector<bool>> visited(N, vector<bool>(M, false));
        
        for(int j = 0; j < K; j++){
            int x = 0;
            int y = 0;
            
            cin >> x >> y;
            
            graph[y][x] = 1;
        }
        
        int ans = 0;
        
        for(int j = 0; j < N; j++){
            for(int l = 0; l < M; l++){
                if(graph[j][l] == 1 && !visited[j][l]){
                    dfs(l, j, graph, visited);
                    ans++;
                }
            }
        }
        
        
        cout << ans << "\n";
    }
    
    return 0;
}