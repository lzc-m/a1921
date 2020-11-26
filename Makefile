all:sortc
sortc:sort1.c main.c   	
	gcc sort1.c main.c -o sortc

clean:
	rm  sortc

