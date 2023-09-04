#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int size = elements.size();

    vector<int> myVec = elements;

    for (int element : elements)
        myVec.push_back(element);

    set<int> sums;

    for (int i = 1; i <= size; i++) {
        for (int j = 0; j < size; j++) {
            int sum = 0;

            for (int k = j; k < j + i; k++)
                sum += myVec[k];

            sums.insert(sum);
        }
    }

    return sums.size();
}