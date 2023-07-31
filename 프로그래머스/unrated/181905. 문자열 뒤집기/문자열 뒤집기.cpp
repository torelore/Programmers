#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string ansewr = my_string;
    
    for(int i = s; i <= e; i++){
        ansewr[i] = my_string[e - i + s];
    }
    
    return ansewr;
}