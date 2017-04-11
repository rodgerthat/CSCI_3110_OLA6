/*
 * Author: Norris, Joel R.
 * Date: Apr 06, 2017
 * File: ola6.cpp
 * Objective: To be familiar binary search tree and hash table.
 * Description: Implement a binary search tree using hash table.
 */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "BST.h"
#include "Student.h"

using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using std::ifstream;

void populate_bst( const char *filename, const char *delimeter, BST& bst );

int main()
{
	const char * FILENAME = "StudentData.txt";
	const char * DELIMETER = "|";

	// o Create an empty binary search tree;
	BST bst;

	// o Insert the following M#s to the BST in the given order : M00000005, M00000003, M00000002, M00000001, M00000004, M00000006, M00000009, M00000008, M00000007, M00000010.
	populate_bst(FILENAME, DELIMETER, bst);
	

	// o Perform in-order traversal to print all students in the tree;

	// o Search the student with M#  = ‘M00000007’.Print all information of the student.

	// o Delete the student with M#  = ‘M00000002’;

	// o Perform in - order traversal to print all students in the tree;

	// o Delete the student with M#  = ‘M00000005’.

	// o Perform in - order traversal to print all students in the tree;

    return 0;
}

void populate_bst(const char *filename, const char *delimeter, BST& bst) {

	// o Insert the following M#s to the BST in the given order : M00000005, M00000003, M00000002, M00000001, M00000004, M00000006, M00000009, M00000008, M00000007, M00000010.
	ifstream inFile;
	string line;

	inFile.open(filename);

	while (getline(inFile, line)) {

		stringstream ss(line);
		string data;
		int i = 0;
		string m_no, phone_no, addy;

		while (getline(ss, data, '|')) {
			
			switch (i) {
			case 0: m_no = data; break;
			case 1: phone_no = data; break;
			case 2: addy = data; break;
			}
			++i;
			
		}

		// create new student object 
		Student* student = new Student(m_no, phone_no, addy);
		// create new TreeNode and insert it into the BST
		TreeNode* treenode;
		treenode->item = *student;
		treenode->LC_m_number = "M00000000";
		treenode->RC_m_number = "M00000000";

		bst.insert_student(student->get_m_number(), *treenode);
		//cout << m_no << " " << phone_no << " " << addy << " " << endl;

	}
	
}

