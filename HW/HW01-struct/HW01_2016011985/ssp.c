#include "ssp.h"

int main(void){
    int i=0;//���� ����
    int t=0;
    int random;
    char name1[20],name2[20];
    srand(time(NULL));
    struct teammates teammates1[100];
    struct teammates teammates2[100];
    printf("input your teamname : ");//���� �Է�
    gets(name1);
    printf("input opposite teamname : ");
    gets(name2);
    printf("input number of member : ");
    scanf("%d",&t);
    printf("weapon: 1=scissor 2=stone 3=paper\n");//���� ����
    for(i=0; i<t; i++)//����ü�� ���� ����
    {
        random=rand()%3+1;
        *teammates1[i].teamname=*name1;
        teammates1[i].id=i;
        teammates1[i].weapon=random;
        teammates1[i].life=1;
        printf("id :%d\n",teammates1[i].id);
        printf("weapon :%d\n",teammates1[i].weapon);
        printf("life :%d\n\n",teammates1[i].life);
        *teammates2[i].teamname=*name2;
        teammates2[i].id=i;
        random=rand()%3+1;
        teammates2[i].weapon=random;
        teammates2[i].life=1;
    }
    int j=0;
    i=0;
    do{
        printf("teammates %d is played game\n",i);
        printf("choose opposite teammate (0~%d):",t-1);
        scanf("%d",&j);
        if(j>t-1||j<0)//������ ��� ���
        {
            printf("input correct number\n");
            continue;
        }
        if(teammates2[j].life==0)//�̹� ��밡 �����
        {
            printf("he is already lose\n");
            continue;
        }
        printf("your teammates %d vs opposite teammates %d\n",teammates1[i].id, teammates2[j].id);
        while(teammates1[i].life==1&&teammates2[j].life==1)//���������� ����
        {
            if(teammates1[i].weapon==teammates2[j].weapon)//���� ���
            {
                printf("draw regame\n");
                random=rand()%3+1;
                teammates1[i].weapon=random;
                random=rand()%3+1;
                teammates2[j].weapon=random;
            }
            if(teammates1[i].weapon==1 && teammates2[j].weapon==2)//������ ������ ���
            {
                printf("scissor vs stone\n");
                printf("opposite is win\n");
                random=rand()%2+1;
                teammates1[i].life=0;
                i++;
                if(random==1)
                {
                    teammates2[j].weapon=teammates2[i].weapon;
                }
                break;
            }
            if(teammates1[i].weapon==2 && teammates2[j].weapon==3)//������ ���ڱ� �� ���
            {
                printf("stone vs paper\n");
                printf("opposite is win\n");
                random=rand()%2+1;
                teammates1[i].life=0;
                i++;
                if(random==1)
                {
                    teammates2[j].weapon=teammates2[i].weapon;
                }
                break;
            }
            if(teammates1[i].weapon==3 && teammates2[j].weapon==1)//���ڱ�� ������ ���
            {
                printf("paper vs scissor\n");
                printf("opposite is win\n");
                random=rand()%2+1;
                teammates1[i].life=0;
                i++;
                if(random==1)
                {
                    teammates2[j].weapon=teammates2[i].weapon;
                }
                break;
            }
             if(teammates1[i].weapon==2 && teammates2[j].weapon==1)//������ ������ ���
            {
                printf("stone vs scissor\n");
                printf("your teammates is win\n");
                random=rand()%2+1;
                teammates2[j].life=0;
                if(random==1)
                {
                    teammates1[i].weapon=teammates2[j].weapon;
                    printf("change weapon to %d\n",teammates2[j].weapon);
                }
                break;
            }
             if(teammates1[i].weapon==3 && teammates2[j].weapon==2)//���ڱ�� ������ ���
            {
                printf("paper vs stone\n");
                printf("your teammates is win\n");
                random=rand()%2+1;
                teammates2[j].life=0;
                if(random==1)
                {
                    teammates1[i].weapon=teammates2[j].weapon;
                    printf("change weapon to %d\n",teammates2[j].weapon);
                }
                break;
            }
             if(teammates1[i].weapon==1 && teammates2[j].weapon==3)//������ ���ڱ��� ���
            {
                printf("scissor vs paper\n");
                printf("your teammates is win\n");
                random=rand()%2+1;
                teammates2[j].life=0;
                if(random==1)
                {
                    teammates1[i].weapon=teammates2[j].weapon;
                    printf("change weapon to %d\n",teammates2[j].weapon);
                }
                break;
            }
        }
        int k;
        j=0;
        for(k=0; k<t; k++)//��� ������ ��� �׾����� Ȯ��
        {
            if(teammates2[j].life==0)
            {
                j++;
            }
        }
    }while(i!=t&&j!=t);
    if(i==t)
    {
        printf("opposite team is win");
    }
    else if(j==t)
    {
        printf("your team is win");
    }
}
