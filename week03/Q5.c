char ch; int num;

scanf("%c", &ch);
if (('0'<=ch) && (ch<='9')) {
	num=ch-'0';
	printf("Twice input is %d \n", 2*num);
}
else
	printf("Input is not a digit! \n");