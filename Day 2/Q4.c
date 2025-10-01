/*Q4: Write a program to calculate the area and circumference of a circle given its radius.*/
int main()
{
	float r,a=0,c=0;
	printf("Enter radius of circle\n");
	scanf("%f",&r);
	a=3.14*r*r;
	c=2*3.14*r;
	printf("Area\n%f ", a);
	printf("Circumference\n%f ",c);
	return 0;
}


