#include<stdio.h>
#include<string.h>
struct info
{
	int roll_no;
	char name[50];
	float CGPA;
};

int details(struct info *i);

int main()
{
	struct info i;
	i.roll_no=328;
	strcpy(i.name, "Gaurav");
	i.CGPA=9.2;
	details(&i);
}

int details(struct info *i)
{
	printf("Roll No: %d\n",i->roll_no);
	printf("Name: %s\n",i->name);
	printf("CGPA: %f\n",i->CGPA);
}
