#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string a, string b) {
    string answer = "";

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int idx = 0;
    bool isOver = false;

    while (true) {
        bool isAOver = false;
        bool isBOver = false;

        int aNum = 0;

        if (idx >= a.size()) {
            isAOver = true;
        }
        else {
            aNum = a[idx] - '0';
        }

        int bNum = 0;

        if (idx >= b.size()) {
            isBOver = true;
        }
        else {
            bNum = b[idx] - '0';
        }


        if (isAOver && isBOver){
            if(isOver)
                answer += '1';
            
            break;
        }

        int sum = aNum + bNum;

        if (isOver) {
            sum++;
            isOver = false;
        }

        if (sum >= 10) {
            isOver = true;
            sum %= 10;
        }

        answer += to_string(sum);

        idx++;
    }


    reverse(answer.begin(), answer.end());


    return answer;
}