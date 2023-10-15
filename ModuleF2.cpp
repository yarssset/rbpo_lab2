module student_1bib21065_Lab2_Variant26_Task1:F2;
#include <cmath>
namespace RBPO {
	namespace Lab2 {
		namespace Variant26 {
			namespace Task4 {
				double f2(double);
			};
		};
	};
};

double RBPO::Lab2::Variant26::Task4::f2(double x) {
	double result;
	if (x >= -3.5) {
		result = 4 * pow(x, 2) + 2 * x - 19;
	}
	else
		result = -2 * x / (-4 * x + 1);

	return result;
};