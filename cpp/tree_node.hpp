#pragma once

#include "matrix.hpp"

#include <string>
using std::string;

class TreeNode {
private:
	TreeNode * left;
	TreeNode * right;
	int column;
	double value;
	int classification;

public:
	TreeNode();
	~TreeNode();
	void dump(string indent);
	int count();
	void train(Matrix & m, vector<int> columns);
	int classify(vector<double> & row);
};
