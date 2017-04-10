/*
 * Author: Norris, Joel R.
 * Date: Apr 06, 2017
 * File: BST.cpp
 */
#include "BST.h"


BST::BST()
{
}


BST::~BST()
{
}

void BST::in_order_traversal()
{
}

void BST::search_student(string m_number)
{
}

void BST::insert_student(string m_number, Student & student)
{
	// create new TreeNode
	TreeNode* treenode;

	// add to hashmap
	// if the map is empty set the root pointer
	if (bst.empty()) {
		rootPtr = student.get_m_number();
		bst.insert(student.get_m_number(), treenode);
	}

	if (m_number == "M00000000") {
		// insert new node
		treenode->item = student;
		treenode->LC_m_number = "M00000000";
		treenode->RC_m_number = "M00000000";
		bst.insert(student.get_m_number(), treenode);
	}

	if (m_number < student.get_m_number()) {
		insert_student( bst[m_number].RC_m_number, student);
	} else {
	//if (m_number > student.get_m_number()) {
		insert_student(bst[m_number].LC_m_number, student);
	}


}

void BST::delete_student(string m_number)
{
}
