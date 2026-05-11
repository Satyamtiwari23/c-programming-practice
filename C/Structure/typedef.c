/* because of using typedef we can use stu instead of struct student to declare 
variables of type struct student. In this code, we define a structure named student 
with three members: id, name, and marks. We then create an array of type stu 
(which is an alias for struct student) to store information about multiple students. 
The program prompts the user to enter the number of students and their details, and 
then it displays the entered information.*/
#include<stdio.h>
typedef struct student{
    int id;
    char name[20];
    float marks;
} stu ;
int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    stu IT[n];
    for(int i=0;i<n;i++){
        printf("Enter id of student %d: ",i+1);
        scanf("%d",&IT[i].id);
        printf("Enter name of student %d: ",i+1);
        getchar(); // to consume the newline character left by previous scanf
        fgets(IT[i].name, 20, stdin);
        printf("Enter marks of student %d: ",i+1);
        scanf("%f",&IT[i].marks);
        printf("\n");
    }
    for(int i=0;i<n;i++){
        printf("Id of student %d: %d\n",i+1,IT[i].id);
        printf("Name of student %d: %s",i+1,IT[i].name);
        printf("Marks of student %d: %.2f\n",i+1,IT[i].marks);
        printf("\n");
    }
    return 0;
}