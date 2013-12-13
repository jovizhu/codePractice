#include <stdio.h>

typedef struct _Node {
Node * leftChild;
Node * rightChild;
Node * nextRight;
} Node;

void populateNRP (Node * node, Node * silibing) {

	if (Node.leftChild != NULL ) {
		node.leftChild.nextright = node.rightChild.leftChild.
	}

	if (silibling != NULL) {
		node.rightChild.nextRigh = silibing.leftChild.
	}
	
	populateNRP(node.leftChild, node.rightChild);
	pupulateNRP(node.rightChild, silibling.rightChild);
}

int main(int argc, char * argv[])
