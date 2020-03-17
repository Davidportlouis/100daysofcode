#include<stdio.h>
#include<math.h>

float _sqrt(float x)
{
	return pow(x,0.5);
}

int perfect(double x)
{
 int iVar;
 float fVar;
 fVar = _sqrt(x);
 iVar = fVar;
 if(iVar == fVar)
	return 1;
 else
	return 0;
}

int main(void)
{
 int n;
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
  if(perfect(i))
	printf("%d",i);
 }
 return 0;
}
