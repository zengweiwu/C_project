void xmcx(char ch[]){
	system("cls");
	int j,flag=0;
	for(j=0;j<i-1;j++)
	if(strcmp(ch,p[j].name)==0)
	{printf("  ѧ��     ����   ����   ��ѧ  Ӣ��\n");
	      printf("%ld    %s    %d     %d    %d\n\n\n",p[j].num,p[j].name,p[j].c,p[j].m,p[j].e);
	flag=1;}
	
	if(flag==0){
	system("cls");
	printf("                   û�з���\n\n\n\n\n");}

}
