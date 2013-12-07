#include <stdio.h>
#include <math.h>  
#include <vector>
std::vector<double> x(256*1024);
int main()
{
   int i = 0;
   while (scanf("%lf", &x[i++])== 1);
   i--;
   while (i > 0) printf("%.4lf\n", sqrt(x[--i]));
   return 0;
}