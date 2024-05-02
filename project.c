#include<stdio.h>
#include<string.h>
char task[10][50],cotask[10][50];
int numtask=0,compt=0,in;
void removetask()
        {
            int r,j,x,m;
            if(numtask<1)
            printf("First add Tasks to remove\n");
            else{
                printf("Displaying tasks:\n");
                for(j=0;j<numtask;j++)
                printf("%d)%s\n",j+1,task[j]);
            printf("Enter the Index of the Task you want to remove :\n");
            scanf("%d",&r);
            if(r>numtask||r<1)
             printf("Invalid Index\n");
             else{
                 for(x=r-1;x<numtask-1;x++)
                 {
                    for(m=0;m<50;m++)
                        task[x][m]=task[x+1][m];
                 }
                 numtask=numtask-1;
                printf("Task removed successfully!\n");
             }
            }
            }
            void discom()
            {
                int i;
                if(compt<1)
                printf("First mark Tasks as Completed\n");
                else
                {
                    printf("Displaying Completed Tasks:\n");
                     for(i=0;i<compt;i++)
                     {
                        printf("%d)%s\n",i+1,cotask[i]);
                     }
                }
            }
void comtask()
{
    int i,j,x;
    if(numtask<1)
    printf("First add Tasks to mark as Completed\n");
    else{
        printf("Displaying tasks:\n");
        for(i=0;i<numtask;i++)
                printf("%d)%s\n",i+1,task[i]);
                printf("Enter the Index of the Tasks you want to mark as Completed:\n");
                scanf("%d",&in);
                if(in>numtask||in<1)
                printf("Enter a valid index\n");
                else{
                    strcpy(cotask[compt], task[in - 1]);
                        compt++;
                     for(x=in-1;x<numtask-1;x++)
                     {
                        for(j=0;j<50;j++)
                        task[x][j]=task[x+1][j];
                     }
                    numtask=numtask-1;
                    printf("Task marked as Completed Successfully\n");
                }
    }
    
}
    void addtask()
    {
        int i,n;
        if(numtask>10||numtask==10)
        printf("To-Do List is full.Cannot add more tasks\n");
        else
        {   
            printf("How many Tasks do you want to enter ?\n");
            scanf("%d",&n);
        if(n>10)
        printf("You can only enter 10 Tasks.\n");
        else{
            n=numtask+n;
        printf("Enter your Tasks:\n");
        for(i=numtask;i<n;i++)
        {
          scanf("%s",task[i]);
           numtask=numtask+1;
        }
        printf("Tasks added successfully!\n");
        }
        }
    

    }
    void displaytask()
    {
        int i,n;
        if(numtask==0)
        printf("No Tasks are added\n");
        else{
         printf("Displaying tasks:\n");
        for(i=0;i<numtask;i++)
                printf("%d)%s\n",i+1,task[i]);
        }
    }
int main()
{
    int c;
    while(c!=6){
    printf("\n-------To-Do List-------\n1)Add tasks");
    printf("\n2)Remove Tasks\n3)Mark Tasks as Completed\n4)Display Completed tasks\n");
    printf("5)Display tasks\n6)Exit\n");
    printf("Enter your choice:\n");
    scanf("%d",&c);
    
    switch(c)
    {
        case 1:
        addtask();
        break;
        case 2:
        removetask();
        break;
        case 3:
        comtask();
        break;
        case 4:
        discom();
        break;
        case 5:
        displaytask();
        break;
        case 6:
        printf("Exiting......\n");
        return 0;
        default:
        printf("Enter a correct choice\n");

    }
}
}