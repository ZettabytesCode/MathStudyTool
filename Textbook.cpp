#include "Textbook.h"
#include <cstdlib>
#include <ctime>

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

void Textbook::getShuffle(vector<int> chapsToStudy){
	vector<string> listOfProblems;
	for(int chap : chapsToStudy){
		for(int i = 1; i <= chapters[i].numProblems; ++i){
			listOfProblems.push_back(chap + "." + i);
		}
	}
	
	srand(time(NULL));	
	for(i = listOfProblems.size() - 1; i > 0; --i){
		int randSwap = rand() % (i+1);
		string temp = listOfProblems[i];
		listOfProblems[i] = listOfProblems[randSwap];	
		listOfProblems[randSwap] = listOfProblems[temp];	
	}

	for(string problem : listOfProblems){
		cout << problem << endl;
	}
}
