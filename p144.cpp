#include <stdio.h>

main()
{
	int n, sum = 0;
	printf("�������� DNA ������ �Է��ϼ���.  : ");
	scanf("%d", &n);
	while(n!=0)
	{
		sum += n % 10;
		n = n % 10;
	 } 
	 if(sum % 7 == 4)
	 	printf("����\n");
	else 
		printf("�Ϲ���\n");
		return 0;
}
