#include<stdio.h>
struct student{
    int id;
    char name[20];
    float marks;
};
int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    struct student IT[n];
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