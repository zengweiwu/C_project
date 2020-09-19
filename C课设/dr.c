void dr(struct student p[]) {i=0;
	FILE *fp; 
	if((fp=fopen("wenjian.txt","r"))==NULL){
		printf("open error");
		exit(0);
	}
	printf("  学号     姓名      语文       数学       英语\n");
	while(!feof(fp)){
	fscanf(fp,"%ld%s%d%d%d",&p[i].num,p[i].name,&p[i].c,&p[i].m,&p[i].e);
		i++;
	}
	fclose(fp);
	
}
