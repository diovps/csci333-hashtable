#include "HashTable.h"

template <typename T>
HashTable<T>::HashTable(){
	std::vector<Entity<T>* > blankEntry;
	for(int i = 0; i < 1009; i++){
		table.push_back(blankEntry);
	}
}

template <typename T>
HashTable<T>::~HashTable(){
	for(int i = 0; i < 1009; i++){
		table[i].clear();
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

template <typename T>
T HashTable<T>::lookUp(std::string k){
	int loc = hashFunction(k);

	for(int i = 0; i < (int)table[loc].size(); i++){
		if(table[loc][i]->getKey() == k){
			return table[loc][i]->getValue();
		}
	}
	std::cout << "Key '" << k << "' does not exist" << std::endl;
	
	//returns 0 if key doesn't exist
	return 0;
}

template <typename T>
void HashTable<T>::remove(std::string k){

	int loc = hashFunction(k);
	for(int i = 0; i < (int)table[loc].size(); i++){
		if(table[loc][i]->getKey() == k){
			table[loc].erase(table[loc].begin()+i);
			return;
		}
	}
	std::cout << "Key '" << k << "' does not exist" << std::endl;
}

template class HashTable<int>;
template class HashTable<std::string>;
template class HashTable<double>;
