
void main()
{
	int i;

	// this works similar to c, if we have a single statement inside a for loop
	for(i=0 ; i<5; i++)
		print(i, ` `);

	println();
	i=0;
	// can't give an expression like i-- inside the () of while
	while(i>=0 && i<=6)
	{
		print(i, ` `);
		if(i==1)
		break;
		else i--;
	}

	i=5;
	do{
		i = i-1;
		print(i, ` `);
	} while(i>=0);

	

}
