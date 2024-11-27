
#include "TestScores.h"
using namespace std;

TestScores::TestScores(const vector<int>& inputScores) {
    for (int score : inputScores) {
        if (score < 0 || score > 100) {
            throw invalid_argument("Error: Scores must be between 0 and 100.");
        }
    }
    scores = inputScores;
}

double TestScores::getAverage() {
    int sum = 0;
    for (int score : scores) {
        sum += score;
    }
    return static_cast<double>(sum) / scores.size();
}
