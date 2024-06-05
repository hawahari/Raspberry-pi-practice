#include <stdio.h>
#include <time.h>

void func()
{
for(long int i=0;i<1000000000;i++);
{
long int sum=0;
sum=sum++;
}
}
int main()
{
clock_t start,end;
double cpu_time_used;

start=clock();
func();
end=clock();
cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
printf("%f\n",cpu_time_used);
return 0;
}
