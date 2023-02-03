#include "Textbook.h"

using namespace std;


int main(){
	vector<int> rudinProblems;
	rudinProblems.push_back(20);
	rudinProblems.push_back(30);
	rudinProblems.push_back(25);
	rudinProblems.push_back(26);
	rudinProblems.push_back(29);
	rudinProblems.push_back(19);
	rudinProblems.push_back(26);
	rudinProblems.push_back(29);
	rudinProblems.push_back(31);
	rudinProblems.push_back(32);
	rudinProblems.push_back(18);

	Textbook rudin("rudin", 11, rudinProblems);
	vector<int> chapters;

	for(int i = 1; i <= 11; ++i){
		chapters.push_back(i);
	}
	
	rudin.getShuffle(chapters);

}
