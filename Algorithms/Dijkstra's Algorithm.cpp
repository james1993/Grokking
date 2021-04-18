vector<int> dijkstrasAlgorithm(int start, vector<vector<vector<int>>> edges) {
  int num_vertices = edges.size();
	vector<int> min_distances(edges.size(), numeric_limits<int>::max());
	min_distances[start] = 0;
	vector<Item> min_distances_pairs;
	
	for(int i = 0; i < edges.size(); i++)
		min_distances_pairs.push_back(Item{i,numeric_limits<int>::max()});
	
	MinHeap min_distances_heap(min_distances_pairs); //assume min heap is implemented elsewhere
	min_distances_heap.update(start, 0);
	
	while(!min_distances_heap.isEmpty())
	{
		auto [vertex, current_min_distance] = min_distances_heap.remove();
		if(current_min_distance == numeric_limits<int>::max()) break;
		
		for(auto edge : edges[vertex])
		{
			auto destination = edge[0];
			auto distance_to_destination = edge[1];
			auto new_path_distance = current_min_distance + distance_to_destination;
			auto current_destination_distance = min_distances[destination];
			if(new_path_distance < current_destination_distance)
			{
				min_distances[destination] = new_path_distnace;
				min_distances_heap.update(destination, new_path_distance);
			}
		}
	}
	
	vector<int> final_distances;
	for(auto distance : min_distances)
	{
		if(distance == numeric_limits<int>::max()) final_distances.push_back(-1);
		else final_distances.push_back(distance);
	}
	
  return final_distances;
}
