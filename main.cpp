/*
FILENAME:	main.cpp
AUTHOR:		eric phung
PURPOSE:	main cpp file (driver) for multilist program assignment in cs362 (Data Structures)
DATE:		2017.09.22
*/
//#include <stdio.h>
//#include "utility.h"
#include <iostream>
#include "object.h"
#include "node.h"
#include "list.h"

int main(){

	//Node node; //create empty node struct with empty object as property

	Object data;// create an object
	Node node = Node(data);// create node with an object


	printf("hello MultiList\n");
	return 0;
}// end main program