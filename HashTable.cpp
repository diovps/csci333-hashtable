#include "HashTable.h"

template <typename T>
HashTable<T>::HashTable(){
	std::vector<Entity<T>* > blankEntry;
	for(int i = 0; i < 1001; i++){
		table.push_back(blankEntry);
	}
}

template <typename T>
int HashTable<T>::hashFunction(std::string k){
	int sum = 0;
	for(int i = 0; i < (int)k.size(); i++){
		sum+=(int)k[i];
	}
	return sum%1001;
}

template <typename T>
void HashTable<T>::insert(std::string k, T v){
	int loc = hashFunction(k);
	Entity<T>* ent = new Entity<T>(k,v);

	for(int i = 0; i < (int)table[loc].size(); i++){
		if(table[loc][i]->getKey() == k){
			table[loc][i]->setValue(v);
			return;
		}
	}
	table[loc].push_back(ent);
}

template class HashTable<int>;
template class HashTable<std::string>;
template class HashTable<double>;
