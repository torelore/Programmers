#include <algorithm>
#include <iostream>

using namespace std;

int reverseInt(int num){
    int H = num / 100;
    int T = num / 10 % 10;
    int O = num % 10;
    
    return O * 100 + T * 10 + H;
}

int main(){
    int a, b;
    
    cin >> a >> b;
    
    a = reverseInt(a);
    b = reverseInt(b);
    
    cout << max(a, b);
    
    
    
    return 0;
}