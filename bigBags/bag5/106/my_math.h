#ifndef MY_MATH_LIB__
#define MY_MATH_LIB__
//const double my_PI = 3.1415926535897932;
#define my_PI 3.1415926535897932


double my_fabs(double x);

double my_sin(double x);
double my_cos(double x);
double my_exp(double x);

double my_integral(double, double, double(*)(double)); //107.c 需要
#endif