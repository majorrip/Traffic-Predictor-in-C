#include<stdio.h>
#include<string.h>
#include<conio.h>
void menu();
void traf_pred();
void traf_data();
void am_pm(int );


int main()
{
   menu();
}


void menu()
{
   int men_var;/// the value of 1,2,3 in the project.


    printf("\t\t\t\t\t---------TRAFFIC GENIE---------\n");
    printf("\t\t\t\t\t-------------------------------\n");
    printf("\t\t\t Welcome to traffic geneie program, this is a program that \n");
    printf("\t\t   allows the user to know the time taken to reach its final destination\n");
    printf("\t\t\t\t\t and many more other functions\n\n\n");

    printf("\t\t\t\t\t    ----------MENU---------- \n\n\n");
    printf("\t\t\t\t Press 1 to activate Traffic Predictor\n\n");
    printf("\t\t\t\t Press 2 to Read all known traffic in Dhaka City.\n\n");
    printf("\t\t\t\t Press 3 to EXIT the program.\n\n\n");
    printf("\t\t\t\t Enter your number:");
    scanf("%d", &men_var);
    switch(men_var)
    {
    case 1:
        {
            traf_pred();
            //printf("1 is working");
            break;
        }
    case 2:
        {
            traf_data();
            //printf("2 is working");
            break;
        }
    case 3:
        {
            printf("Have a nice day.\n");
            printf(".\n.\n.\n.\n............\n Shutting Down.");
            system("taskkill/IM cb_console_runner.exe");
            break;
        }
    }
}

void traf_pred()
{
struct info{
char cur_des[100];
char fin_des[100];
char day[15];
int time;
}input;

    int i;
    //float
    char st1[10]="friday";
    char st2[10]="saturday";

    char des1[50]="bashundhara";
    char des2[50]="uttara";
    char des3[50]="cantonment";
    char des4[50]="farmgate";
    char des5[50]="dhanmondi";

    char ts1[50];/// curr destination
    char ts2[50];/// final destination

    char day1[50];///the structure's day is in this string.

        printf("\n\n\n");
        printf("\t\t\t   ----------------------Traffic Predictor----------------------\n\n");
///current destination:
        printf("\n\tEnter your current destination \n\tfrom bashundara/uttara/cantonment/farmgate/dhanmondi: ");
        //gets(input.cur_des);
        scanf("%s",&input.cur_des);
///final destination:
        printf("\n\tEnter your final destination \n\tfrom bashundara/uttara/cantonment/farmgate/dhanmondi: ");
        //gets(input.fin_des);
        scanf("%s",&input.fin_des);
///day:
        printf("\n\tEnter your current day \n\tfrom sunday/monday/tuesday/wednesday/thursday/friday/saturday: ");
        //gets(input.day);
        scanf("%s",&input.day);
///time:
        printf("\n\tEnter your current time in 24 hours format \n\t(example 0800 or 1700): ");
        scanf("%d", &input.time);

         strcpy(day1,input.day);/// copying day

         strcpy(ts1,input.cur_des);/// copying current des

         strcpy(ts2,input.fin_des);/// copying final des

        ///friday and saturday

if(strcmp(st1,day1)==0 || strcmp(st2,day1)==0)

        {
            printf("\n\tthe day is: %s", day1);
            printf("\n\tyou are at: %s", input.cur_des);
            printf("\n\tyour final destination: %s", input.fin_des);
            printf("\n\tyour current time: %d", input.time);

            /// roads to use and ETA on fridays and saturdays.
                /// starting point and ending point for each

                if(strcmp(des1,ts1)==0 && strcmp(des2,ts2)==0 || strcmp(des2,ts1)==0 && strcmp(des1,ts2)==0)
                {
                    i=input.time+20;
                    am_pm(i);
                    printf("\n\n\tMake your way to Khilkhet and then get on the Airport road\n\tget on the flyover that connects the Airport road with Bashundhara");
                    printf("\n\n\n");

                }
                 else if(strcmp(des1,ts1)==0 && strcmp(des3,ts2)==0 || strcmp(des3,ts1)==0 && strcmp(des1,ts2)==0)
                {
                    printf("\n\n\tIf you use Heroes live forever and vice versa\n");
                    i=input.time+15;
                    am_pm(i);
                    printf("\n\n\tIf you travel on the Maymenshing highway and vice versa.");
                    i=input.time+20;
                    am_pm(i);
                    printf("\n\n\tIf you use Manikdi, Gulshan-2 and the Mymenshing highway and vice versa.");
                    i=input.time+25;
                    am_pm(i);
                    printf("\n\n\n");

                }
                 else if(strcmp(des1,ts1)==0 && strcmp(des4,ts2)==0 || strcmp(des4,ts1)==0 && strcmp(des1,ts2)==0)
                {
                    i=input.time+50;
                    am_pm(i);
                    printf("\n\n\tIf you use manikdi, gulshan-2, the mymenshing highway\n\tthen make your way to the primeminister's office by using the mohakhali flyover\n\tthat road will take you to farmgate and vice versa\n\textra jam at bijoy sharani and vice versa.");
                    printf("\n\n\n");

                }
                 else if(strcmp(des1,ts1)==0 && strcmp(des5,ts2)==0 || strcmp(des5,ts1)==0 && strcmp(des1,ts2)==0)
                {
                    i=input.time+100;
                    am_pm(i);
                    printf("\n\n\tIf you use Manikdi, gulshan-2, the Mymenshing highway\n\tthen make your way to the Prime minister's Office by using the Mohakhali flyover\n\tthat road will take you to Farmgate\n\tand lastly you will go to Monipuripara to reach Dhanmondi and vice versa.");
                    printf("\n\n\texpect traffic at Bijoy sharini and Moniporipara.");
                    printf("\n\n\n");

                }
                 else if(strcmp(des2,ts1)==0 && strcmp(des3,ts2)==0 || strcmp(des3,ts1)==0 && strcmp(des2,ts2)==0)
                {
                    i=input.time+16;
                    am_pm(i);
                    printf("\n\n\tUse airport road and enter through heroes live forever and vice versa.");
                    i=input.time+20;
                    am_pm(i);
                    printf("\n\n\tUse airport road and mymenshing highway and vice versa.");
                    printf("\n\n\n");

                }
                 else if(strcmp(des2,ts1)==0 && strcmp(des4,ts2)==0 || strcmp(des4,ts1)==0 && strcmp(des2,ts2)==0)
                {
                    i=input.time+115;
                    am_pm(i);
                    printf("\n\n\tUse airport road followed by Mymenshing highway followed by\n\tthen make your way to the Prime minister's office by using the Mohakhali flyover\n\tthat road will take you to Farmgate and vice versa.");
                    printf("\n\n\n");

                }
                 else if(strcmp(des2,ts1)==0 && strcmp(des5,ts2)==0 || strcmp(des5,ts1)==0 && strcmp(des2,ts2)==0)
                {
                    i=input.time+110;
                    am_pm(i);
                    printf("\n\n\tUse airport road followed by mymenshing highway followed by\n\tthen make your way to the primeminister's office by using the mohakhali flyover\n\tthat road will take you to monipuripara whhich will take you to dhanmondi and vice versa.");
                    printf("\n\n\n");

                }
                 else if(strcmp(des3,ts1)==0 && strcmp(des4,ts2)==0 || strcmp(des4,ts1)==0 && strcmp(des3,ts2)==0)
                {
                    i=input.time+20;
                    am_pm(i);
                    printf("\n\n\tTake the Bijoy Sharani route to reach farmgate and vice versa.");
                    printf("\n\n\n");

                }
                 else if(strcmp(des3,ts1)==0 && strcmp(des5,ts2)==0 || strcmp(des5,ts1)==0 && strcmp(des3,ts2)==0)
                {
                    i=input.time+35;
                    am_pm(i);
                    printf("\n\n\tTake the Bijoy Sharani route and pass monipuripara to reach dhanmondi and vice versa.");
                    printf("\n\n\n");

                }
                 else if(strcmp(des4,ts1)==0 && strcmp(des5,ts2)==0 || strcmp(des5,ts1)==0 && strcmp(des4,ts2)==0)
                {
                    i=input.time+10;
                    am_pm(i);
                    printf("\n\n\tGo to green road and pass the Square Hospital Road to enter Dhanmondi and vice versa. ");
                    printf("\n\n\n");

                }
                else
                {
                    printf("\n\n\t\terror 404 you may have put the same final and current destination \n\n\n\n");
                    traf_pred();
                }

        }

        ///sunday to thursday
else
{           printf("\n\n\tthe day is: %s", day1);
            printf("\n\n\tyou are at: %s", input.cur_des);
            printf("\n\n\tyour final destination: %s", input.fin_des);
            printf("\n\n\tyour current time: %d", input.time);

             /// roads to use and ETA on sunday to thursday.
                /// starting point and ending point for each
                if(strcmp(des1,ts1)==0 && strcmp(des2,ts2)==0 || strcmp(des2,ts1)==0 && strcmp(des1,ts2)==0)
                {
                    i=input.time+35;
                    am_pm(i);
                    printf("\n\n\tMake your way to Khilkhet and then get on the Airport road\n\tget on the flyover that connects the Airport road with Bashundhara");
                    printf("\n\n\n");

                }
                 else if(strcmp(des1,ts1)==0 && strcmp(des3,ts2)==0 || strcmp(des3,ts1)==0 && strcmp(des1,ts2)==0)
                {
                    i=input.time+30;
                    am_pm(i);
                    printf("\n\n\tIf you use Heroes live forever and vice versa\n");
                    i=input.time+45;
                    am_pm(i);
                    printf("\n\n\tIf you travel on the Maymenshing highway and vice versa\n");
                    i=input.time+50;
                    am_pm(i);
                    printf("\n\n\tIf you use Manikdi, Gulshan-2 and the Mymenshing highway and vice versa\n");
                    printf("\n\n\n");

                }
                 else if(strcmp(des1,ts1)==0 && strcmp(des4,ts2)==0 || strcmp(des4,ts1)==0 && strcmp(des1,ts2)==0)
                {
                    i=input.time+105;
                    am_pm(i);
                    printf("\n\n\tIf you use manikdi, gulshan-2, the mymenshing highway\n\tthen make your way to the primeminister's office by using the mohakhali flyover\n\tthat road will take you to farmgate and vice versa\n\textra jam at bijoy sharani and vice versa.");
                    printf("\n\n\n");

                }
                 else if(strcmp(des1,ts1)==0 && strcmp(des5,ts2)==0 || strcmp(des5,ts1)==0 && strcmp(des1,ts2)==0)
                {
                    i=input.time+115;
                    am_pm(i);
                    printf("\n\n\tIf you use Manikdi, gulshan-2, the Mymenshing highway\n\tthen make your way to the Prime minister's Office by using the Mohakhali flyover\n\tthat road will take you to Farmgate\n\tand lastly you will go to Monipuripara to reach Dhanmondi and vice versa.");
                    printf("\n\n\texpect traffic at Bijoy sharini and Moniporipara.");
                    printf("\n\n\n");

                }
                 else if(strcmp(des2,ts1)==0 && strcmp(des3,ts2)==0 || strcmp(des3,ts1)==0 && strcmp(des2,ts2)==0)
                {
                    i=input.time+26;
                    am_pm(i);
                    printf("\n\n\tUse airport road and enter through heroes live forever and vice versa.");
                    input.time+30;
                    am_pm(i);
                    printf("\n\n\tUse airport road and mymenshing highway and vice versa.");
                    printf("\n\n\n");

                }
                 else if(strcmp(des2,ts1)==0 && strcmp(des4,ts2)==0 || strcmp(des4,ts1)==0 && strcmp(des2,ts2)==0)
                {
                    i=input.time+145;
                    am_pm(i);
                    printf("\n\n\tUse airport road followed by Mymenshing highway followed by\n\tthen make your way to the Prime minister's office by using the Mohakhali flyover\n\tthat road will take you to Farmgate and vice versa.");
                    printf("\n\n\n");

                }
                 else if(strcmp(des2,ts1)==0 && strcmp(des5,ts2)==0 || strcmp(des5,ts1)==0 && strcmp(des2,ts2)==0)
                {
                    i=input.time+130;
                    am_pm(i);
                    printf("\n\n\tUse airport road followed by mymenshing highway followed by\n\tthen make your way to the primeminister's office by using the mohakhali flyover\n\tthat road will take you to monipuripara whhich will take you to dhanmondi and vice versa.");
                    printf("\n\n\n");
                }

                 else if(strcmp(des3,ts1)==0 && strcmp(des4,ts2)==0 || strcmp(des4,ts1)==0 && strcmp(des3,ts2)==0)
                {
                    i=input.time+45;
                    am_pm(i);
                    printf("\n\n\tTake the Bijoy Sharani route to reach farmgate and vice versa.");
                    printf("\n\n\n");

                }
                 else if(strcmp(des3,ts1)==0 && strcmp(des5,ts2)==0 || strcmp(des5,ts1)==0 && strcmp(des3,ts2)==0)
                {
                    i=input.time+55;
                    am_pm(i);
                    printf("\n\n\tTake the Bijoy Sharani route and pass monipuripara to reach dhanmondi and vice versa.");
                    printf("\n\n\n");

                }
                 else if(strcmp(des4,ts1)==0 && strcmp(des5,ts2)==0 || strcmp(des5,ts1)==0 && strcmp(des4,ts2)==0)
                {
                    i=input.time+25;
                    am_pm(i);
                    printf("\n\n\tGo to green road and pass the Square Hospital Road to enter Dhanmondi and vice versa. ");
                    printf("\n\n\n");

                }

                else
                {
                    printf("\n\n\t\terror 404 you have put the same final and current destination or you made an input error!\n\n\n\n");
                    traf_pred();

                }
}
            printf("\n\n\t\t\t Press 1 to exit or Press 0 to re-run this program.\n\n");
            printf("\t\t\t  You answer: ");
            scanf("%d",&i);

                    if(i==1)
                    {
                         system("taskkill/IM cb_console_runner.exe");
                    }
                    else
                    {
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
                        menu();
                    }

}


void traf_data()
{
 int men_var;

    printf("\n\n\n\t\t\t\t\t  -------Traffic Data--------\n\n");
    printf("\t\tWelcome to the the Traffic Data center, here you can read our compiled traffic data\n");
    printf("\t\t      Here you can read the following data we collected over a span of 2 weeks\n\n\n\n");

    printf("\t\t\t Press 1 to read the traffic data.\n\n");
    printf("\t\t\t Press 2 to re-run the program.\n\n");
    printf("\t\t\t Press 3 to exit the program.\n\n");
    printf("\t\t\t enter your options: ");
    scanf("%d", &men_var);

    switch(men_var)
  {
    case 1: ///read
        {
//printf("test1");
            #define MAXCHAR 1000
            char c[10000];
            FILE *fp;
    char str[MAXCHAR];
    char* filename = "Trafficdata.txt";

    fp = fopen("Trafficdata.txt", "r");
    if (fp == NULL)
        {
        printf("\n\n\tCould not open file %s",filename);
        }
    else
        printf("\n\n");
    while (fgets(c,10000,fp))
        {
            printf("%s",c);
        }
    fclose(fp);

     int desi;
    printf("\n\n\n\t\treturn to menu?\n");
    printf("\t\tpress 1 for yes and 0 to terminate.");
    scanf("%d",&desi);
    if (desi==1)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
        menu();
    }
    else
    {
        system("taskkill/IM cb_console_runner.exe");
    }
            break;
        }

    case 2:
        {
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
            menu();
            break;
        }
    case 3:
        {
            system("taskkill/IM cb_console_runner.exe");
        }
  }

}


void am_pm(int time)
{
     int x,y,result;

 x=time%100;
 //printf("%d\n", x);

 if(x>=60)
 {
    y=x-60;
    //printf("%d\n",y);

    result= time-x+100+y;
    printf("\n\tEstimate Time Of Arrival: %d", result);

 }
 else
    printf("\n\tEstimate Time Of Arrival: %d", time);
}

