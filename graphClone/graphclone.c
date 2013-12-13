#include <stdio.h>

typedef struct _Node {
	vector neighbors;
} Node;

typedef unordered_map <Node*, Node*> Map;

Node *clone(Node * graph) {
	if (graph == NULL)
		return NULL;

	Map map;
	queue<Node *> q;
	q.push(graph);

	Node *graphCopy = new Node();
	map[graph]= graphCopy;

	while(!q.empty()) {
		Node * node = q.front();
		q.pop();
		int n = node->neighbor.size();
		for (size_t i=0; i<n;i++) {
			Node *neighbor = node->neighbors[i];
			if(map.find(neighbor) == map.end()) {
				Node *p = new Node();
				map[node]->neighbors.push_back(p);
				map[neighbor] = p;
				q.push(neighbor);
			} else {
				map[node]->neighbor.push_back(map[neighbor]);
			}
		}	
	}
	return graphCopy;
}
