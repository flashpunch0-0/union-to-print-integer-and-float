#include<stdio.h>
#include<string.h>

union Data {
    float f;
    int i;
    
};

int main() 
{
    int b;
    float a;
   
    scanf("%f",&a);
     scanf("%d",&b);
    union Data data;
    data.f= a;
    data.i = b;
    
   printf( "data.f : %f\n", data.f);
      printf( "data.i : %d\n", data.i);
}
