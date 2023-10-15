module;
#include <cmath>

module student_1bib21065_Lab2_Variant26_Task1;

namespace RBPO {
	namespace Lab2 {
		namespace Variant26 {
			namespace Task2 {
				double f1(double);
				double f2(double);
				double f3(unsigned long);
				double f4(double);
				double a(long);
			};
		};
	};
};

double RBPO::Lab2::Variant26::Task2::f1(double x) {
	return  1 / (sqrt(x + 2));
};

double RBPO::Lab2::Variant26::Task2::f2(double x) {
	double result;
	if (x >= -3.5) {
		result = 4 * pow(x, 2) + 2 * x - 19;
	}
	else
		result = -2 * x / (-4 * x + 1);

	return result;
};

double RBPO::Lab2::Variant26::Task2::a(long n) {
	return (-1) ^ n * (1 - ((n + 1) ^ 2 / (n + 2) ^ 2));
};

double RBPO::Lab2::Variant26::Task2::f3(unsigned long n) {
	double result = 0;
	for (int i = 0; i < n; i++) {
		result += a(i);
	}
	return result;
};

double RBPO::Lab2::Variant26::Task2::f4(double epsilon) {
	double result = 0;
	double n = 8.98847e+307;
	for (int i = 0; i < n; i++) {
		result += a(i);
		if (abs(a(i) - a(i - 1)) > epsilon) {
			return result;
		}
	}
	return 0;
};