//
// Created by Mark Hsu on 2021/5/25.
//

#ifndef BENCHMARKTEST_BENCHMARK_H
#define BENCHMARKTEST_BENCHMARK_H

#include <vector>

using std::vector;

class Benchmark {
public:
    Benchmark() = delete;

    float absolute(vector<float> x);

    float sphere(vector<float> x);

    float ackley(vector<float> x);

    float rastrigin(vector<float> x);

    float rosenbrock(vector<float> x);

    float griewank(vector<float> x);

    float booth(vector<float> x);

    float bohachevsky(vector<float> x);

    float dropWave(vector<float> x);

    float eggholder(vector<float> x);
};

#endif //BENCHMARKTEST_BENCHMARK_H
