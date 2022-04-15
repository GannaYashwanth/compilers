%{
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	
	void yyerror(char* s);
	int yylex();
	void ins();
	void insV();
	int flag=0;
	#define ANSI_COLOR_RED		"\x1b[31m"
	#define ANSI_COLOR_GREEN	"\x1b[32m"
	#define ANSI_COLOR_CYAN		"\x1b[36m"
	#define ANSI_COLOR_RESET	"\x1b[0m"
	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];
	extern int currnest;
	extern int yylval;
	void deletedata (int );
	int checkscope(char*);
	int check_id_is_func(char *);
	void insertST(char*, char*);
	void insertSTnest(char*, int);
	void insertSTparamscount(char*, int);
	int getSTparamscount(char*);
	int check_duplicate(char*);
	int check_declaration(char*, char *);
	int check_params(char*);
	int duplicate(char *s);
	int checkarray(char*);
	char currfunctype[100];
	char currfunc[100];
	char currfunccall[100];
	void insertSTF(char*);
	char gettype(char*,int);
	char getfirst(char*);
	void push(char *s);
	void codegen();
	void codeassign();
	char* itoa(int num, char* str, int base);
	void reverse(char str[], int length); 
	void swap(char*,char*);
	void label1();
	void label2();
	void label3();
	void label4();
	void label5();
	void label6();
	void genunary();
	void codegencon();
	void funcgen();
	void funcgenend();
	void arggen();
	void callgen();

	int arr_count=0;
	int arr_size=0;
	int params_count=0;
	int call_params_count=0;
	int top = 0,count=0,ltop=0,lno=0;
	char temp[100] = "t";
	char tempo[100] = "\0";
	char tempo2[100] = "\0";
	char tempo3[100] = "\0";
	char typ;
	int check = 1;
	int chk = 0;
	int tip=3;
%}

%nonassoc IF
%token INT CHAR FLOAT DOUBLE LONG SHORT SIGNED UNSIGNED STRUCT SCAN PRINT PRINTLN
%token RETURN MAIN
%token VOID
%token WHILE FOR DO 
%token BREAK
%token ENDIF


%token identifier array_identifier func_identifier
%token integer_constant string_constant float_constant character_constant

%nonassoc ELSE

%right leftshift_assignment_operator rightshift_assignment_operator
%right XOR_assignment_operator OR_assignment_operator
%right AND_assignment_operator modulo_assignment_operator
%right multiplication_assignment_operator division_assignment_operator
%right addition_assignment_operator subtraction_assignment_operator
%right assignment_operator

%left OR_operator
%left AND_operator
%left pipe_operator
%left caret_operator
%left amp_operator
%left equality_operator inequality_operator
%left lessthan_assignment_operator lessthan_operator greaterthan_assignment_operator greaterthan_operator
%left leftshift_operator rightshift_operator 
%left add_operator subtract_operator
%left multiplication_operator division_operator modulo_operator

%right SIZEOF
%right tilde_operator exclamation_operator
%left increment_operator decrement_operator 


%start program

%%
program
			: declaration_list;

declaration_list
			: declaration D 

D
			: declaration_list
			| ;

declaration
			: variable_declaration 
			| function_declaration

variable_declaration
			: type_specifier variable_declaration_list ';' 

variable_declaration_list
			: variable_declaration_list ',' variable_declaration_identifier | variable_declaration_identifier;

variable_declaration_identifier 
			: identifier {if(duplicate(curid)){printf("Duplicate\n");exit(0);}insertSTnest(curid,currnest); ins();  } vdi   
			  | array_identifier {if(duplicate(curid)){printf("Duplicate\n");exit(0);}insertSTnest(curid,currnest); ins();  } vdi {	// printf("%s  %d\n\n\n", curid, arr_size);

						  insertSTarrSize(curid, arr_size);

							strcpy(temp, "t");
							char buffer[100];
							itoa(count, buffer, 10);
							strcat(temp, buffer);
							count++;
							printf("%s \n", temp);
							printf("%s = %d \n", temp, arr_size);
							printf("%s %s \n", curid, temp);
				}
			
			

vdi : identifier_array_type | assignment_operator simple_expression  ; 

identifier_array_type
			: '[' initilization_params
			| ;

initilization_params
			: integer_constant {arr_size = yylval; } ']' initilization {if($$ < 1) {printf("Wrong array size\n"); exit(0);} }
			| ']' string_initilization;

initilization
			: string_initilization
			| array_initialization
			| ;

type_specifier 
			: INT | CHAR | FLOAT  | DOUBLE  
			| LONG long_grammar 
			| SHORT short_grammar
			| UNSIGNED unsigned_grammar 
			| SIGNED signed_grammar
			| VOID  ;

unsigned_grammar 
			: INT | LONG long_grammar | SHORT short_grammar | ;

signed_grammar 
			: INT | LONG long_grammar | SHORT short_grammar | ;

long_grammar 
			: INT  | ;

short_grammar 
			: INT | ;

function_declaration
			: function_declaration_type function_declaration_param_statement;

function_declaration_type
			: type_specifier identifier '('  { strcpy(currfunctype, curtype); strcpy(currfunc, curid); check_duplicate(curid); insertSTF(curid); ins(); };

function_declaration_param_statement
			: {params_count=0;}params ')' {funcgen();} statement {funcgenend();};

params 
			: parameters_list { insertSTparamscount(currfunc, params_count); }| { insertSTparamscount(currfunc, params_count); };

parameters_list 
			: type_specifier { check_params(curtype);} parameters_identifier_list ;

parameters_identifier_list 
			: param_identifier parameters_identifier_list_breakup;

parameters_identifier_list_breakup
			: ',' parameters_list 
			| ;

param_identifier 
			: identifier { ins();insertSTnest(curid,1); params_count++; } param_identifier_breakup;

param_identifier_breakup
			: '[' ']'
			| ;

statement 
			: expression_statment | compound_statement 
			| conditional_statements | iterative_statements 
			| return_statement | break_statement 
			| variable_declaration | io_statement ;

io_statement:	scan_stmt
						|	print_stmt
						 ;

print_stmt:	PRINTLN '(' print_args ')' {printf("print new line\n");}
			
					| PRINT '(' print_args ')'
					;

print_args:	
		sum_expression ','	{
					printf("print %s %s\n", temp, curid);
		}

		print_args

		|	sum_expression		{ 
				printf("print %s \n", tempo2 );
		 }

		| ;

scan_stmt:	 SCAN '(' mutable ')' {

								//	printf("%c\n\n", typ);
									if(tip == 2)
									{
											if(typ == 'i')
											{
													printf("scan int %s \n", tempo2);
											}
											else if(typ == 'c')
											{
													printf("scan char %s \n", tempo2);
											}
											else if(typ == 'f')
											{
													printf("scan float %s \n", tempo2);
											}
									}
									else if(tip == 1)
									{
										//printf("%s\n", curid);
											if(gettype(tempo2,0) == 'i')
											{
													printf("scan int %s \n", tempo2);
											}
											else if(gettype(tempo2,0) == 'c')
											{
													printf("scan char %s \n", tempo2);
											}
											else if(gettype(tempo2,0) == 'f')
											{
													printf("scan float %s \n", tempo2);
											}
									}
									
									tip = 3;
									cln(tempo2, 100);

							}

compound_statement 
			: {currnest++;} '{'  statment_list  '}' {deletedata(currnest);currnest--;}  ;

statment_list 
			: statement statment_list 
			| ;

expression_statment 
			: expression ';' 
			| ';' ;

conditional_statements 
			: IF '(' simple_expression ')' {label1();if($3!=1){printf("Condition checking is not of type int\n");exit(0);}} statement {label2();}  conditional_statements_breakup;

conditional_statements_breakup
			: ELSE statement {label3();}
			| {label3();};

iterative_statements 
			: WHILE '(' {label4();} simple_expression ')' {label1();if($4!=1){printf("Condition checking is not of type int\n");exit(0);}} statement {label5();} 
			| FOR '(' expression ';' {label4();} simple_expression ';' {label1();if($6!=1){printf("Condition checking is not of type int\n");exit(0);}} expression ')'statement {label5();} 
			| {label4();}DO statement WHILE '(' simple_expression ')'{label1();label5();if($6!=1){printf("Condition checking is not of type int\n");exit(0);}} ';';
return_statement 
			: RETURN ';' {if(strcmp(currfunctype,"void")) {printf("Returning void of a non-void function\n"); exit(0);}}
			| RETURN expression ';' { 	if(!strcmp(currfunctype, "void"))
										{ 
											yyerror("Function is void");
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && $2!=1)
										{
											printf("Expression doesn't match return type of function\n"); exit(0);
										}

									};

break_statement 
			: BREAK ';' ;

string_initilization
			: assignment_operator string_constant {insV();} ;

array_initialization
			: assignment_operator '{' array_int_declarations '}' {if(arr_count > arr_size) {printf("initilization of array with too many variables on line no %d\n"); exit(0);}
			arr_count = arr_size = 0;
			};

array_int_declarations
			: integer_constant {arr_count++;} array_int_declarations_breakup;

array_int_declarations_breakup
			: ',' array_int_declarations 
			| ;

expression 
			: mutable 
			assignment_operator { push("="); if(tempo[0] != '\0') {strcpy(tempo3, tempo);} } expression   {   
																	  if($1==1 && $4==1) 
																	  {
			                                                          $$=1;
			                                                          } 
			                                                          else 
			                                                          {$$=-1; printf("Type mismatch\n"); exit(0);} 
																																if(tempo3[0] != '\0')
																																{
																																	printf("*%s = %s\n", tempo3, temp);
																																	cln(tempo3, 100);
																																}
																																else
			                                                          codeassign();
			                                                       }
			| mutable addition_assignment_operator {push("+=");}expression {  
																	  if($1==1 && $4==1) 
			                                                          $$=1; 
			                                                          else 
			                                                          {$$=-1; printf("Type mismatch\n"); exit(0);} 
			                                                          codeassign();
			                                                       }
			| mutable subtraction_assignment_operator {push("-=");} expression  {	  
																	  if($1==1 && $4==1) 
			                                                          $$=1; 
			                                                          else 
			                                                          {$$=-1; printf("Type mismatch\n"); exit(0);} 
			                                                          codeassign();
			                                                       }
			| mutable multiplication_assignment_operator {push("*=");} expression {
																	  if($1==1 && $4==1) 
			                                                          $$=1; 
			                                                          else 
			                                                          {$$=-1; printf("Type mismatch\n"); exit(0);}
			                                                          codeassign(); 
			                                                       }
			| mutable division_assignment_operator {push("/=");}expression 		{ 
																	  if($1==1 && $4==1) 
			                                                          $$=1; 
			                                                          else 
			                                                          {$$=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
			| mutable modulo_assignment_operator {push("%=");}expression 		{ 
																	  if($1==1 && $3==1) 
			                                                          $$=1; 
			                                                          else 
			                                                          {$$=-1; printf("Type mismatch\n"); exit(0);} 
			                                                          codeassign();
																	}
			| mutable increment_operator 							{ push("++");if($1 == 1) $$=1; else $$=-1; genunary();}
			| mutable decrement_operator  							{push("--");if($1 == 1) $$=1; else $$=-1; genunary();}
			| simple_expression {if($1 == 1) $$=1; else $$=-1;} ;


simple_expression 
			: simple_expression OR_operator and_expression {push("||");} {if($1 == 1 && $3==1) $$=1; else $$=-1; codegen();}
			| and_expression {if($1 == 1) $$=1; else $$=-1;};

and_expression 
			: and_expression AND_operator {push("&&");} unary_relation_expression  {if($1 == 1 && $3==1) $$=1; else $$=-1; codegen();}
			  |unary_relation_expression {if($1 == 1) $$=1; else $$=-1;} ;


unary_relation_expression 
			: exclamation_operator {push("!");} unary_relation_expression {if($2==1) $$=1; else $$=-1; codegen();} 
			| regular_expression {if($1 == 1) $$=1; else $$=-1;} ;

regular_expression 
			: regular_expression relational_operators sum_expression {if($1 == 1 && $3==1) $$=1; else $$=-1; codegen();}
			  | sum_expression {if($1 == 1) $$=1; else $$=-1;} ;
			
relational_operators 
			: greaterthan_assignment_operator {push(">=");} | lessthan_assignment_operator {push("<=");} | greaterthan_operator {push(">");}| lessthan_operator {push("<");}| equality_operator {push("==");}| inequality_operator {push("!=");} ;

sum_expression 
			: sum_expression sum_operators  term  {if($1 == 1 && $3==1) $$=1; else $$=-1; codegen(); }
			| term {if($1 == 1) $$=1; else $$=-1;}

sum_operators 
			: add_operator { push("+"); chk=1; }
			| subtract_operator {push("-"); chk=1;} ;

term
			: term MULOP  factor { chk = 1 ; if($1 == 1 && $3==1) $$=1; else $$=-1; codegen();}
			| factor {if($1 == 1) $$=1; else $$=-1;} ;

MULOP 
			: multiplication_operator {push("*"); chk=1;}| division_operator {push("/"); chk=1;} | modulo_operator {push("%"); chk=1; } ;

factor 
			: immutable {if($1 == 1) $$=1; else $$=-1;} 
			| mutable {if($1 == 1) $$=1; else $$=-1;} ;


mutable 
			: identifier {

							if(tip == 3)
							{
								typ = gettype(curid, 0);
								tip = 1;
							}
							
							
						  push(curid);
						  if(check_id_is_func(curid))
						  {printf("Function name used as Identifier\n"); exit(8);}
							if(!checkscope(curid))
							{printf("%s\n",curid);printf("Undeclared\n");exit(0);} 
							if(!checkarray(curid))
							{printf("%s\n",curid);printf("Array ID has no subscript\n");exit(0);}
							if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
							$$ = 1;
							else
							$$ = -1;

							
							cln(tempo2, 100);
							strcpy(tempo2, curid);

							}
			| array_identifier { typ = gettype(curid, 0); tip=2; if(!checkscope(curid)){printf("%s\n",curid);printf("Undeclared\n");exit(0);} strcpy(tempo, curid); chk=0; } '[' index ']' 
			                   {	
													 char temp1[100] = "\0";
													 strcpy(temp1, "*" );
													 strcat(temp1, tempo);
															 check = 1;
															
														//	printf("\n\n%s\n\n", tempo);
													 push(temp1);
													 if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              		$$ = 1;
			              		else
			              		$$ = -1;

												 }
			                   

index:	sum_expression

			{	 printf("sum_expression\n\n\n");
				char temp1[100], temp2[100], temp3[100];
												strcpy(temp1, "t");
												char buffer[100];
												itoa(count, buffer, 10);
												strcat(temp1, buffer);
												count++;

cln(temp2, 100);
cln(buffer, 100);
												strcpy(temp2, "t");
												itoa(count, buffer, 10);
												strcat(temp2, buffer);
												count++; 

cln(temp3, 100);
cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												count++;

												printf("%s \n", temp1);
												printf("%s = 0 \n", temp1);

												printf("%s \n", temp2);
												
												printf("%s = %d \n", temp2, getSTarrSize(tempo));
												
												printf("%s = %s < ", temp3, temp2);
												if(chk)
												{
													printf("%s\n", temp);	
												}
												else{
													printf("%s\n", curid);
												}
												printf("IF not %s goto L%d \n", temp3, lno);

cln(temp1, 100);
cln(buffer, 100);
												strcpy(temp1, "t");
												itoa(count, buffer, 10);
												strcat(temp1, buffer);
												count++;

												printf("%s = 'RUNTIME ERROR: Index out of Bounds' \n", temp1);

cln(temp3, 100);
cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												count++;

												printf("la %s %s \n", temp3, temp1);
												printf("print string %s \n", temp3);

												printf("exit \n");

												printf("L%d: \n", lno++);

cln(temp3, 100);
cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												count++;

												printf("%s = ", temp3);

												if(chk)
												{
													printf("%s < 0\n", temp);
													
												}
												else{
													printf("%s < 0\n", curid);
												}

												printf("IF not %s goto L%d", temp3, lno);

cln(temp1, 100);
cln(buffer, 100);
												strcpy(temp1, "t");
												itoa(count, buffer, 10);
												strcat(temp1, buffer);
												count++;

												printf("%s = 'RUNTIME ERROR: Index is negative' \n", temp1);

cln(temp3, 100);
cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												count++;

												printf("la %s %s \n", temp3, temp1);
												printf("print string %s \n", temp3);

												printf("exit\n");
												printf("L%d: \n", lno++);

												cln(temp3, 100);
												cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												count++;

												printf("%s \n", temp3);
												printf("%s = ", temp3, temp);

												if(chk)
												{
													printf("%s * 4\n", temp);
												}
												else{
													printf("%s * 4\n", curid);
												}

												cln(temp2, 100);
												cln(buffer, 100);
												strcpy(temp2, "t");
												itoa(count, buffer, 10);
												strcat(temp2, buffer);
												count++;

												printf("%s \n", temp2);
												printf("%s = %s + %s \n", temp2, tempo , temp3);

												cln(tempo2, 100);
												strcpy(tempo2, "*");
												strcat(tempo2, temp2);
												cln(tempo, 100);
												
												strcpy(tempo, temp2);
												

			              	
			}


			|	integer_constant {

											//	printf("integer_constant\n\n\n");
												char temp1[100], temp2[100], temp3[100], temp4[100];
												strcpy(temp1, "t");
												char buffer[100];
												itoa(count, buffer, 10);
												strcat(temp1, buffer);
												count++;

						cln(temp2, 100);
						cln(buffer, 100);

												strcpy(temp2, "t");
												itoa(count, buffer, 10);
												strcat(temp2, buffer);
												count++; 

			cln(temp3, 100);
			cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												count++;

	cln(temp4, 100);
	cln(buffer, 100);
												strcpy(temp4, "t");
												itoa(count, buffer, 10);
												strcat(temp4, buffer);
												count++;

												printf("%s \n", temp1);
												printf("%s = 0 \n", temp1);

												printf("%s \n", temp2);
												//printf("%s \n", curid);
												//int e = getSTarrSize(curid);
												
												printf("%s = %d \n",temp2, getSTarrSize(curid));


												printf("%s = %s\n", temp4, curval);

												printf("%s = %s < %s \n", temp3, temp2, temp4);
												printf("IF not %s goto L%d \n", temp3, lno);

cln(temp1, 100);
cln(buffer, 100);
												strcpy(temp1, "t");
												itoa(count, buffer, 10);
												strcat(temp1, buffer);
												count++;

												printf("%s = 'RUNTIME ERROR: Index out of Bounds' \n", temp1);

cln(temp3, 100);
cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												count++;

												printf("la %s %s \n", temp3, temp1);
												printf("print string %s \n", temp3);

												printf("exit \n");

												printf("L%d: \n", lno++);

cln(temp3, 100);
cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												count++;

												printf("%s = %s < 0\n", temp3, temp4);

												printf("IF not %s goto L%d", temp3, lno);

cln(temp1, 100);
cln(buffer, 100);
												strcpy(temp1, "t");
												itoa(count, buffer, 10);
												strcat(temp1, buffer);
												count++;

												printf("%s = 'RUNTIME ERROR: Index is negative' \n", temp1);

cln(temp3, 100);
cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												count++;

												printf("la %s %s \n", temp3, temp1);
												printf("print string %s \n", temp3);

												printf("exit\n");
												printf("L%d: \n", lno++);
												
												cln(temp3, 100);
												cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												count++;

												printf("%s \n", temp3);
												printf("%s = %s * 4\n", temp3, temp4);

												cln(temp2, 100);
												cln(buffer, 100);
												strcpy(temp2, "t");
												itoa(count, buffer, 10);
												strcat(temp2, buffer);
												count++;

												printf("%s \n", temp2);
												printf("%s = %s + %s \n", temp2, curid , temp3);

												cln(tempo2, 100);
												strcpy(tempo2, "*");
												strcat(tempo2, temp2);

												cln(tempo, 100);
												
												strcpy(tempo, temp2);

												/*
												printf("%s\n", temp3);
												printf("%s ==== %s\n", temp3, curval);
												printf("*%s = %s\n", temp2 , temp3);

											*/

			              		};



immutable 
			: '(' expression ')' {if($2==1) $$=1; else $$=-1;}
			| call {if($1==-1) $$=-1; else $$=1;}
			| constant {if($1==1) $$=1; else $$=-1;};

call
			: identifier '('{

			             if(!check_declaration(curid, "Function"))
			             { printf("Function not declared"); exit(0);} 
			             insertSTF(curid); 
						 strcpy(currfunccall,curid);
						 if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
						 {
			             $$ = 1;
			             }
			             else
			             $$ = -1;
                         call_params_count=0;
			             } 
			             arguments ')' 
						 { if(strcmp(currfunccall,"printf"))
							{ 
								if(getSTparamscount(currfunccall)!=call_params_count)
								{	
									yyerror("Number of arguments in function call doesn't match number of parameters");
									exit(8);
								}
							}
							callgen();
						 };

arguments 
			: arguments_list | ;

arguments_list 
			: arguments_list ',' exp { call_params_count++; }  
			| exp { call_params_count++; };

exp : identifier {arggen(1);} | integer_constant {arggen(2);} | string_constant {arggen(3);} | float_constant {arggen(4);} | character_constant {arggen(5);} ;

constant 
			: integer_constant 	{  insV(); codegencon(); $$=1; } 
			| string_constant	{  insV(); codegencon();$$=-1;} 
			| float_constant	{  insV(); codegencon();} 
			| character_constant{  insV(); codegencon();$$=1; };

%%

extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printCT();

struct stack
{
	char value[100];
	int labelvalue;
}s[100],label[100];


void push(char *x)
{
	
	if(check)
	{
		if(s[top].value[0] != '+' && s[top].value[0] != '*' && s[top].value[0] != '/' && s[top].value[0] != '%' && s[top].value[0] != '-')
		top--;
		check = 0;
	}
	strcpy(s[++top].value,x);
	
	/*printf("push:	");
	for(int i=0 ; i<top ; i++)
	{
		printf("%s	", s[i].value);
	}
	printf("\n\n");*/
}

void swap(char *x, char *y)
{
	char temp = *x;
	*x = *y;
	*y = temp;
}

void cln(char s[], int length)
{
	// printf("cln called\n");
	for(int i=0 ; i<length ; i++)
	s[i] = '\0';
}

void reverse(char str[], int length) 
{ 
    int start = 0; 
    int end = length -1; 
    while (start < end) 
    { 
        swap((str+start), (str+end)); 
        start++; 
        end--; 
    } 
} 
  
char* itoa(int num, char* str, int base) 
{ 
    int i = 0; 
    int isNegative = 0; 
  
   
    if (num == 0) 
    { 
        str[i++] = '0'; 
        str[i] = '\0'; 
        return str; 
    } 
  
    if (num < 0 && base == 10) 
    { 
        isNegative = 1; 
        num = -num; 
    } 
  
   
    while (num != 0) 
    { 
        int rem = num % base; 
        str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0'; 
        num = num/base; 
    } 
  
    if (isNegative) 
        str[i++] = '-'; 
  
    str[i] = '\0'; 
  
   
    reverse(str, i); 
  
    return str; 
} 

void codegen()
{
	strcpy(temp,"t");
	char buffer[100];
	itoa(count,buffer,10);
	strcat(temp,buffer);
	printf("%s = %s %s ",temp,s[top-2].value,s[top-1].value);
	
	{
		printf("%s\n", s[top].value);
	}
	top = top - 2;
	strcpy(s[top].value,temp);
	count++; 
}

void codegencon()
{
	strcpy(temp,"t");
	char buffer[100];
	itoa(count,buffer,10);
	strcat(temp,buffer);
	printf("%s = %s\n",temp,curval);
	push(temp);
	count++;
	
}

int isunary(char *s)
{
	if(strcmp(s, "--")==0 || strcmp(s, "++")==0)
	{
		return 1;
	}
	return 0;
}

void genunary()
{
	char temp1[100], temp2[100], temp3[100];
	strcpy(temp1, s[top].value);
	strcpy(temp2, s[top-1].value);

	if(isunary(temp1))
	{
		strcpy(temp3, temp1);
		strcpy(temp1, temp2);
		strcpy(temp2, temp3);
	}
	strcpy(temp, "t");
	char buffer[100];
	itoa(count, buffer, 10);
	strcat(temp, buffer);
	count++;

	if(strcmp(temp2,"--")==0)
	{
		printf("%s = %s - 1\n", temp, temp1);
		printf("%s = %s\n", temp1, temp);
	}

	if(strcmp(temp2,"++")==0)
	{
		printf("%s = %s + 1\n", temp, temp1);
		printf("%s = %s\n", temp1, temp);
	}

	top = top -2;
}

void codeassign()
{
	printf("%s = %s\n",s[top-2].value,s[top].value);
	top = top - 2;
}

void label1()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(lno,buffer,10);
	strcat(temp,buffer);
	printf("IF not %s GoTo %s\n",s[top].value,temp);
	label[++ltop].labelvalue = lno++;
}

void label2()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(lno,buffer,10);
	strcat(temp,buffer);
	printf("GoTo %s\n",temp);
	strcpy(temp,"L");
	itoa(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop--;
	label[++ltop].labelvalue=lno++;
}

void label3()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop--;
	
}

void label4()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(lno,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	label[++ltop].labelvalue = lno++;
}


void label5()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(label[ltop-1].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("GoTo %s:\n",temp);
	strcpy(temp,"L");
	itoa(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop = ltop - 2;
    
   
}

void funcgen()
{
	printf("func begin %s\n",currfunc);
}

void funcgenend()
{
	printf("func end\n\n");
}

void arggen(int i)
{
    if(i==1)
    {
	printf("refparam %s\n", curid);
	}
	else
	{
	printf("refparam %s\n", curval);
	}
}

void callgen()
{
	printf("refparam result\n");
	push("result");
	printf("call %s, %d\n",currfunccall,call_params_count);
}



int main(int argc , char **argv)
{
	yyin = fopen(argv[1], "r");
	yyparse();


	if(flag == 0)
	{
		printf(ANSI_COLOR_GREEN "Status: Parsing Complete - Valid" ANSI_COLOR_RESET "\n");
		printf("%30s" ANSI_COLOR_CYAN "SYMBOL TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "------------");
		printST();

		printf("\n\n%30s" ANSI_COLOR_CYAN "CONSTANT TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "--------------");
		printCT();
	}
}

void yyerror(char *s)
{
	printf(ANSI_COLOR_RED "%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf(ANSI_COLOR_RED "Status: Parsing Failed - Invalid\n" ANSI_COLOR_RESET);
	exit(7);
}

void ins()
{
	insertSTtype(curid,curtype);
}

void insV()
{
	insertSTvalue(curid,curval);
}

int yywrap()
{
	return 1;
}