/*
 * Author: Norris, Joel R.
 * Date: Apr 06, 2017
 * File: Student.cpp
 */
#include "Student.h"


Student::Student(string m_number, string phone_number, string address)
	: m_m_number(m_number), m_phone_number(phone_number), m_address(address)
{
}

Student::~Student()
{
}


string Student::get_m_number() const
{
	return m_m_number;
}

void Student::set_m_number(string m_number) 
{
	m_m_number = m_number;
}

string Student::get_phone_number() const
{
	return m_phone_number;
}

void Student::set_phone_number(string phone_number) 
{
	m_phone_number = phone_number;
}

string Student::get_address() const
{
	return m_address;
}

void Student::set_address(string address) 
{
	m_address = address;
}

bool Student::operator<(const Student & student) const
{
	return m_m_number < student.get_m_number();
}

ostream & operator<<(ostream& os, const Student& student)
{

	os << "Student M# : " << student.get_m_number() << endl;
	os << "Student Phone# : " << student.get_phone_number() << endl;
	os << "Student address : " << student.get_address() << endl;
	return os;
}
