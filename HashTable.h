#ifndef __HASHTABLE_H__
#define __HASHTABLE_H__

#include "Entity.h"
#include <vector>

template <typename T>
class HashTable{
	private:
		int hashFunction(std::string k);
		std::vector<std::vector<Entity<T>* > > table;
	public:
		HashTable<T>();
		~HashTable<T>();
		void insert(std::string,T v);
		T lookUp(std::string);
		void remove(std::string);
};
#endif
