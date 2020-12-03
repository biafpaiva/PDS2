#ifndef WORDCOUNT
#define WORDCOUNT

#include <map>
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include "Word.hpp"

using namespace std;

class WordCounter {

public:

	Word *words;
	int size = 0;

	WordCounter(int num_words);
	~WordCounter();
	void addWord(string w);
	void print() const;
	int jaTem(string vec, int size);
};

#endif