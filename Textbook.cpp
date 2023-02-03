#include "Textbook.h"

using namespace std;

Textbook::Textbook(string name, int numChapters, vector<int> numProblems){
	if(numChapters != numProblems.size();){
		cout << "Error loading Textbook: " << name << endl;
		return;
	}
	
	bookName = name;
	for(int i = 0; i < numChapters; ++i){
		Chapter chapter(i+1, numProblems[i]);
		chapters.push_back(chapter);	
	}
}
