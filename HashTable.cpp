#include "Entity.h"
#include "HashTable.h"

template <typename T>
HashTable<T>::HashTable(){

}

template class HashTable<int>;
template class HashTable<std::string>;
template class HashTable<double>;
