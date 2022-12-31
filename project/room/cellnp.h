#ifndef CELLNP_H
#define CELLNP_H
#include <iostream>
using namespace std;
#include <string>

class cell{
public:
	cell();
	cell(int arowcoord,int acolcoord, string astate);
	int rowcoord;
	int colcoord;
	string state;
	char printout;
    //int currplayerrowcoord;
    //int currplayercolcoord;
	void setrowcoord(int arowcoord);
	int getrowcoord();
	void setcolcoord(int acolcoord);
	int getcolcoord();
	void setstate(string astate);
	string getstate();
	void setprintout(char aprintout);
	virtual void printcell();
    //void move(char direction);
	~cell();
};

#endif
