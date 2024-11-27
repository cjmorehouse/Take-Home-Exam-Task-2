
#ifndef TESTSCORES_H
#define TESTSCORES_H

#include <vector>
#include <stdexcept>

class TestScores {
private:
    std::vector<int> scores;

public:
    TestScores(const std::vector<int>& inputScores);
    double getAverage();
};

#endif
