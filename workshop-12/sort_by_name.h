#ifndef SORTBYNAME_H
#define SORTBYNAME_H
#include <string>
#include "animal.h"
using namespace std;

class sort_by_name{
public:
    static void sort(animal **animals,int n);
};

#endif
