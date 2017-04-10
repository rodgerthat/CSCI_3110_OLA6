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

private:
	unordered_map< string, TreeNode > bst;
	void in_order_traversal();
	void search_student(string m_number);
	void insert_student(Student& student);
	void delete_student(string m_number);

};

