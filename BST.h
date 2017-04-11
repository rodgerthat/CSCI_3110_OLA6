/*
 * Author: Norris, Joel R.
 * Date: Apr 06, 2017
 * File: BST.h
 */
#pragma once

#include <unordered_map>
#include "Student.h"

using std::cout;
using std::endl;
using std::unordered_map;

struct TreeNode {
	Student item;
	string LC_m_number;
	string RC_m_number;
};

class BST
{
public:
	BST();

	~BST();

	void in_order_traversal();
	void search_student(string m_number);
	void insert_student(string m_number, TreeNode& treenode);
	void delete_student(string m_number);

private:
	unordered_map< string, TreeNode > bst;
	string rootPtr;
};

