# icnlude<stdio.h>

int averageage(int*age,int num);

int main()
{
    int age[10];
    int num;
    printf("输入学生个数/n");
    scanf("%d",&num);
    int i=0;
    for( i=0;i<num;i++)
    {
         printf("输入学生年龄\n");
         scanf("%d",&age[i]);
    }   
    
    int average;
    average=averageage(&age,num);
    printf(" the average of age is %d", average);
    
 
    retrn 0;
}


int averageage(int*age,int num)
{
    int average;
    for (i=0;i<num;i++)
    {
        int sum=0;
        sum+=age[i];
        
    }
        average=sum/num;
        
        return average
    
}
