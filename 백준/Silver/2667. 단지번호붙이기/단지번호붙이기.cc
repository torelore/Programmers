#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

void dfs(int x, int y, vector<vector<int>>& graph, int N, int comp, vector<int>& compSize){
    graph[y][x] = comp;
    compSize[comp - 2]++;
    
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(nx >= 0 && nx < N && ny >= 0 && ny < N){
            if(graph[ny][nx] == 1){
                dfs(nx, ny, graph, N, comp, compSize);
            }        
        }
    }
}

int main(){
    int N = 0;
    
    cin >> N;
    
    vector<vector<int>> graph(N, vector<int>(N, 0));
    vector<int> compSize;

    for(int i = 0; i < N; i++){
        string str;
        cin >> str;
        
        for(int j = 0; j < N; j++){
            graph[i][j] = str[j] - '0';
        }
    }
    
    int comp = 2;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(graph[j][i] == 1){
                compSize.push_back(0); 
                dfs(i, j, graph, N, comp++, compSize);
            }
        }
    }
    
    sort(compSize.begin(), compSize.end());
    
    cout << compSize.size() << "\n";

    for(int i = 0; i < compSize.size(); i++){
        cout << compSize[i] << "\n";
    }
    
    return 0;
}
