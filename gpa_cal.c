#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void main()
{
	int cred, grade, numsub, totcred = 0;
	float resgpa = 0;
	printf("* Welcome to GPA Calculator *\n\nThis calculator is used to calculate your grade point for the semester\nbased on the credits for the subject and marks obtained\n");
	printf("\n\nEnter the number of subjects :");
	scanf("%d", &numsub);
	for (int i = 1; i <= numsub; i++)
	{
		printf("\nEnter credits for subject%d : ", i);
		scanf("%d", &cred);
		printf("\nEnter the grade point obtained : ");
		scanf("%d", &grade);

		resgpa += (float)grade * cred;
		totcred += cred;

	}
	resgpa = resgpa / totcred;
	printf("\nGPA obtained in this semester is : %.2f", resgpa);
	_getch();
}