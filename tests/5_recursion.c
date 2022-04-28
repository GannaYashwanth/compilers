
int fibo(int a)
{
  if (a < 0)
  {
    println(`Enter a non - negative number, quitting !`);
    return 0 - 1;
  }

  if (a <= 1)
    return a;

  return fibo(a - 1) + fibo(a - 2);
}

void main()
{
  int a;
  print(`Enter a number
        : `);
  scan(a);
  // print(a);
  println(`Fibo of `, a, `is
          : `, fibo(a));
}