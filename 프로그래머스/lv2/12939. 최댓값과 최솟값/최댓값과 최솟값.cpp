#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
	string answer = s;
	
	vector<int> v;

	int idx = 0;

	while (true) {
		int idx2 = answer.find(" ", idx);

		int num = stoi(answer.substr(idx, idx2));

		v.push_back(num);

		idx = idx2 + 1;

		if (idx2 == -1)
			break;
	}

	sort(v.begin(), v.end());

	answer = to_string(v.front()) + " " + to_string(v.back());

	return answer;
}