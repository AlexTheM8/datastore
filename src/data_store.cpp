//============================================================================
// Name        : data_store.cpp
// Author      : Alex Rhodes
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "../includes/data_store.h"
#include "../../crypto/includes/crypto_AES.h"

bool DataStore::decrypt(std::string &myString) {
	if (myCrypto) {

	}
	return true;
}

bool DataStore::encrypt(std::string &myString) {
	return false;
}

DataStore::DataStore(Crypto *pCrypt) {
	myCrypto = pCrypt;
}

DataStore::~DataStore(void) {

}
