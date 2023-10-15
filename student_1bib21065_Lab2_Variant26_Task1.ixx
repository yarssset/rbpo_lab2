module;
#include <cmath>
export module student_1bib21065_Lab2_Variant26_Task1;

export import :A;
export import :F1;
export import :F2;
export import :F3;
export import :F4;


namespace RBPO {
	namespace Lab2 {
		namespace Variant26 {
			namespace Task1 {
				export double f1(double);
				export double f2(double);
				export double f3(unsigned long);
				export double f4(double);
				double a(long);
			};
			export namespace Task2 {
				double f1(double);
				double f2(double);
				double f3(unsigned long);
				double f4(double);
			};
			namespace Task3 {
				export double f1(double);
				export double f2(double);
				export double f3(unsigned long);
				export double f4(double);
				double a(long);
			};
			namespace Task4 {
				export double f1(double);
				export double f2(double);
				export double f3(unsigned long);
				export double f4(double);
				double a(long);
			};
			namespace Task5 {
				export double f1(double);
				export double f2(double);
				export double f3(unsigned long);
				export double f4(double);
				double a(long);
			};
			namespace Task1 {
				double f1(double x)
				{
					double result = 1 / (sqrt(x + 2));
					return result;
				}
				double f2(double x)
				{
					double result;
					if (x >= -3.5) {
						result = 4 * pow(x, 2) + 2 * x - 19;
					}
					else
						result = -2 * x / (-4 * x + 1);

					return result;
				}
				double a(long n)
				{
					double result = (-1) ^ n * (1 - ((n + 1) ^ 2 / (n + 2) ^ 2));
					return result;
				}
				double f3(unsigned long n)
				{
					double result = 0;
					for (unsigned long i = 0; i < n; i++) {
						result += a(i);
					}
					return result;
				}
				double f4(double epsilon)
				{
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
			};
		};
	};
};
