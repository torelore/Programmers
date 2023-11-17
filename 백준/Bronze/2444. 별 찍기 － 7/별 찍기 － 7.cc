#include <iostream>

using namespace std;

int main(){
    int T = 0;
    
    cin >> T;
    
    int Max = T*2 -1;
    
    for(int i = 1; i <= Max; i++){
        int star = 0;
        int space = 0;
        
        if(i <= T){
            star = i * 2 - 1;
        }else {
            star = (Max - i) * 2 + 1;
        }
        
        space = (Max - star) / 2;
            
        for(int j = 0; j < space; j++){
            cout << " ";
        }

        for(int j = 0; j < star; j++){
            cout << "*";
        }
        
        cout << "\n";
    }
    
    return 0;
}