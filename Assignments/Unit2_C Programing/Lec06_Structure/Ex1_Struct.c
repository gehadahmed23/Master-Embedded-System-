#include "stdio.h"
#include "math.h"
#include <stdbool.h>
#include "string.h"

struct Sstudent{
  char name[50];
  int roll_number;
  float mark;
};
void main()
{
	struct Sstudent a;
	printf("Enter information of student \n");
	printf("Enter name : ");
	gets(a.name);
	printf("Enter roll number : ");
	scanf("%d", &a.roll_number);
	printf("Enter mark : ");
	scanf("%f", &a.mark);

	printf("\nDisplay information \n");
	printf("name: %s \nroll number: %d\nmark: %.2f\n", a.name, a.roll_number, a.mark);


}