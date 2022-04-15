compile:scanner.l parser.y
	clear
	flex scanner.l
	yacc -d parser.y
	gcc lex.yy.c y.tab.c -w
	
