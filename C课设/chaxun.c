void search(struct student p[]){
	char ch[15];
	int choice;
	long stnum;
	printf("ѧ���������ҡ�1��ѧ�Ų��ҡ�2���˳���0��\n");
	scanf("%d",&choice);
	
	while(choice!=0){
	switch(choice){
		case 1:system("cls");printf("����ѧ������:");scanf("%s",ch);xmcx(ch);break;
		case 2:system("cls");printf("����ѧ��ѧ��:");scanf("%ld",&stnum);xhcx(stnum);break;
		default:printf("����������");
	}
	system("pause");
	system("cls");
	printf("ѧ���������ҡ�1��ѧ�Ų��ҡ�2���˳���0��\n");
	scanf("%d",&choice);}
	
}
