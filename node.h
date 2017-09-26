/*
FILENAME:		node.h
AUTHOR:			eric phung
DATE:			2017.09.24
PUROSE:			Node struct header file for Multilist Assignment in cs362 (Data Structures)
*/

struct Node {
	//Object data;// defined in Object class file
	Node *prev;
	Node *next;

	Node(
		//const Object & d = Object{},
		Node * p = nullptr,
		Node * n = nullptr)
/*	: data{d},
	prev{p},
	next{n}*/{
	printf("Created an empty Node\n");

	}

	Node(
		Object & d,
		Node * p = nullptr,
		Node * n = nullptr)
/*	: data{std::move(d)}
	,prev{p},
	next{n}*/{
	printf("Created a Node with an Object\n");

	}
	
};