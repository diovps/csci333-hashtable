#ifndef __ENTITY_H__
#define __ENTITY_H__

#include <iostream>
using std::string;

template <typename T>
class Entity{
	private:
		string key;
		T value;	
	public:
		Entity(string key,T v);
		T getValue();
		string getKey();
		void setValue(T v);
};
#endif
