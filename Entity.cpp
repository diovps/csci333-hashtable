#include "Entity.h"

template <typename T>
Entity<T>::Entity(std::string k,T v){
	key = k;
	value = v;
}

template <typename T>
void Entity<T>::setValue(T v){
	value = v;
}

template <typename T>
T Entity<T>::getValue(){
	return value;
}

template <typename T>
std::string Entity<T>::getKey(){
	return key;
}

template class Entity<int>;
template class Entity<double>;
template class Entity<std::string>;
