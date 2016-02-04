#ifndef __RGG_H
#define __RGG_H

#include <vector>
#include <iterator>
#include <tuple>
#include "proj_func.h"
#include "trie_map.h"

using std::vector;
using std::tuple;

class rgg {

	public:
		typedef vector<int> pureStrategy;
		typedef vector<pureStrategy> pureStrategyProfile;
		typedef vector<vector<int>>	intMatrix;

		int numPlayers;
		int numResourceNodes;
		vector<intMatrix> eqMatrices;
		vector<vector<int>> eqVectors;
		vector<intMatrix> ltMatrices;
		vector<vector<int>> ltVectors;
		vector<vector<int>> neighbors;
    trie_map<double> utilityFunctions;

		rgg(int numPlayers, int numResourceNodes,
			vector<intMatrix> eqMatrices,
			vector<vector<int>> eqVectors,
			vector<intMatrix> ltMatrices,
			vector<vector<int>> ltVectors,
			vector<vector<int>> neighbors,
			trie_map<double> utilityFunctions);

    static rgg* makeRandomRGG(int numPlayers, int numResourceNodes,
			vector<intMatrix> eqMatrices,
			vector<vector<int>> eqVectors,
			vector<intMatrix> ltMatrices,
			vector<vector<int>> ltVectors,
			vector<vector<int>> neighbors);

		int getNumPlayers() {return numPlayers;}
		int getNumResourceNodes() {return numResourceNodes;}

		/*tuple<bool, int> isFeasible(int playerID, pureStrategy p);
		double getPureStrategyUtility(int playerID, pureStrategyProfile &p);
    */
};

#endif
