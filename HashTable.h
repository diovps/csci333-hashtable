#ifndef __HASHTABLE_H__
#define __HASHTABLE_H__

#include "Entity.h"
#include <vector>

template <typename T>
class HashTable{
	private:
		int hashFunction(std::string k);
		std::vector<Entity<T> >* table[1001];
	public:
		HashTable();
};
#endif
