#include<stdio.h>
void Rectangle();
void Square();
void Circle();
int main()
{
	Rectangle();
	printf("In Rectangle function");
	Square();
	printf("In Square function");
	Circle();
	printf("In Circle function");
}
void Rectangle(){
	printf("In Rectangle Function");
	int l,b, Rarea, Rperimeter;
	printf("enter l & b");
	scanf("%d %d", &l,&b);
	Rarea=l*b;
	Rperimeter=2*(l+b);
	printf("Rarea = %d and Rperimeter = %d", Rarea, Rperimeter);
}	
void Square(){
	printf("In Square function");
	int s,Sarea,Sperimeter;
	printf("enter s");
	scanf("%d",&s);
	Sarea=s*s;
	Sperimeter = 4*s;
	printf("Sarea = %d and Sperimeter = %d" ,Sarea,Sperimeter);
}
void Circle(){
	printf("In Circle function");
	int r,Carea,Cperimeter;
	printf("enter r");
	scanf("%d",&r);
	Carea=3.14*r*r;
	Cperimeter=2*3.14*r;
	printf("Carea = %d and Cperimeter = %d",Carea,Cperimeter);
}
