void put(struct student pa[]){
	int j;
	printf("  学号     姓名      语文       数学       英语\n");
	for(j=0;j<i-1;j++)
	{
	printf("%ld",p[j].num);
	dw(11,j+1);
	printf("%s",p[j].name);
	dw(22,j+1);
	printf("%d",p[j].c);
	dw(33,j+1);
	printf("%d",p[j].m);
	dw(44,j+1);
	printf("%d\n",p[j].e);
	}
	printf("\n\n\n\n");
}
