#include "hfmtree1.h"
int main() {

	HTNode ht[MaxSize];

	HTNode node1;
	HTNode node2;
	HTNode node3;
	HTNode node4;

	node1.weight = 1;
	node2.weight = 3;
	node3.weight = 5;
	node4.weight = 7;

	ht[0] = node1;
	ht[1] = node2;
	ht[2] = node3;
	ht[3] = node4;

	CreateHT(ht, 4);

	for (int i = 0; i < 2 * 4 - 1; i++)
		cout << ht[i].weight << " ";
	cout << endl;

}

