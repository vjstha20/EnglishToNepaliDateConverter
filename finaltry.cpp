
 #include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h> /* TO CALL SYSTEM TIME*/
#include<windows.h> /*TO USE GOTOXY THROUGH WINDOWS.H*/
void bstoad(void);
void adtobs(void);
void time(void);
void exit(void);
void main2();/*similar to the main function but not animation*/
void leftrect(void);
void rightrect(void);
void loop1(void);
void loop2(void);
int leap(int iey);
//Defines gotoxy() for ANSI C compilers.
void gotoxy(short x, short y) {
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int main(void)
{
	system("cls");
		int i;
		char wlc[50]=" WELCOME TO DATE CONVERTER ";
gotoxy(6,2);
for(i=0;i<20;i++)
{
 Sleep(100);
printf("\3");
}
for(i=0;i<27;i++)
{
Sleep(50);
	printf("%c",wlc[i]);
}
for(i=0;i<20;i++)
{
 Sleep(100);
printf("\3");
}
l:
gotoxy(6,6);
/*making horizontal line from x=6 & y=6*/
/* here \xb2 is the hex characters*/
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
gotoxy(6,7);
printf("\xb2\xb2");   /*making vertical line from x=6 & y=7*/
gotoxy(6,8);
printf("\t   1. BS TO AD");
gotoxy(6,8);
printf("\xb2\xb2");
gotoxy(6,9);
printf("\xb2\xb2");
gotoxy(6,10);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
gotoxy(27,7);/* making another vertical line */
printf("\xb2\xb2");
gotoxy(27,8);
printf("\xb2\xb2");
gotoxy(27,9);
printf("\xb2\xb2");
/*for another right rectangular box at x=32 & y=6*/
gotoxy(45,6);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
gotoxy(45,7);
printf("\xb2\xb2");
gotoxy(45,8);
printf("\t   2. AD TO BS");
gotoxy(45,8);
printf("\xb2\xb2");
gotoxy(45,9);
printf("\xb2\xb2");
gotoxy(45,10);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
gotoxy(66,7);
printf("\xb2\xb2");
gotoxy(66,8);
printf("\xb2\xb2");
gotoxy(66,9);
printf("\xb2\xb2");
/*for third middle box*/
gotoxy(29,11);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
gotoxy(29,12);
printf("\xb2\xb2");
gotoxy(29,13);
printf("\t 3. EXIT");
gotoxy(29,13);
printf("\xb2\xb2");
gotoxy(29,14);
printf("\xb2\xb2");
gotoxy(29,15);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
gotoxy(43,12);
printf("\xb2\xb2");
gotoxy(43,13);
printf("\xb2\xb2");
gotoxy(43,14);
printf("\xb2\xb2");
gotoxy(20,17);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
gotoxy(20,19);
printf("Enter your choice");
gotoxy(6,22);
time();	/* calling time function*/
gotoxy(38,19);
switch(getch())
{
	case '1':
		bstoad();
		break;
		case '2':
			adtobs();
			break;
			case '3':
				exit();
				break;
				default:
					system("cls");
			gotoxy(6,6);
				printf("\aInvalid Input!!!\n\n");
				printf("\tPlease Enter 1,2 or 3. Starting the main module in 5 seconds>>>>");
Sleep(5000);
system("cls");
goto l;
				
}

}
void bstoad(void)
{
	int sny=2000,snm=1,snd=1,sey=1943,sem=4,sed=14,i,j,k,totaldayscount=0,nepyear,nepmonth,nepday,nepdiff,months,iey,iem,ied,endday=0,l,day=1;
/*months of nepali year from 2000 to 2090*/
int nepdays[]={30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,31,32,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,31,29,30,30,29,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,31,32,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,31,29,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,31,32,32,31,30,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30,31,31,32,31,31,30,30,30,29,30,30,30,31,31,32,31,31,30,30,30,29,30,30,30,31,32,31,32,30,31,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30,31,31,32,31,31,31,30,30,29,30,30,30,30,31,32,32,30,31,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30};
int monthsofengyear[]={0,31,28,31,30,31,30,31,31,30,31,30,31 };/*months of english year*/
int monthsofengleapyear[]={0,31,29,31,30,31,30,31,31,30,31,30,31 };/*months of english leap year*/
system("cls");/*stops overlapping of boxes while giving input in main menu*/
gotoxy(6,22);/* positioning time function at 6,22)*/
time();
gotoxy(30,2);
printf("BS TO AD Converter");
/* displaying input info inside the rectangular box*/
gotoxy(6,5);
printf("Enter the Nepali Date in BS:\n");
leftrect();/* calling drawing function*/
gotoxy(6,8);
printf("\t Enter the Year");
gotoxy(6,8);
printf("\xb2\xb2");
gotoxy(24,8);   /*moving cursor to the input point*/

scanf("%d",&nepyear);
if(nepyear<2000||nepyear>2090)
{
	system("cls");
	printf("\a\n\n\n\n\n\n\n\n\n\n\n\t*_* GIGO!!! THIS CONVERTER SUPPORTS THE YEAR FROM 2000 BS-2090 BS *_*\n");
	printf("\n\n\n\n\n\n\n\tStarting BS TO AD Converter in 5 seconds.....");
	Sleep(5000);
	bstoad();
}
gotoxy(6,10);
printf("\t Enter the Month");
gotoxy(6,10);
printf("\xb2\xb2");
gotoxy(25,10);
scanf("%d",&nepmonth);
if(nepmonth<=0||nepmonth>=13)
{
	system("cls");
	printf("\a\n\n\n\n\n\n\n\n\n\n\n\t*_* Sorry! There are only 12 months in a year *_*\n");
	printf("\n\n\n\n\n\n\n\tStarting BS TO AD Converter in 5 seconds.....");
	Sleep(5000);
	bstoad();
}
gotoxy(6,12);
printf("\t Enter the Day");
gotoxy(6,12);
printf("\xb2\xb2");
gotoxy(24,12);
scanf("%d",&nepday);
if(nepday<=0||nepday>=33)
{
	system("cls");
	printf("\a\n\n\n\n\n\n\n\n\n\n\n\t*_* Sorry! You have entered invalid number of days *_*\n");
	printf("\n\n\n\n\n\n\n\tStarting BS TO AD Converter in 5 seconds.....");
	Sleep(5000);
	bstoad();
}
/*calculating the no of days between two nepali years*/
nepdiff=nepyear-sny;
if(nepdiff==0)/*when the entered day is equal to the starting limit of the array*/
{for(k=0;k<(nepmonth-1);k++)
{totaldayscount+=nepdays[k];
}
totaldayscount+=nepday-snd;
}
else
{
months=(nepdiff)*12;
for(i=0;i<months;i++)
{
	totaldayscount+=nepdays[i];


}
for(j=i;j<(i+(nepmonth-1));j++)/*here nepmonth is -1 because we need not to add complete month eg if it is ashar 20 the entire day of ashar is not added infact only days upto ashar 20 is added*/
{/*adding the remaining months to the totaldayscount*/
totaldayscount+=nepdays[j];
}
totaldayscount+=nepday-snd;/*here subtracting the snd bcoz it is already added at the beginning of the counting*/

}

/*FINDING EQUIVALENT ENGLISH DATE*/
iey=sey;/*assigning sey sem and sed to different variables because we need to alter the value of sey sem and sed in further programming*/
iem=sem;
ied=sed;
while(totaldayscount!=0)
{
	l=leap(iey);
	if(l==1)
	{
	endday=monthsofengleapyear[iem];}
	else
	{
	endday=monthsofengyear[iem];
	}
	ied++;
	day++;     /*day is initialized as 1*/
	if(ied>endday)
	{iem++;
	ied=1;                /*here dropping the value of ied to 1 because it is the start of new month and we count from 1*/
	if(iem>12)
	{iey++;
	iem=1;                 /* here dropping the value of iem to 1 because it is the start of new year and we start counting from 1 of first month*/
	}
	}
		if(day>7)
		{day=1;
		}
	totaldayscount--;
}
gotoxy(44,5);
printf("The Converted Date in AD:");
/* declaration of the day of week since the starting date is from wednesday we define 1 as wednesday*/
    rightrect();
    gotoxy(48,12);/* moving cursor behind the point where day is printed*/
    if(day==1)
	printf("\tWednesday");
	if(day==2)
	printf("\tThursday");
	if(day==3)
	printf("\tFriday");
	if(day==4)
	printf("\tSaturday");
	if(day==5)
	printf("\tSunday");
	if(day==6)
	printf("\tMonday");
	if(day==7)
	printf("\tTuesday");
	/* printing months in letters */
	gotoxy(48,10);
	if(iem==1)
	printf("\tJanuary");
	if(iem==2)
	printf("\tFebruary");
	if(iem==3)
	printf("\tMarch");
	if(iem==4)
	printf("\tApril");
	if(iem==5)
	printf("\tMay");
	if(iem==6)
	printf("\tJune");
	if(iem==7)
	printf("\tJuly");
	if(iem==8)
	printf("\tAugust");
	if(iem==9)
	printf("\tSeptember");
	if(iem==10)
	printf("\t October");
	if(iem==11)
	printf("\t November");
	if(iem==12)
	printf("\t December");
	gotoxy(43,8);
printf("\tYear:%d AD",iey);
gotoxy(43,8);
printf("\xb2\xb2");
gotoxy(43,10);
printf("\tMonth:%d,",iem);
gotoxy(43,10);
printf("\xb2\xb2");
gotoxy(43,12);
printf("\tDay:%d,",ied);
gotoxy(43,12);
printf("\xb2\xb2");
gotoxy(20,18);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
gotoxy(20,20);
loop1();/* intialing loop*/
getch();
}
void adtobs(void)
{
		int sey=1943,sem=4,sed=14,engmonth,engyear,totaldayscount=0,months,k,engdiff,i,j,nepdiff,engday,sny=2000,snm=1,snd=1,iny,inm,ind,endday=0,var=1,day=1;
	
	/* data of english year's months arranged according to leap and not leap from 1943-2033 AD*/
int engdays[]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
int nepdays[]={0,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,31,32,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,31,29,30,30,29,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,31,32,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,31,29,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,31,32,32,31,30,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30,31,31,32,31,31,30,30,30,29,30,30,30,31,31,32,31,31,30,30,30,29,30,30,30,31,32,31,32,30,31,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30,31,31,32,31,31,31,30,30,29,30,30,30,30,31,32,32,30,31,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30};
system("cls");
gotoxy(6,22);
time();
gotoxy(30,2);
printf("AD TO BS Converter");
gotoxy(6,5);
printf("Enter the English Date in AD:");
leftrect();
gotoxy(6,8);
printf("\t Enter the year");
gotoxy(6,8);
printf("\xb2\xb2");
gotoxy(24,8);
scanf("%d",&engyear);
if(engyear<1943||engyear>2033)
{	system("cls");
	printf("\a\n\n\n\n\n\n\n\n\n\n\n\t*_* GIGO!!! THIS CONVERTER SUPPORTS THE YEAR FROM 1943 AD-2033 AD *_*\n");
	printf("\n\n\n\n\n\n\n\tStarting AD TO BS Converter in 5 seconds.....");
	Sleep(5000);
	adtobs();
}
gotoxy(6,10);
printf("\t Enter the Month");
gotoxy(6,10);
printf("\xb2\xb2");
gotoxy(25,10);
scanf("%d",&engmonth);
if(engmonth<=0||engmonth>=13)
{
	system("cls");
	printf("\a\n\n\n\n\n\n\n\n\n\n\n\t*_* Sorry invalid input! There are only 12 months in a year *_*\n");
	printf("\n\n\n\n\n\n\n\tStarting AD TO BS Converter in 5 seconds.....");
	Sleep(5000);
	adtobs();
}
gotoxy(6,12);
printf("\t Enter the Day");
gotoxy(6,12);
printf("\xb2\xb2");
gotoxy(24,12);
scanf("%d",&engday);
if(engday<=0||engday>=33)
{
	system("cls");
	printf("\a\n\n\n\n\n\n\n\n\n\n\n\t*_* Sorry! You have entered invalid number of days *_*\n");
	printf("\n\n\n\n\n\n\n\tStarting AD TO BS Converter in 5 seconds.....");
	Sleep(5000);
	adtobs();
}
engdiff=engyear-sey;
if(engdiff==0)/*when the entered day is equal to the starting element of the array*/
{for(k=3;k<(engmonth-1);k++)/*here starting with bcoz we have starting month 4 */
{totaldayscount+=engdays[k];
}

totaldayscount+=engday-sed;
}

else
{
months=(engdiff)*12;
for(i=3;i<months;i++)/*here initializing i=3 because we have starting english month 4 */
{
	totaldayscount+=engdays[i];


}
for(j=i;j<(i+(engmonth-1));j++)/*here engmonth is -1 because we need not to add complete month eg if it is july 4 the entire day of july is not added infact only days upto july 4 is added*/
{/*adding the remaining months to the totaldayscount*/
totaldayscount+=engdays[j];
}
totaldayscount+=engday-sed;/*here subtracting the sed bcoz it is already added at the beginning of the counting*/

}

/*printf("the days count is :%d\n",totaldayscount);  delete it at the end of the program */
/*FINDING EQUIVALENT NEPALI YEARS*/	

iny=sny;
inm=snm;
ind=snd;
while(totaldayscount!=0)
{
	endday=nepdays[var];
	ind++;
	day++;
	if(ind>endday)
	{var++;/* here we have used var to call the elements of array because at the end we have used inm=1 which may cause malfunction of the converter*/
	inm++;
	ind=1;
	if(inm>12)
	{iny++;
	
	inm=1;
	}
	}
		if(day>7)
		{day=1;
		}
	totaldayscount--;
	
}
gotoxy(43,5);
printf("The Converterd Date in BS:");
rightrect();
gotoxy(48,12);
	if(day==1)
	printf("\tBudhabar");
	if(day==2)
	printf("\tBihibar");
	if(day==3)
	printf("\tSukrabar");
	if(day==4)
	printf("\tSanibar");
	if(day==5)
	printf("\tAeetabar");
	if(day==6)
	printf("\tSombar");
	if(day==7)
	printf("\tMangalbar");
	/*to print the months in alphabet*/
		gotoxy(49,10);
	if(inm==1)
	printf("\t Baishak");
	if(inm==2)
	printf("\t Jestha");
	if(inm==3)
	printf("\t Ashar");
	if(inm==4)
	printf("\t Shrawan");
	if(inm==5)
	printf("\t Bhadau");
	if(inm==6)
	printf("\t Asoj");
	if(inm==7)
	printf("\t Kartik");
	if(inm==8)
	printf("\t Mangsir");
	if(inm==9)
	printf("\t Poush");
	if(inm==10)
	printf("\t  Magh");
	if(inm==11)
	printf("\t  Falgun");
	if(inm==12)
	printf("\t  Chaitra");
gotoxy(43,8);
printf("\t Year: %d AD",iny);
gotoxy(43,8);
printf("\xb2\xb2");
gotoxy(43,10);
printf("\t Month:%d,",inm);
gotoxy(43,10);
printf("\xb2\xb2");
gotoxy(43,12);
printf("\t Day:%d,",ind);
gotoxy(43,12);
printf("\xb2\xb2");
gotoxy(20,18);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
gotoxy(20,20);
loop2();
getch();
}
int leap(int iey)/* function to check leap or not */
{
	int l;
		if(((iey%4==0)&&(iey%100!=0))||(iey%400==0))
		l=1;
		else
		l=0;
	return l;
}
void exit(void)
{
	int i;
	char thanks[1000]="Thanks for using Date Converter !!!";
	char d[100]="Developed By:";
	char v[100]="VIJAY SHRESTHA";
	system("cls");
	gotoxy(23,5);

	for(i=0;i<45;i++)
	{	Sleep(50);
	printf("%c",thanks[i]);
	}
	gotoxy(23,6);
	for(i=0;i<31;i++)
	{	Sleep(50);
	printf("%c",d[i]);
	}
	gotoxy(30,7);
	for(i=0;i<16;i++)
	{ Sleep(40);
	
	printf("%c",v[i]);
}

gotoxy(30,13);
printf("Exiting in 5 seconds......>>>>>>>>");
Sleep(5000);
printf("\a");/*making a alert sound*/
exit(0);

	}

void time(void)/* time function*/
{
	time_t t;
time(&t);
printf("Current Date and time:%s\n",ctime(&t));


}

void leftrect(void)
{
		gotoxy(6,6);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
gotoxy(6,7);
printf("\xb2\xb2");   /*making vertical line from x=6 & y=7*/
gotoxy(6,8);/* put the info at gotoxy(6,8)*/
printf("\xb2\xb2");
gotoxy(6,9);
printf("\xb2\xb2");
gotoxy(6,10);/* another input here*/
printf("\xb2\xb2");
gotoxy(6,11);
printf("\xb2\xb2");
gotoxy(6,12);/* third input info here*/
printf("\xb2\xb2");
gotoxy(6,13);
printf("\xb2\xb2");
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
gotoxy(37,7);/* making another vertical line */
printf("\xb2\xb2");
gotoxy(37,8);
printf("\xb2\xb2");
gotoxy(37,9);
printf("\xb2\xb2");
gotoxy(37,10);
printf("\xb2\xb2");
gotoxy(37,11);
printf("\xb2\xb2");
gotoxy(37,12);
printf("\xb2\xb2");
gotoxy(37,13);
printf("\xb2\xb2");
}
void rightrect(void)
{
		gotoxy(43,6);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
gotoxy(43,7);
printf("\xb2\xb2");   /*making vertical line from x=6 & y=7*/
gotoxy(43,8);/* put the info at gotoxy(43,8)*/
printf("\xb2\xb2");
gotoxy(43,9);
printf("\xb2\xb2");
gotoxy(43,10);/* another input here*/
printf("\xb2\xb2");
gotoxy(43,11);
printf("\xb2\xb2");
gotoxy(43,12);/* third input info here*/
printf("\xb2\xb2");
gotoxy(43,13);
printf("\xb2\xb2");
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
gotoxy(76,7);/* making another vertical line */
printf("\xb2\xb2");
gotoxy(76,8);
printf("\xb2\xb2");
gotoxy(76,9);
printf("\xb2\xb2");
gotoxy(76,10);
printf("\xb2\xb2");
gotoxy(76,11);
printf("\xb2\xb2");
gotoxy(76,12);
printf("\xb2\xb2");
gotoxy(76,13);
printf("\xb2\xb2");
}
void loop1(void)
{ 
    int l;
	printf("Press 1 to continue and 2 to go back to main menu... ");
	switch(getch())
	{
		case '1':
			bstoad();
			break;
			case '2':
				main2();
				break;
				default:
				printf("\aInvalid Input!!!");

Sleep(2000);
system("cls");
bstoad();
	}
	
	
}

void loop2(void)
{ 


	printf("Press 1 to continue and 2 to go back to main menu... ");
	switch(getch())
	{
		case '1':
			adtobs();
			break;
			case '2':
				main2();
				break;
				default:
					printf("\aInvalid Input!!!");
					

Sleep(1000);
adtobs();
	}
	
	
}
void main2()
{
	system("cls");
	l:
gotoxy(6,6);
/*making horizontal line from x=6 & y=6*/
/* here \xb2 is the hex characters*/
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
gotoxy(6,7);
printf("\xb2\xb2");   /*making vertical line from x=6 & y=7*/
gotoxy(6,8);
printf("\t   1. BS TO AD");
gotoxy(6,8);
printf("\xb2\xb2");
gotoxy(6,9);
printf("\xb2\xb2");
gotoxy(6,10);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
gotoxy(27,7);/* making another vertical line */
printf("\xb2\xb2");
gotoxy(27,8);
printf("\xb2\xb2");
gotoxy(27,9);
printf("\xb2\xb2");
/*for another right rectangular box at x=32 & y=6*/
gotoxy(45,6);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
gotoxy(45,7);
printf("\xb2\xb2");
gotoxy(45,8);
printf("\t   2. AD TO BS");
gotoxy(45,8);
printf("\xb2\xb2");
gotoxy(45,9);
printf("\xb2\xb2");
gotoxy(45,10);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
gotoxy(66,7);
printf("\xb2\xb2");
gotoxy(66,8);
printf("\xb2\xb2");
gotoxy(66,9);
printf("\xb2\xb2");
/*for third middle box*/
gotoxy(29,11);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
gotoxy(29,12);
printf("\xb2\xb2");
gotoxy(29,13);
printf("\t 3. EXIT");
gotoxy(29,13);
printf("\xb2\xb2");
gotoxy(29,14);
printf("\xb2\xb2");
gotoxy(29,15);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
gotoxy(43,12);
printf("\xb2\xb2");
gotoxy(43,13);
printf("\xb2\xb2");
gotoxy(43,14);
printf("\xb2\xb2");
gotoxy(20,17);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
gotoxy(20,19);
printf("Enter your choice");
gotoxy(6,22);
time();	/* calling time function*/
gotoxy(38,19);
switch(getch())
{
	case '1':
		bstoad();
		break;
		case '2':
			adtobs();
			break;
			case '3':
				exit();
				break;
				default:
					system("cls");
			gotoxy(6,6);
				printf("\aInvalid Input!!!\n\n");
				printf("\tPlease Enter 1,2 or 3. Starting the main module in 5 seconds>>>>");
Sleep(5000);
system("cls");
goto l;
				
}


}




