//
// Created by Mark Hsu on 2021/5/25.
//

#ifndef BENCHMARKTEST_BENCHMARK_H
#define BENCHMARKTEST_BENCHMARK_H

#include <vector>

using std::vector;

class Benchmark {
public:
    Benchmark() = default;

    float absolute(vector<float> x);

    float sphere(vector<float> x);

    float ackley(vector<float> x);

    float rastrigin(vector<float> x);

    float rosenbrock(vector<float> x);

    float griewank(vector<float> x);

    float booth(float x1, float x2);

    float bohachevsky(float x1, float x2);

    float dropWave(float x1, float x2);

    float eggholder(float x1, float x2);
};

#endif //BENCHMARKTEST_BENCHMARK_H
