void xg(struct student p[]){
	FILE *fp1;
	int j,y,s,e,flag=0;
	long stnum;
	printf("请输入需要修改成绩的学生学号:");
	scanf("%ld",&stnum);
	system("cls");
	for(j=0;j<i-1;j++)
	if(stnum==p[j].num)
	{printf("请输入学生成绩\n语文:\n数学:\n英语:\n");
	dw(5,1);
	scanf("%d",&y);
	dw(5,2);
	scanf("%d",&s);
	dw(5,3);
	scanf("%d",&e);
	p[j].c=y;p[j].m=s;p[j].e=e;
	flag=1;
	}
	if(flag==0)
	printf("\n\n\n                                   没发现！\n\n\n");
	else
	{
	fp1=fopen("wenjian.txt","w");
	if(fp1==NULL){
		printf("open file error");
		exit(0);
	}
	for(j=0;j<i-1;j++)
	fprintf(fp1,"%ld %s %d %d %d\n",p[j].num,p[j].name,p[j].c,p[j].m,p[j].e);
	fclose(fp1);
	system("cls");
	printf("\n\n\n\n                                  修改成功！\n\n");}
}
