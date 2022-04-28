
void func1(int a)
{
	println(`In func1, a: `, a);
	println();
}

void func2(int a, int b, int c)
{
	println(`In func1, a: `, a, b, c);
	println();
}

void func3(int a, int b, int c, int d, int e,int f, int g, int h, int i, int j)
{
	println(`In func1, a: `, a, b, c, d, e, f, g, h, i, j);
	println();
}

int func4(int a, int b)
{
	// return;
	return a+b;
}

void main()
{
	func1(1);
	func2(1, 2, 3);
	func3(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

	int a,b,c;
	a = b = 4;
	if(func4(a, b) == 8)
	{
		c = 2 + func4(a, b);
	}

}


