#include <string>
#include <vector>

using namespace std;

bool IsSmallWord(char _Word) {
	return _Word >= 'a' && _Word <= 'z';
}

string solution(string s) {
	string answer = "";


	bool isFirst = true;

	for (size_t i = 0; i < s.size(); i++) {
		if (isFirst) {
			if (s[i] == ' ') {
				answer += s[i];
				continue;
			}
            
			if (IsSmallWord(s[i]))
				s[i] -= 32;

			isFirst = false;
		}
		else {
			if (s[i] == ' ')
				isFirst = true;
			else if (!IsSmallWord(s[i]))
				s[i] += 32;
		}


		answer += s[i];
	}


	return answer;
}