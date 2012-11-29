#include "HashTable.h"

template <typename T>
HashTable<T>::HashTable(){

}

template <typename T>
int HashTable<T>::hashFunction(std::string k){
	int sum = 0;
	for(int i = 0; i < (int)k.size(); i++){
		sum+=(int)k[i];
	}
	return sum%1001;
}

template class HashTable<int>;
template class HashTable<std::string>;
template class HashTable<double>;
