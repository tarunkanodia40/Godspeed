#ifndef _TABLES_H
#define _TABLES_H

#include<bits/stdc++.h>
#include "datatypes.hpp"
using namespace std;


class SymbolTable{

private:
	map< pair<string,string> , DataType*> symbol_table;
	string current_scope;
	vector<int> current_block_numbers;
	int current_block_inside_count;

public:
	void           update_current_scope();
	SymbolTable(): current_block_inside_count(1)        {
		current_block_numbers.resize(1);
		current_block_numbers[0]=0;
		// current_block_numbers[1]=0;
		update_current_scope();
	};
	void           enter_new_scope();
	void 		   exit_latest_scope();
	bool           add_in_symbol_table(pair<string,string> new_key,DataType* new_datatype);
	string         get_current_scope();
	map<pair<string,string>, DataType*>         get_symbol_table_data();

};

class TypesTable{
private:
	map< pair<string,string> ,DataType*> type_table;
public:
	bool 		   								add_in_type_table(pair<string,string> new_key,DataType* new_datatype);
	map<pair<string,string>, DataType*>         get_type_table_data();
};

class BreakLabels{
private:
	vector<string> break_labels_list;
	int            break_labels_list_position;
public:
	BreakLabels(): break_labels_list_position(0) {};
	void           add_new_break_label(string _break_label);
	bool 		   is_empty();
	void           remove_last_break_label();
};

#endif