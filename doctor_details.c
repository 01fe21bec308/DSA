#include<stdio.h>
#include<string.h>
typedef struct doc_details
{
    char name[20],hosp[20],spec[20],qual[20];
    int age,exp;
}DOCTOR;
void read_details(DOCTOR *docptr,int n);
void display_details(DOCTOR *docptr,int n);
void specific_details(DOCTOR *docptr,int n);
void max_age(DOCTOR *docptr,int n);
DOCTOR* min_age(DOCTOR *docptr,int n);

int main()
{
    DOCTOR doc[20];
    DOCTOR *docptr, *min;
    docptr=doc;
    int n;
    printf("Enter number of doctors\n");
    scanf("%d",&n);
    read_details(docptr,n);
    display_details(docptr,n);
    specific_details(docptr,n);
    max_age(docptr,n);
    min=min_age(docptr,n);
    printf("Youngest doctor's name:%s\n",min->name);
    return 0;
}
void read_details(DOCTOR *docptr,int n)
{
    int i;
    printf("Enter the doctor details\n");
    printf("|Name|specialization|qualification|Hospital name|age|experience|\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %s %s %s %d %d",docptr->name,docptr->spec,docptr->qual,docptr->hosp,&docptr->age,&docptr->exp);
        docptr++;
    }
}
void display_details(DOCTOR *docptr,int n)
{
    int i;
    printf("Name\tspecilization\tqualification\thospital name\tage\texperience\n");
    for(i=0;i<n;i++)
    {
        printf("|%s|%s|%s|%s|%d|%d|%d|\n",docptr->name,docptr->spec,docptr->qual,docptr->hosp,docptr->age,docptr->exp);
        docptr++;
    }
}
void specific_details(DOCTOR *docptr,int n)
{
    int i;
    char search_hosp[20];
    printf("Enter hospital name to search\n");
    scanf("%s",search_hosp);
    for(i=0;i<n;i++)
    {
        if(strcmp(docptr->hosp,search_hosp)==0)
        {
            printf("Doctor in the hospital %s is %s\n",search_hosp,docptr->name);
            docptr++;
        }

    }
}
void max_age(DOCTOR *docptr,int n)
{
    int i,j,m_age1=0;
    DOCTOR *max_ptr;

    for(i=0;i<n;i++)
    {
        if(m_age1<docptr->age)
        {
            m_age1=docptr->age;
            max_ptr=docptr;

        }
        docptr++;
    }
    printf("Highest aged doctor's Name:%s\n",max_ptr->name);

}
DOCTOR* min_age(DOCTOR *docptr,int n)
{
    int i,minage=100;
    DOCTOR *min_ptr;
    for(i=0;i<n;i++)
    {
        if(minage>docptr)
        {
            minage=docptr->age;
            min_ptr=docptr;
        }
        docptr++;
    }
    return min_ptr;
}

