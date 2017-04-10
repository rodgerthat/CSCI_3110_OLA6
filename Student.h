/*
 * Author: Norris, Joel R.
 * Date: Apr 06, 2017
 * File: Student.h
 */
#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::ostream;

class Student
{
public:
	Student(string m_number, string phone_number, string address);

	~Student();

	string get_m_number() const;
	void set_m_number(string m_number);
	
	string get_phone_number() const;
	void set_phone_number(string phone_number);

	string get_address() const;
	void set_address(string address);

	//overload << operator to display the deck
    friend ostream& operator << (ostream& os, const Student& student);
	bool operator < (const Student& student) const;



private:
	string m_m_number;
	string m_phone_number;
	string m_address;
};

