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

// insert_student
void BST::insert_student(string m_number, TreeNode& treenode)
{
	// here the m_number is serving as our "rootPointer"

	// add to hashmap
	// if the map is empty set the root pointer
	if (bst.empty()) {
		rootPtr = treenode.item.get_m_number();
		bst.insert({ treenode.item.get_m_number(), treenode });
	}
	

	if (m_number == "M00000000") {
		// insert new node
		treenode.LC_m_number = "M00000000";
		treenode.RC_m_number = "M00000000";
		bst.insert({ treenode.item.get_m_number(), treenode });
	}

	if (m_number < treenode.item.get_m_number()) {
		insert_student( bst[m_number].RC_m_number, treenode);
	} else {
	//if (m_number > treenode.item.get_m_number()) {
		insert_student(bst[m_number].LC_m_number, treenode);
	}


}

void BST::delete_student(string m_number)
{
}
