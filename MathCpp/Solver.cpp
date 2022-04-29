#include "Solver.h"

Solver::Solver() {}

double Solver::SolveTask1(double t, double l) {
	return pow(3 * t, 2) + pow(3 * l, 5) + 4.9;
}

double Solver::SolveTask2(double p, double y) {
	return log(pow(p, 2) + pow(y, 3)) + exp(p);
}

double Solver::SolveTask3(double n, double y) {
	return n * (y + 3.5) + sqrt(y);
}

double Solver::SolveTask4(double a, double t) {
	return 9.8 * pow(a, 2) + 5.52 * cos(pow(t, 5));
}

double Solver::SolveTask5(double l, double x) {
	return 1.51 * l * cos(pow(x, 2)) + 2 * pow(x, 3);
}

double Solver::SolveTask6(double y, double x) {
	return cos(2 * y) + 3.6 * exp(x);
}

double Solver::SolveTask7(double m) {
	return pow(m, 2) + 2.8 * abs(m) + 0.55;
}

double Solver::SolveTask8(double y) {
	return sqrt(abs(6 * pow(y, 2) - 0.1 * y + 4));
}

double Solver::SolveTask9(double y, double x) {
	return log(y + 0.95) + sin(pow(x, 4));
}

double Solver::SolveTask10(double y, double k, double x) {
	return exp(y) + 7.355 * pow(k, 2) + pow(sin(x), 2);
}

double Solver::SolveTask11(double y, double x) {
	return 9.756 * pow(y, 7) + 2 * tan(x);
}

double Solver::SolveTask12(double t, double x) {
	return 7 * pow(t, 2) + 3 * pow(sin(x), 3) + 9.2;
}

double Solver::SolveTask13(double y) {
	return sqrt(abs(3 * pow(y, 2) + 0.5 * y + 4));
}

double Solver::SolveTask14(double y, double x) {
	return abs(sqrt(pow(sin(y), 2) + 6.835 + exp(x)));
}

double Solver::SolveTask15(double y) {
	return sin(pow(y, 2)) - 2.8 * y + sqrt(abs(y));
}

double Solver::SolveTask16(double y, double l) {
	return sqrt(cos(4 * pow(y, 2))) + 7.151;
}

double Solver::SolveTask17(double y) {
	return 3 * pow(y, 2) + sqrt(y + 1);
}

double Solver::SolveTask18(double y) {
	return 3 * pow(y, 2) + sqrt(pow(y, 3) + 1);
}

double Solver::SolveTask19(double n, double y, double g) {
	return n * sqrt(pow(y, 3) + 1.09 * g);
}

double Solver::SolveTask20(double k, double y, double x) {
	return exp(k + y) + tan(x * sqrt(y));
}

double Solver::SolveTask21(double y, double h) {
	return  exp(y + 5.5) + 9.1 * pow(h, 3);
}

double Solver::SolveTask22(double u, double y, double x) {
	return sin(2 * u) * log(2 * pow(y, 2) + sqrt(x));
}

double Solver::SolveTask23(double y, double f) {
	return exp(2 * y) + sin(pow(f, 2));
}

double Solver::SolveTask24(double y) {
	return 2 * sin(0.214 * pow(y, 5) + 1);
}

double Solver::SolveTask25(double y, double f) {
	return exp(2 * y) + sin(pow(f, 2));
}

double Solver::SolveTask26(double p) {
	return pow(sin(pow(p, 2) + 0.4), 3);
}

double Solver::SolveTask27(double v, double y, double x) {
	return 1.03 * v + exp(2 * y) + tan(x);
}

double Solver::SolveTask28(double y, double h) {
	return exp(y + h) + sqrt(abs(6.4 * y));
}

double Solver::SolveTask29(double y) {
	return 3 * pow(y, 2) + sqrt(abs(y + 1));
}

double Solver::SolveTask30(double y, double r) {
	return exp(y + r) + 7.2 * sin(r);
}
