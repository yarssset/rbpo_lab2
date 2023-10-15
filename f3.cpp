module student_1bib21065_Lab2_Variant26_Task1;

namespace RBPO {
	namespace Lab2 {
		namespace Variant26 {
			namespace Task3 {
				double f3(unsigned long);
				double a(long);
			};
		};
	};
};

double RBPO::Lab2::Variant26::Task3::f3(unsigned long n) {
	double result = 0;
	for (unsigned long i = 0; i < n; i++) {
		result += a(i);
	}
	return result;
};