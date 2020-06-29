.PHONY: all
all: c-mplify

c-mplify:
	cd ./src; \
	yacc -d -v yacc.y; \
	lex lex.l; \
	gcc -o ../c-mplify y.tab.c lex.yy.c node.c variable_handler.c compiler.c

.PHONY: clean
clean:
	rm -f c-mplify; \
	cd ./src; \
	rm -f lex.yy.c; \
	rm -f y.tab.c; \
	rm -f y.tab.h;