#include "Benchmark.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setprecision;
using std::fixed;

void display(const std::string &name, float ans1, float ans2) {
    cout << name << " fitness:" << '\t';
    cout << ans1 << endl;
    cout << name << " fitness:" << '\t';
    cout << ans2 << endl;
    if (ans1 == ans2)
        cout << "ans1 = ans2" << endl;
    else
        cout << "----- ans1 != ans2 -----" << endl;
}

int main() {
    cout << fixed << setprecision(50);
    float ans1, ans2;
    Benchmark b;

    vector<float> x_f1(2, 100);
    x_f1[0] = 0;
    ans1 = b.absolute(x_f1);
    x_f1[0] = powf(2, -18);
    ans2 = b.absolute(x_f1);
    display("Absolute", ans1, ans2);

    vector<float> x_f2(30, 5);
    ans1 = b.sphere(x_f2);
    x_f2[0] = 5.0f - powf(2, -18);
    ans2 = b.sphere(x_f2);
    display("Sphere", ans1, ans2);

    vector<float> x_f3(30, 0);
    ans1 = b.ackley(x_f3);
    x_f3[0] = powf(2, -149);
    ans2 = b.ackley(x_f3);
    display("Ackley", ans1, ans2);

    vector<float> x_f4(30, 0);
    ans1 = b.rastrigin(x_f4);
    x_f4[0] = powf(2, -149);
    ans2 = b.rastrigin(x_f4);
    display("Rastrigin", ans1, ans2);

    vector<float> x_f5(30, 1);
    ans1 = b.rosenbrock(x_f5);
    x_f5[0] = 1.0f - powf(2, -25);
    ans2 = b.rosenbrock(x_f5);
    display("Rosenbrock", ans1, ans2);

    vector<float> x_f6(30, 0);
    ans1 = b.griewank(x_f6);
    x_f6[0] = powf(2, -149);
    ans2 = b.griewank(x_f6);
    display("Griewank", ans1, ans2);

    ans1 = b.booth(1.0 - powf(2, -149), 3.0);
    ans2 = b.booth(1.0, 3.0);
    display("Booth", ans1, ans2);

    ans1 = b.bohachevsky(0.0, 0.0);
    ans2 = b.bohachevsky(powf(2, -149), 0.0);
    display("Bohachevsky", ans1, ans2);

    ans1 = b.dropWave(powf(2, -149), 0.0);
    ans2 = b.dropWave(0, 0.0);
    display("Drop-Wave", ans1, ans2);

    ans1 = b.eggholder(0, powf(2, -149));
    ans2 = b.eggholder(0, 0);
    display("Eggholder", ans1, ans2);
    return 0;
}
