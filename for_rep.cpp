#include<stdio.h>
int main()
{
	int i,j,tot_rep,rep;
	char ch;
	
	printf("�ݺ��� Ƚ�� �Է�:");
	scanf("%d",&tot_rep);
	for(i=0;i<tot_rep;i++)
	{
		printf("���ڿ� Ƚ�� �Է�");
		scanf(" %c %d",&ch,&rep);
		j=0;
		while(j<rep){
			printf("%c",ch);
			j++;
		}
		printf("\n");
	}
}
