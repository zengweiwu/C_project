void aver_sort(struct student  p[]){int j,k,index,b[100];
	for(j=0;j<i-1;j++)
		p[j].avre=(float)(p[j].c+p[j].m+p[j].e)/3.0;
	for(j=0;j<i-1;j++){
	index=j;
	for(k=j+1;k<i;k++)
		if(p[index].avre<p[k].avre)
		index=k;
		t=p[j];p[j]=p[index];p[index]=t;
	}for(j=0;j<i-1;j++)
	b[j]=j+1;
	for(j=0;j<i-1;j++)
	if(p[j].avre==p[j+1].avre)
	for(k=j+1;k<i;k++)
	b[k]=k;
	printf("  学号     姓名      语文       数学       英语   平均分  名次\n");
	for(j=0;j<i-1;j++)
	{printf("%ld",p[j].num);
	dw(11,j+1);
	printf("%s",p[j].name);
	dw(22,j+1);
	printf("%d",p[j].c);
	dw(33,j+1);
	printf("%d",p[j].m);
	dw(44,j+1);
	printf("%d",p[j].e);
	dw(50,j+1);
	printf("%.2f",p[j].avre);
	dw(59,j+1);
	printf("%d\n",b[j]);
	}
	printf("\n\n\n");
	
	
	
}
