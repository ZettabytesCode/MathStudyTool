#include <vector>
#include <iostream>
#include <string>


class Textbook{
public:
	class Chapter{
	public:
		int chapterNum;
		int numProblems;
		Chapter(int chapNum, int problems) : chapterNum(chapNum), numProblems(problems) {}
	};
	vector<Chapter> chapters;
	string bookName;
	Textbook(string name, int numChapters, vector<int> numProblems);
	void getShuffle(vector<int> chapsToStudy);
};
