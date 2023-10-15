module;
#include <cmath>
module student_1bib21065_Lab2_Variant26_Task1;

namespace RBPO {
	namespace Lab2 {
		namespace Variant26 {
			namespace Task3 {
				double f4(double);
				double a(long);
			};
		};
	};
};

double RBPO::Lab2::Variant26::Task3::f4(double epsilon) {
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