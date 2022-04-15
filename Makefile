compile:scanner.l parser.y
	flex scanner.l
	yacc -d parser.y
	gcc lex.yy.c y.tab.c -w
	
