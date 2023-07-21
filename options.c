#include<stdio.h>
int main()
{
int options,i,pos,value,size,srch,arr[size];
printf("\n 1: create \n 2:display \n 3:insert \n 4:search \n 5:delete \n 6:exit \n");
scanf("%d",&options);
switch(options)
{
    case 1:
        printf("Enter the size of the array: ");
        scanf("%d",&size);
        printf("Enter the elements of the array: ");
        for(i=0; i<size;i++)
            {
                scanf("%d",&arr[i]);
            }
            for(i=0;i<size;i++)
            {

                printf("%d",arr[i]);
            }
        break;
        case 2:
            printf("Enter the size of the array: ");
        scanf("%d",&size);
        printf("Enter the elements of the array: ");
        for(i=0; i<size;i++)
            {
                scanf("%d",&arr[i]);
            }
            printf("The elements of the array are: ");
            for(i=0;i<size;i++)
                {
                    printf("%d ",arr[i]);
                }
                printf("\n");
                break;
                case 3:
                    printf("Enter the size of the array: ");
        scanf("%d",&size);
        printf("Enter the elements of the array: ");
        for(i=0; i<size;i++)
            {
                scanf("%d",&arr[i]);
            }
                    printf("Enter the position you want to insert the element: ");
                    scanf("%d", &pos);
                    printf("Enter the value you want to insert: ");
                    scanf("%d",&value);
                    for(i=size-1;i>=pos-1;i--)
                        {
                            arr[i+1]=arr[i];
                        }
                        arr[pos-1]=value;
                        size++;
                        printf("The elements of the array are: ");
            for(i=0;i<size;i++)
                {
                    printf("%d ",arr[i]);
                }
                printf("\n");
                        break;
                case 4:
                    printf("Enter the size of the array: ");
        scanf("%d",&size);
        printf("Enter the elements of the array: ");
        for(i=0; i<size;i++)
            {
                scanf("%d",&arr[i]);
            }
                    printf("enter the element you want to search");
                    scanf("%d",&srch);
                    for(i=0;i<size;i++)
                    {
                        if(arr[i]==srch)
                        {
                            printf("element found at position %d",i+1);
                            printf("The elements of the array are: ");
            for(i=0;i<size;i++)
                {
                    printf("%d ",arr[i]);
                }
                printf("\n");
                            break;
                        }

                    }
                case 5:
                    printf("Enter the size of the array: ");
        scanf("%d",&size);
        printf("Enter the elements of the array: ");
        for(i=0; i<size;i++)
            {
                scanf("%d",&arr[i]);
            }
                    printf("enter the position of element to delete");
                    scanf("%d",&pos);
                    for(i=pos-1;i<size;i++)
                    {
                        arr[i]=arr[i+1];
                    }
                    size--;
                    printf("The elements of the array are: ");
            for(i=0;i<size;i++)
                {
                    printf("%d ",arr[i]);
                }
                printf("\n");
                    break;

                case 6:
                    printf("exiting..\n");
                    break;
                default:
                    printf("invalid \n");
}




}
