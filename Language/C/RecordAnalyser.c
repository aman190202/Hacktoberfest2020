//THE PROGRAM'S OBJECTIVE IS TO CALCULATE HOW MANY TIMES DOES A BATSMAN BREAK HIS LOWEST RUN SCORE AND HIGHEST RUN SCORE.
//THE USER HAS TO FIRST INPUT THE NUMBER OF MATCHES AND IN THE NEXT LINE, THE RUN SCORED IN EACH MATCH SEPARATED BY A SPACE.
//THE USER WILL BE PROVIDED WITH TWO INTEGERS SEPARATED BY A SPACE, THE FIRST ONE BEING, NUMBER OF TIMES HIGH SCORE BROKEN, AND THE SECOND ONE, NUMBER OF TIMES, LOWEST SCORE BROKEN.
//Sample input:
//9
//10 5 20 20 4 5 2 25 1
//output: 2,4
#include<stdio.h>
void breakingRecords(int,long int []);
int main()
{
    int a;
    long int b[1000];
    scanf("%d",&a);
    for(int i=0;i<a;i++)
        scanf("%ld",&b[i]);
    breakingRecords(a,b);
    return 0;
}
void breakingRecords(int a,long int b[])
{
    int x=0,y=0;
    long int max=0,low=0;
    max=b[0];
    low=b[0];
    for(int i=0;i<a;i++)
    {
        if(max>b[i])
        {
            x++;
            max=b[i];
        }
        if(low<b[i])
        {
            y++;
            low=b[i];
        }

    }
    printf("%d %d",y,x);

}
