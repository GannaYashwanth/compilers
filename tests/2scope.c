
int a=0;

void main()
{
    println(`value of a at scope 1 is: `, a);
    {
        println(`value of a at scope 2 is: `, a);
        int a=2;
        println(`value of a at scope 2 is: `, a);
        {
            int a=3;
            {
                int a=4;
                println(`value of a at scope 4 is: `, a);
                {
                    a++;
                    println(`value of a at scope 5 is: `, a);
                    {
                       /* int a;
                        {
                            int a;
                            {
                                int a;
                                {
                                    int a;
                                    {
                                        int a;
                                        {
                                            int a;
                                            {

                                            }
                                        }
                                    }
                                }
                            }
                        }*/
                    }
                }
                println(`value of a at scope 4 is: `, a);
            }
            println(`value of a at scope 3 is: `, a);
        }
    }

    println(`value of a at scope 1 is: `, a);
}