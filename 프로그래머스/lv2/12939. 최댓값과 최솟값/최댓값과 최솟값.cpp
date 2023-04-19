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

	// Bubble
	{
		size_t countMax = v.size();

		for (size_t s1 = 0; s1 < v.size(); s1++) {
			size_t max = v.size() - 1;

			for (size_t s = 0; s < max; s++) {
				int num1 = v[s];
				int num2 = v[s + 1];

				if (num1 > num2) {
					v[s + 1] = num1;
					v[s] = num2;
				}
			}
		}
	}

	answer = to_string(v.front()) + " " + to_string(v.back());

	return answer;
}