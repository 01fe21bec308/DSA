#include<stdio.h>
struct cricket_player
{
    char name[20];
    char team[20];
    float average;
    int matches;
};
void display(struct cricket_player);
int main()
{
    struct cricket_player p1={"virat","INDIA",59.77,120};
    display(p1);

    return 0;
}
void display(struct cricket_player p1)
{
    printf("%s\t%s\t%f\t%d",p1.name,p1.team,p1.average,p1.matches);
}
