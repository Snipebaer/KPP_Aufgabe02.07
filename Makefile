default: zeitrechner

zeitrechner.o: zeitrechner.c
	gcc -c zeitrechner.c -o zeitrechner.o
zeitrechner: zeitrechner.o
	gcc zeitrechner.o -o zeitrechner

clean: 
	-rm -f zeitrechner.o
	-rm -f zeitrechner
