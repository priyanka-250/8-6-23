#include <stdio.h>
struct Students {
    int roll_no;
    char name[5];
    int chemmark, mathmark, phymark;
    float percentage;
};


main()
 {
	int i;
	float percentage;
    struct Students m[5];
    for(i=0; i<5; i++)
	{
    	printf("Enter roll no. :\n");
        scanf("%d", &m[i].roll_no);
        printf("Enter name :\n");
        scanf("%s",m[i].name);
        printf("Enter Chemistry marks :\n");
        scanf("%d", &m[i].chemmark);
        printf("Enter Maths marks :\n");
        scanf("%d", &m[i].mathmark);
        printf("Enter Physics marks :\n");
        scanf("%d", &m[i].phymark);
    }
    printf("\n=====================================\n");
    
    
	for(i=0; i<5; i++)
	 {
	 	printf("Student Roll No.=%d\n",m[i].roll_no);
	    printf("Student Name=%c\n",m[i].name);
	    printf("Student Chemistry Marks=%d\n",m[i].chemmark);
	    printf("Student Maths Mark=%d\n",m[i].mathmark);
	    printf("Student Physics Mark.=%d\n",m[i].phymark);
	    percentage= (m[i].chemmark + m[i].mathmark + m[i].phymark*100)/300;
	    printf("students s Percentage is =%f\n",percentage);
	}
  
}

