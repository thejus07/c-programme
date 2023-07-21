#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int s;
    int e;
    int v;
}RangeValue;
void insertRangeValue(RangeValue *ranges, int *count)
{
    int s, e, v;
    printf("Enter Start Range: ");
    scanf("%d", &s);
    printf("Enter End Range: ");
    scanf("%d", &e);
    printf("Enter the range value: ");
    scanf("%d",&v);
     for (int i=0;i< *count;i++)
        {
        if (s<=ranges[i].e && e>=ranges[i].s)
        {
            if (s<ranges[i].s)
            {
                ranges[i].s= s;
            }
            if (e>ranges[i].e)
                {
                ranges[i].e= e;
            }
            ranges[i].v += v;

            return;
        }
        }
         RangeValue newRange={s,e,v};
    ranges[*count]=newRange;
    (*count)++;
}
void displayrangevalue(RangeValue *ranges,int *count)
{
        printf("\nRange Value\n");
        for (int i=0;i<count;i++)
            {
        printf("%d-%d %d\n", ranges[i].s, ranges[i].e, ranges[i].v);
    }
}
int main()
{
     RangeValue ranges[100];
    int count = 0;
    char choice;
   while (1) {
        insertRangeValue(ranges, &count);

        printf("\nDo you want to insert another range value? (Y/N): ");
        scanf(" %c", &choice);

        while (getchar() != '\n');

        if (choice != 'Y' && choice != 'y') {
            break;
        }
    }

    displayrangevalue (ranges, count);
    return 0;


}








