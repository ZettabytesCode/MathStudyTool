#include<vector>
#include<iostream>


class Textbook{
public:
	class Chapter{
	public:
		int chapterNum;
		int numProblems;
		Chapter(int chapNum, int problems) : chapterNum(chapNum), numProblems(problems) {}
	};
	vector<Chapter> chapters;
	Textbook(int numChapters, vector<int> numProblems);
	void getShuffle(vector<int> chapters);
};
