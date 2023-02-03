#include "Textbook.h"
#include <cstdlib>
#include <ctime>

using namespace std;

Textbook::Textbook(string name, int numChapters, vector<int> numProblems){
	if(numChapters != numProblems.size()){
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
		for(int i = 1; i <= chapters[chap].numProblems; ++i){
			//cout << to_string(chap) + "." + to_string(i) << endl;
			listOfProblems.push_back(to_string(chap) + "." + to_string(i));
		}
	}
	
	srand(time(NULL));	
	for(int i = listOfProblems.size() - 1; i > 0; --i){
		int randSwap = rand() % (i+1);
		string temp = listOfProblems[i];
		listOfProblems[i] = listOfProblems[randSwap];	
		listOfProblems[randSwap] = temp;	
	}

	for(string problem : listOfProblems){
		cout << problem << endl;
	}
}
