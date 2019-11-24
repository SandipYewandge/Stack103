stack:stack.o push.o pop.o empty.o full.o display.o
	gcc -o stack stack.o push.o pop.o empty.o full.o display.o
stack.o:stack.c
	gcc -o stack.o -c stack.c
push.o:push.c
	gcc -o push.o -c push.c
pop.o:pop.c
	gcc -o pop.o -c pop.c
empty.o:empty.c
	gcc -o empty.o -c empty.c
full.o:full.c
	gcc -o full.o -c full.c
display.o:display.c
	gcc -o display.o -c display.c

clean:
	rm -rf *.o main