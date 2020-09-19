void search(struct student p[]){
	char ch[15];
	int choice;
	long stnum;
	printf("学生姓名查找【1】学号查找【2】退出【0】\n");
	scanf("%d",&choice);
	
	while(choice!=0){
	switch(choice){
		case 1:system("cls");printf("输入学生姓名:");scanf("%s",ch);xmcx(ch);break;
		case 2:system("cls");printf("输入学生学号:");scanf("%ld",&stnum);xhcx(stnum);break;
		default:printf("请重新输入");
	}
	system("pause");
	system("cls");
	printf("学生姓名查找【1】学号查找【2】退出【0】\n");
	scanf("%d",&choice);}
	
}
