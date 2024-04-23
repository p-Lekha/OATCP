1. **Input**:
   - Read the number of nodes (V) and the number of edges (E) from the input file. This provides information about the size of the graph.

2. **Initialize**:
   - Create an adjacency matrix to represent the graph. The matrix will have dimensions VxV.
   - Initialize all flows in the matrix to 0.
   - Store the source and destination nodes for later reference.

3. **Read Edges and Weights**:
   - Iterate over each edge in the input file.
   - For each edge, update the corresponding entry in the adjacency matrix with its weight.

4. **Ford-Fulkerson Algorithm**:
   - Initialize the flow network with flow 0.
   - While there is a path from the source to the destination in the residual graph (graph with remaining capacity):
     - Find an augmenting path using Breadth-First Search (BFS). This path should consist of edges with positive residual capacities.
     - Determine the bottleneck capacity along this path. It is the minimum residual capacity among all edges in the path.
     - Update the flow along the path by adding the bottleneck capacity to the total flow.
     - Update the residual capacities of the edges. For each edge in the augmenting path, subtract the bottleneck capacity from its capacity, and add the bottleneck capacity to the capacity of its reverse edge.
   - When there are no more augmenting paths, terminate the algorithm.

5. **Output**:
   - Output the maximum flow achieved, which is the total flow from the source to the destination.
  


     ***Time Complexity***
      O(|V| * E^2)
     
     ***Space Complexity***
     O(V)
     
