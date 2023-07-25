#include<stdio.h>

typedef struct cricket_player
{
    char name [20],team_name[20];
    int highest_score,runs,ODI_rank;
    float avg;
}CP;

 void read_details(CP*Cptr);
 void display_details(CP*Cptr);

 int main()
 {
     CP C1;
     CP *cptr;
     cptr=&C1;
     read_details(cptr);
     display_details(cptr);
     return 0;
 }

 void read_details(CP *Cptr)
 {
     printf("enter player name\n");
     scanf("%*c %s",Cptr->name);
     printf("enter team name\n");
     scanf("%*c %s",Cptr->team_name);
     printf("enter highest score\n");
     scanf("%d",&Cptr->highest_score);
     printf("enter runs\n");
     scanf("%d",&Cptr->runs);
     printf("enter ODI rank\n");
     scanf("%d",&Cptr->ODI_rank);
     printf("enter average\n");
     scanf("%f",&Cptr->avg);
 }
 void display_details(CP *Cptr)
 {
     printf("player name %s\n",(*Cptr).name);
     printf("team name %s\n",(*Cptr).team_name);
     printf("Highest score %d\n",(*Cptr).highest_score);
     printf("Runs scored %d\n",(*Cptr).runs);
     printf("ODI RANK %d\n",(*Cptr).ODI_rank);
 }

