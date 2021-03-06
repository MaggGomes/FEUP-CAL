#ifndef MATCHER_H_
#define MATCHER_H_

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <functional>
#include <unordered_map>
#include "Student.h"
#include "Utilities.h"
using namespace std;

template <typename T>
struct compareED{
	bool operator() (T * s1, T* s2){
		return (s1->getNameEditDist() < s2->getNameEditDist());
	}
};

/**
 * @brief Converts a string to lowercase
 *
 * @param string to be converted
 * @return string converted
 */
string toLowerString(string s);

void pre_kmp(string pattern, vector<int> & prefix);

int kmp(string text, string pattern);

int numStringMatching(string filename,string toSearch);

int editDistance(string pattern, string text);

float numApproximateStringMatching(string filename,string toSearch);

template <typename T, typename A>
void updateResults(const string &pattern, vector <T *> &vec, A func, unordered_map<string, vector<T*>> &unMap){

	// Verifies if the search results for the pattern already exists
	if (unMap.count(pattern) > 0){
		vec = unMap[pattern]; // Key found
		return;
	}

	// For each member of the vector, calculates the edit distance
	for (size_t i = 0; i < vec.size(); i++){
		vec[i]->setNameEditDist(editDistance(pattern, toLowerString(vec[i]->getName())));
	}

	// Sorts the vector according to the edit distance in relation to the pattern
	sort(vec.begin(), vec.end(), func);

	// Stores the search results in the unordered map
	unMap.insert(make_pair(pattern, vec));
}



#endif // MATCHER_H_
