//This will be the implementation for the friend class

#include "friend.h"

Friend::Friend(){
	std::string empty = " ";
	name = empty;
}

std::string Friend::get_name()const{
	return name;
}

Date Friend::get_bday()const{
	return bday;
}

bool Friend::operator==(const Friend& other)const{
	if(name == other.name && bday == other.bday){
		return true;
	}
	else
		return false;
}

bool Friend::operator!=(const Friend& other)const{
	if(name != other.name && bday != other.bday){
		return true;
	}
	else 
		return false;
}

void Friend::input(std::istream& ins){
	ins >> name;
	ins >> bday;
}

void Friend::output(std::ostream& outs)const{
	outs << name;
	outs << bday;
}

std::istream& operator >>(std::istream& ins, Friend& f){
	f.input(ins);
	return ins;
}

std::ostream& operator <<(std::ostream& outs, const Friend& f){
	f.output(outs);
	return outs;
}

