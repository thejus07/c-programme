#include <stdio.h>
struct student
{
    int roll_no;
    char name[20];
};
int main()
{
    struct student stu;
    stu.roll_no = 22;
    strcpy(stu.name, "thejus");
    printf("Structure data\n");
    printf("roll_no : %d\n",stu.roll_no);
    printf("name : %s\n",stu.name);
}
