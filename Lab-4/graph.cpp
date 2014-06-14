#include<iostream>
#include<stdexcept>
#include<map>
#include<vector>
#include "graph.h"

using namespace std;

Graph::Graph(const vector<int> &starts, const vector<int> &ends){
  if ( starts.size() != ends.size() )
	throw invalid_argument("start and end vectors are not of equal length");
  
  int i = 0;  

  while(i < starts.size()){ 
	vector<int> nodes;
	while(starts[i+1] == starts[i]) {
		nodes.push_back(ends[i]);
		i++;
	}
	nodes.push_back(ends[i]);
	i++;
	adjacency_list.insert(pair<int, vector<int> >(starts[i-1],nodes));
 }

}

int Graph::numOutgoing(const int nodeID) const{
	map< int, vector<int> >::const_iterator it =  adjacency_list.find(nodeID);
	if (it == adjacency_list.end()) throw invalid_argument("Invalid nodeID");
	return it->second.size();
}

const vector<int> &Graph::adjacent(const int nodeID) const{
	map< int, vector<int> >::const_iterator it =  adjacency_list.find(nodeID);
	if (it == adjacency_list.end()) throw invalid_argument("Invalid nodeID");
	return  it->second;
}

int main(){

vector<int> starts = {1, 1, 1, 5, 5, 4};
vector<int> ends = {2, 3, 4, 4, 2, 2};

Graph myGraph = Graph(starts, ends);

cout << myGraph.numOutgoing(1) << endl;
cout << myGraph.numOutgoing(5) << endl;
cout << myGraph.numOutgoing(4) << endl;

return 0;

}
