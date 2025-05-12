// Graph : Graph is a non linear data structure consisting of vertices and edges


// Types of graph :  
//(1) Undirected graph : A graph in which edge has direction. That is the nodes are ordered pairs in the definition of every edge.
//(2) Directed graph : A graph in which edges do not have any direction. That is the nodes are unordered pairs in the definition of every edge. 
//(3) Null Graph : A graph is known as a null graph if there are no edges in the graph.
//(4) Trivial Graph : Graph having only a single vertex, it is also the smallest graph possible. 
//(5) Connected Graph : The graph in which from one node we can visit any other node in the graph is known as a connected graph. 
//(6) Disconnected Graph : The graph in which at least one node is not reachable from a node is known as a disconnected graph.
//(7) Regular Graph : The graph in which the degree of every vertex is equal to K is called K regular graph.
//(8) Complete Graph : The graph in which from each node there is an edge to each other node.
//(9) Cycle Graph : The graph in which the graph is a cycle in itself, the minimum value of degree of each vertex is 2. 
//(10) Cyclic Graph : A graph containing at least one cycle is known as a Cyclic graph.
//(11) Directed Acyclic Graph : A Directed Graph that does not contain any cycle. 
//(12) Bipartite Graph : A graph in which vertex can be divided into two sets such that vertex in each set does not contain any edge between them.
//(13) Weight Graph :   A graph in which the edges are already specified with suitable weight is known as a weighted graph. Weighted graphs can be further classified as directed weighted graphs and undirected weighted graphs. 






// Compelete Graph : complete graph mei kitni age hongi iske liye formula 
//  maan lo 4 node hai to hum n(n-1)/2 means 4*3/2 = 6 

















// Representation of Graph Data Structure:

//(1) Adjacency Matrix : In this method, the graph is stored in the form of the 2D matrix where rows and columns denote vertices. Each entry in the matrix represents the weight of the edge between those vertices. 
//(2) Adjacency List : This graph is represented as a collection of linked lists. There is an array of pointer which points to the edges connected to that vertex. 



// Comparison between Adjacency Matrix and Adjacency List
// When the graph contains a large number of edges then it is good to store it as a matrix because only some entries in the matrix will be empty. An algorithm such as Prim’s and Dijkstra adjacency matrix is used to have less complexity.

//   __________________________________________________________________________________
//   |  Action	           |     Adjacency Matrix	     |       Adjacency List        |
//   |_____________________|____________________________ |_____________________________|
//   |  Adding Edge	       |          O(1)	             |            O(1)             |
//   |  Removing an edge   |          O(1)	             |            O(N)             |
//   |  Initializing       |          O(N*N)	         |            O(N)             |
//   |_____________________|_____________________________|_____________________________|


//Difference between Tree and Graph:  Tree is a restricted type of Graph Data Structure, just with some more rules. Every tree will always be a graph but not all graphs will be trees. Linked List, Trees, and Heaps all are special cases of graphs. 

