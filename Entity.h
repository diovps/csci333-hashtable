#ifndef __ENTITY_H__
#define __ENTITY_H__

#include <iostream>
#include <string>

template <typename T>
class Entity{
	private:
		std::string key;
		T value;	
	public:
		Entity<T>(std::string key,T v);
		T getValue();
		std::string getKey();
		void setValue(T v);
};
#endif
