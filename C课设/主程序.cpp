#include "student.h"
#include "xmcx.c"
#include "xhcx.c"
#include "chaxun.c"
#include "fenmian.c"
#include "suchu.c"
#include "dr.c"
#include "paisu.c"
#include "corret.c"
int main(){
int choice; 
char ch,pa[15],pb[15],pc[15]="1",pd[15]="1";
int a=1,b=1,i=3;
system("color 0D");
printf("进入请按 [1]\n按任意键退出\n");
printf("[ ]");
dw(1,2);
ch=getchar();
system("cls");
if(ch=='1'){while(a!=0||b!=0)
{
system("cls");

printf("您还有%d次机会（以防恶意盗刷）\n",i);
printf("账号:\n");
printf("密码:");
dw(6,1);
scanf("%s",pa);
dw(6,2);
scanf("%s",pb);
a=strcmp(pa,pc);
b=strcmp(pb,pd);
if(a!=0||b!=0)
{system("cls");

printf("账号或密码错误!\n继续请按 [1]\n按任意键退出\n");
i--; 
while(i==0){
system("cls");

printf("\n\n\n\n                             系统锁定!\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
system("pause");}
scanf("%c",&ch);
printf("[ ]");
dw(1,3);
scanf("%c",&ch);
if(ch!='1'){system("cls");
	
printf("\n\n\n\n                            成功退出!\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
return 0;}}}
print();
dw(19,14);
scanf("%d",&choice);
while(choice!=4){
    switch(choice){
    case 0:dr(p);system("cls");put(p);break;
    case 1:dr(p);system("cls");aver_sort(p);break;
    case 2:dr(p);system("cls");xg(p);break;
    case 3:dr(p);system("cls");search(p);break;
default:system("cls");printf("\n\n\n\n                                   请重新输入\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");}
system("pause");
print();
dw(19,14);
scanf("%d",&choice);
}
system("cls");
printf("\n\n\n\n                           成功退出，谢谢使用！\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
return 0;
}
else
{system("cls");
printf("\n\n\n\n                           成功退出，谢谢使用！\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
return 0;}}
void dw(int a,int b)   
{HANDLE hOut;
COORD pos={a,b};  
hOut=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hOut,pos);}	

