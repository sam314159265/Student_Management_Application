#include<stdio.h>
int main()
{
    int i,a;
    struct student_info
    {
    char name [20];
    char semester[6];
    char bloodgroup[6];
    int roll;
    int year;
    float cgpa;
    }
    info[6];
    FILE *fp=fopen("student.txt","r");
    for(i=0;i<6;i++)
    {
    fscanf(fp,"%s %s %s",info[i].name,info[i].semester,info[i].bloodgroup);
    fscanf(fp,"%d %d %f",&info[i].roll,&info[i].year,&info[i].cgpa);
    }
    for(i=0;i<6;i++)
    {
    printf("%s\t %s\t %s\t %d\t %d\t %f\n",info[i].name,info[i].semester,info[i].bloodgroup,info[i].roll,info[i].year,info[i].cgpa);
    }

    fclose(fp);

    /*for searching*/
    printf("Enter roll for searching:");
    scanf("%d",&a);
    for(i=0;i<6;i++)
    {
    if(a==info[i].roll)
    {
    printf("\n\nName:%s\nSemester:%s\nName of Blood Group:%s\nRoll:%d\nYear:%d\nCgpa:%f\n",info[i].name,info[i].semester,info[i].bloodgroup,info[i].roll,info[i].year,info[i].cgpa);
    FILE*fb=fopen("ece.txt","w");
    fprintf(fb,"Name:%s\nSemester:%s\nRoll:%d\nYear:%d\nCgpa:%f\n",info[i].name,info[i].semester,info[i].bloodgroup,info[i].roll,info[i].year,info[i].cgpa);
    }
}

    /*for updating Year*/

    printf("\nEnter roll for updating:");
    scanf("%d",&a);
    for(i=0;i<6;i++)
{
    if(a==info[i].roll)
    {
        printf("\nEnter year:");
        scanf("%d",&info[i].year);
    }

}
    printf("\n");
    fp=fopen("student.txt","w");
    for(i=0;i<6;i++)
    {
    fprintf(fp,"%s\t%s\t%s\t%d \t%d\t%f\n",info[i].name,info[i].semester,info[i].bloodgroup,info[i].roll,info[i].year,info[i].cgpa);
    printf("\n%s\t%s\t%s\t%d \t%d\t%f\n",info[i].name,info[i].semester,info[i].bloodgroup,info[i].roll,info[i].year,info[i].cgpa);
    }
    printf("\n");

 /*for updating CGPA*/

    printf("\nEnter roll for updating:");
    scanf("%d",&a);
    for(i=0;i<6;i++)
{
   if(a==info[i].roll)
   {
       printf("\nEnter cgpa:");
       scanf("%f",&info[i].cgpa);
   }
}
printf("\n");
fp=fopen("student.txt","w");
for(i=0;i<6;i++)
{
    fprintf(fp,"%s\t%s\t%s\t%d \t%d\t%f\n",info[i].name,info[i].semester,info[i].bloodgroup,info[i].roll,info[i].year,info[i].cgpa);
    printf("\n%s\t%s\t%s\t%d \t%d\t%f\n",info[i].name,info[i].semester,info[i].bloodgroup,info[i].roll,info[i].year,info[i].cgpa);
}
printf("\n");


/*Semester updating*/
printf("\nEnter roll for updating:");
scanf("%d",&a);
for(i=0;i<6;i++)
{
    if(a==info[i].roll)
    {
        printf("\nEnter semester:");
        scanf("%s",info[i].semester);
    }
}
    printf("\n");
    fp=fopen("student.txt","w");
    for(i=0;i<6;i++)
{
    fprintf(fp,"%s\t%s\t%s\t%d \t%d\t%f\n",info[i].name,info[i].semester,info[i].roll,info[i].year,info[i].cgpa);
    printf("\n%s\t%s\t%s\t%d \t%d\t%f\n",info[i].name,info[i].semester,info[i].roll,info[i].year,info[i].cgpa);
}
printf("\n");
}
