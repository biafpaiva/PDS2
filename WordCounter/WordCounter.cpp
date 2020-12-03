#include "WordCounter.hpp"
#include "Word.hpp"
#include <string.h>
#include <sstream>
#include <algorithm>

using namespace std;

WordCounter::WordCounter(int num_words) {
	words = new Word[num_words];
}

WordCounter::~WordCounter() {
    delete[] words;
}

int WordCounter::jaTem(string vec, int size) {
	int i = 0;
	for (i = 0; i <= size; i++) {
		if (words[i].word == vec) 
			return i;
	}
	return -1;
}

void WordCounter::addWord(string w) {
	int i = 0; int count = 0; int j = 0;
	stringstream ss(w);
	string palavra;
	vector<string> vec;
	while(getline(ss, palavra, ' ')) {
        vec.push_back(palavra);
		count++;
	}
	for (i = 0; i < count; i++) {
		int aux = jaTem(vec[i], size);
		if (aux == -1) {
			words[size].word = vec[i];
			words[size].incrementFreq();
			size++;
		}
		else
			words[aux].incrementFreq();
	}
}
	
void WordCounter::print() const {
	int i = 0;
	vector<string> vec;
	for(i = 0; i < size; i++) {
		vec.push_back(words[i].word + ' ' + to_string(words[i].count));
	}
	sort(vec.begin(), vec.end());
	for (i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
}