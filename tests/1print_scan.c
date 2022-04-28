
void main()
{
   println(`This is a live demonstration of our compiler`); 
   println();

   int a=1, b, c=(b+2)*3;
   println(`a is: `, a, `b is: `, b, `c is: `, c, `(a+2)/4 is: `, (a+2)/4);

   print(`Enter a number: `);
   scan(a);
   char d;
   print(`Enter a character: `);
   scan(d);
   println(`a is: `, a, `d is: `, d);
}
