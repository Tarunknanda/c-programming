#include<stdio.h>
#include<conio.h>
 struct stu
 {
 	int roll;
 	char name[10];
 	struct stu1
	 {
 		char subcode[5];
 		int mark;
	 }st1;
 }st;
 void main()
 {
 	printf("enter the roll number");
 	scanf("%d",&st.roll);
 	printf("\n enter the student name");
 	scanf("%s",&st.name);
 	printf("\n enter the subject code");
 	scanf("%s",&st.st1.subcode);
 	printf("\n enter the mark");
 	scanf("%d",&st.st1.mark);
 	printf("Roll=%d",st.roll);
 		printf("\n Name=%s",st.name);
 			printf("\n Subject code=%s",st.st1.subcode);
 	            printf("\n Mark=%d",st.st1.mark);
 	            getch();
 }
