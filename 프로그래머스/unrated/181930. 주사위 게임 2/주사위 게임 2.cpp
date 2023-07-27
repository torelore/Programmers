#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(int a, int b, int c) {
    if(a != b && a != c && b != c){
        return a + b + c;
    }
    
    if(a == b && b == c && a == c){
        return pow(3, 3) * pow(a, 6);
    }
    
    return (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2));
}