stack1:stack.h teststack.c stack.c
	g++ stack.c teststack.c -o stack1

clean:
	rm stack1
