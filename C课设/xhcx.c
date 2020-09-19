void xhcx(long stnum){
    system("cls");
	int j;
	for(j=0;j<i-1;j++)
	if(stnum==p[j].num)
	  {
	     printf("  学号     姓名   语文   数学  英语\n");
	      printf("%ld    %s    %d     %d    %d\n\n\n",p[j].num,p[j].name,p[j].c,p[j].m,p[j].e);
    	break;
	  }
	
	if(!(j<i-1))
	{system("cls");
	printf("                    没有发现\n\n\n\n\n");}
}
