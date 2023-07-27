#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {
    const char cch = my_string[num1];
    
    my_string[num1] = my_string[num2];
    my_string[num2] = cch;
    
    
    return my_string;
}