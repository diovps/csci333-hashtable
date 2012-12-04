#include <iostream>
#include "HashTable.h"

int main(){
	HashTable<int>* inttable = new HashTable<int>();
	inttable->insert("Hello",6);
	std::cout << inttable->lookUp("Hello") << std::endl;
	inttable->insert("Hello",535);
	std::cout << inttable->lookUp("Hello") << std::endl;
	inttable->remove("Hello");
	std::cout << inttable->lookUp("Hello") << std::endl;
	inttable->remove("bananaphone");
	
	HashTable<std::string>* stringtable = new HashTable<std::string>();
	stringtable->insert("Hello","Goodbye");
	std::cout << stringtable->lookUp("Hello") << std::endl;
	stringtable->insert("Hello","Pumpernickle");
	std::cout << stringtable->lookUp("Hello") << std::endl;
	stringtable->remove("Hello");
	stringtable->remove("bananaphone");
	
	HashTable<double>* doubletable = new HashTable<double>();
	doubletable->insert("Hello",7.86);
	std::cout << doubletable->lookUp("Hello") << std::endl;
	doubletable->insert("Hello",13553.994);
	std::cout << doubletable->lookUp("Hello") << std::endl;
	doubletable->remove("Hello");
	doubletable->remove("bananaphone");
	
	delete stringtable;
	delete inttable;
	delete doubletable;
	return 0;
}

