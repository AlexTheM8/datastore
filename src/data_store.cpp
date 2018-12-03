//============================================================================
// Name        : data_store.cpp
// Author      : Alex Rhodes
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "../includes/data_store.h"

DataStore::DataStore(Crypto *pCrypt) : myCrypto(pCrypt) {

}

DataStore::~DataStore(void) {

}

bool DataStore::decrypt(std::string &myString) {
	if (myCrypto) {
		return myCrypto->decrypt(myString);
	}
	return false;
}

bool DataStore::encrypt(std::string &myString) {
	if (myCrypto) {
		return myCrypto->encrypt(myString);
	}
	return false;
}
