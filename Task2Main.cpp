
#include <iostream>
#include "TestScores.h"
using namespace std;

int main() {
    try {
        vector<int> scores = {90, 85, 100, 75, 88};
        TestScores myScores(scores);
        cout << "Average score: " << myScores.getAverage() << endl;
    } catch (const exception& e) {
        cerr << e.what() << endl;
    }
    return 0;
}
