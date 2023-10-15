module student_1bib21065_Lab2_Variant26_Task1:F3;

namespace RBPO {
	namespace Lab2 {
		namespace Variant26 {
			namespace Task4 {
				double f3(unsigned long);
			};
		};
	};
};

double RBPO::Lab2::Variant26::Task4::f3(unsigned long n) {
	double result = a(0);
	for (unsigned long i = 0; i < n; result += a(i++)) {
		result += a(i);
	}
	return result;
};