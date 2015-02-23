#include<stdio.h>
int main()
{
int a[5] = {5, 1, 15, 20, 25};
int x, y, z;
x = ++a[1];
y = a[1]++;
z = a[x++];
printf("%d, %d, %d", x, y, z);
return 0;
}
