void main()
{
	printf("请输入5个整数：\n");
	int a[5], i, j, k;
	for (i = 0; i < 5; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	for (i=0; i < 2; i++)
	{
		j = 4 - i;
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
	printf("逆序后为：\n");
	for (i = 0; i < 5; i++)
		printf("%4d", a[i]);
	printf("\n");
}
