# include <stdio.h>

int main()
{
	int type;
	scanf("%d",&type);
	
	switch ( type ) {
	case 1:
		printf("���Ϻ�");
		break;
	case 2: 
		printf("�����");
		break;
	case 3:
		printf("���Ϻ�");
		break;
	default:
		printf("what");
		break; 
	}
	return 0;
}
