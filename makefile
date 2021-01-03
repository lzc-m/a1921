stack1:stack.h teststack.c stack.c
	g++ stack.c teststack.c -o stack1

clean:
	rm stack1
	
#search
search:search.c search.h searchtest.c
      g++ search.c searchtest.c -o search
      
clean: 
        rm search

#queue
queue1:queue1.c queue1test.c queue1.h
     gcc queue1.c queuetest.c -o queue1

clean:
        rm queue1

#deque 
queue3:queue3.c queue3test.c queue3.h
      g++ queue3.c queue3test.c -o queue3
      
clean:
        rm queue3      
      
      
#二叉树的遍历
binarytree:binarytree.c binarytree.h binarytreetest.c
	g++ binarytreetest.c binarytree.c -o binarytree
	
clean:
	rm binarytree
 
#hfmtree1
hfmtree1:hfmtree1.c hfmtree1test.c hfmtree1.h
	g++ hfmtree1.c hfmtree1test.c -o hfmtree1

clean:
	rm hfmtree1

#图的遍历
graph:graph.h graph.c graphtest.c
	g++ graph.c graphtest.c -o graph
	
clean:
	rm graph
