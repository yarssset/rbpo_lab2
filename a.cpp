module student_1bib21065_Lab2_Variant26_Task1;

namespace RBPO {
	namespace Lab2 {
		namespace Variant26 {
			namespace Task3 {
				double a(long);
			};
		};
	};
};

double RBPO::Lab2::Variant26::Task3::a(long n) {
	return  (-1) ^ n * (1 - ((n + 1) ^ 2 / (n + 2) ^ 2));
};