#include<stdio.h>
#include<windows.h>
int main()
{
    int i,j,k=3,kp,a[3][3],x=0,y=0,bckup,*p,cnt=0;
    p=a;
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]=32;
        }
    }
    a[0][0]=32;
    printf("\n\nTic Tac Toe\nControl 'x' 'o' 'up' 'down' 'left' 'right'\n\nPress any key to start");
            getch();
    while(1){



            system("cls");

//                if ((*p==*(p+1))&&(*p==*(p+2))&&(*p=='x')) {k=1; break;}
//    if ((*(p+3)==*(p+4))&&(*(p+3)==*(p+5))&&(*(p+3)=='x')) {k=1; break;}
//  if ((*(p+6)==*(p+7))&&(*(p+6)==*(p+8))&&(*(p+6)=='x')) {k=1; break;}
//      if ((*p==*(p+3))&&(*p==*(p+6))&&(*p=='x')) {k=1; break;}
//    if ((*(p+1)==*(p+4))&&(*(p+1)==*(p+7))&&(*(p+1)=='x')) {k=1; break;}
//  if ((*(p+2)==*(p+5))&&(*(p+6)==*(p+8))&&(*(p+6)=='x')) {k=1; break;}
//  if ((*(p+0)==*(p+4))&&(*(p+0)==*(p+8))&&(*(p)=='x')) {k=1; break;}
//  if ((*(p+2)==*(p+4))&&(*(p+2)==*(p+6))&&(*(p+2)=='x')) {k=1; break;}
//
//
//
//
//    if ((*p==*(p+1))&&(*p==*(p+2))&&(*p=='o')) {k=2; break;}
//    if ((*(p+3)==*(p+4))&&(*(p+3)==*(p+5))&&(*(p+3)=='o')) {k=2; break;}
//  if ((*(p+6)==*(p+7))&&(*(p+6)==*(p+8))&&(*(p+6)=='o')) {k=2; break;}
//      if ((*p==*(p+3))&&(*p==*(p+6))&&(*p=='o')) {k=2; break;}
//    if ((*(p+1)==*(p+4))&&(*(p+1)==*(p+7))&&(*(p+1)=='o')) {k=2; break;}
//  if ((*(p+2)==*(p+5))&&(*(p+6)==*(p+8))&&(*(p+6)=='o')) {k=2; break;}
//  if ((*(p+0)==*(p+4))&&(*(p+0)==*(p+8))&&(*(p)=='o')) {k=2; break;}
//  if ((*(p+2)==*(p+4))&&(*(p+2)==*(p+6))&&(*(p+2)=='o')) {k=2; break;}

        for (i=0;i<3;i++)
    {
         printf("\n-------\n|");
        for(j=0;j<3;j++)
        {
            printf("%c|",a[i][j]);
        }

    }
  printf("\n--------");
    fflush(stdin);
    ///for(;kp>0;)
    kp=getch();
  ///  if (kp!='x'||kp!='o')

    if (a[x][y]=='_') a[x][y]=' ';

        if (kp==80&&x<2) {x++; if (a[x][y]!=' ') continue; else a[x][y]='_'; }
    else if (kp==72&&x>0) {x--; if (a[x][y]!=' ') continue; else a[x][y]='_'; }
    else if (kp==77&&y<2) {y++; if (a[x][y]!=' ') continue; else a[x][y]='_'; }
    else if (kp==75&&y>0) {y--; if (a[x][y]!=' ') continue; else a[x][y]='_'; }
    else if(kp=='x')    { a[x][y]='x';cnt++;}///continue;}
    else if (kp=='o') { a[x][y]='o';cnt++;}///continue;}
    if (a[x][y]=='x') bckup='x';
    else if (a[x][y]=='o') bckup='o';
    else bckup= '_' ;



    if ((*p==*(p+1))&&(*p==*(p+2))&&(*p=='x')) {k=1; break;}
    if ((*(p+3)==*(p+4))&&(*(p+3)==*(p+5))&&(*(p+3)=='x')) {k=1; break;}
  if ((*(p+6)==*(p+7))&&(*(p+6)==*(p+8))&&(*(p+6)=='x')) {k=1; break;}
      if ((*p==*(p+3))&&(*p==*(p+6))&&(*p=='x')) {k=1; break;}
    if ((*(p+1)==*(p+4))&&(*(p+1)==*(p+7))&&(*(p+1)=='x')) {k=1; break;}
  if ((*(p+2)==*(p+5))&&(*(p+6)==*(p+8))&&(*(p+6)=='x')) {k=1; break;}
  if ((*(p+0)==*(p+4))&&(*(p+0)==*(p+8))&&(*(p)=='x')) {k=1; break;}
  if ((*(p+2)==*(p+4))&&(*(p+2)==*(p+6))&&(*(p+2)=='x')) {k=1; break;}



    if ((*p==*(p+1))&&(*p==*(p+2))&&(*p=='o')) {k=2; break;}
    if ((*(p+3)==*(p+4))&&(*(p+3)==*(p+5))&&(*(p+3)=='o')) {k=2; break;}
  if ((*(p+6)==*(p+7))&&(*(p+6)==*(p+8))&&(*(p+6)=='o')) {k=2; break;}
      if ((*p==*(p+3))&&(*p==*(p+6))&&(*p=='o')) {k=2; break;}
    if ((*(p+1)==*(p+4))&&(*(p+1)==*(p+7))&&(*(p+1)=='o')) {k=2; break;}
  if ((*(p+2)==*(p+5))&&(*(p+6)==*(p+8))&&(*(p+6)=='o')) {k=2; break;}
  if ((*(p+0)==*(p+4))&&(*(p+0)==*(p+8))&&(*(p)=='o')) {k=2; break;}
  if ((*(p+2)==*(p+4))&&(*(p+2)==*(p+6))&&(*(p+2)=='o')) {k=2; break;}


if (cnt==9) break;





    }
    system("cls");
    if (k==3) {printf("\nDraw\nLabnan thanks for testing\nPress any key to quit"); getch();return 0;}
    if (k==1)printf("\nThe player who is using 'x' wins\n\nLabnan thanks you for testing\nPress any key to quit",k);
    if (k==2)printf("\nThe player who is using 'o' wins\n\nLabnan thanks you for testing\nPress any key to quit",k);
getch();
}
