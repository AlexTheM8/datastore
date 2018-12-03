//============================================================================
// Name        : data_store_file.cpp
// Author      : Alex Rhodes
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "../includes/data_store_file.h"
#include <fstream>
#include <sstream>

DataStore_File::DataStore_File(std::string fileName, Crypto* crypto) :
		DataStore(crypto), myFileName(fileName) {
}

DataStore_File::~DataStore_File(void) {

}

bool DataStore_File::load(std::vector<String_Data> &myVector) {
	std::fstream file;
	if (!openFile(file, myFileName)) {
		return false;
	}

	std::string line;
	while (!file.eof()) {
		getline(file, line);
		//TODO Factor for crypt
		std::vector<std::string> tokens;
		std::string token;
		std::stringstream ss(line);
		while (getline(ss, token, ',')) {
			tokens.push_back(token);
		}
		myVector.push_back(String_Data(tokens[0], std::stoi(tokens[1])));

	}

	closeFile(file);
	return true;
}

bool DataStore_File::save(std::vector<String_Data> &myVector) {
	std::fstream file;
	if (!openFile(file, myFileName)) {
		return false;
	}
	//TODO Factor for crypt
	int size = myVector.size();

	for (int i = 0; i < size; i++) {

	}

	closeFile(file);
	return false;
}

bool DataStore_File::openFile(std::fstream& myfile,
		const std::string& myFileName, std::ios_base::openmode mode) {
	myfile.open(myFileName);
	if (!myfile.is_open()) {
		return false;
	}
	return true;
}

void DataStore_File::closeFile(std::fstream &myfile) {
	if (myfile.is_open()) {
		myfile.close();
	}
}
