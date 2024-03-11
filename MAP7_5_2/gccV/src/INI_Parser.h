#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

class ini_parser {
public:
	ini_parser(std::string);
	// ������� ������������ ����������� � ������������
	ini_parser(ini_parser& other) = delete;
	ini_parser(ini_parser&& other) = delete;
	ini_parser& operator=(ini_parser& other) = delete;
	ini_parser& operator=(ini_parser&& other) = delete;

	// ������� ��������� �������� ������������ ���� �� ������� ������ ���� Sector1.var1
	template<class T>
	T get_value(std::string);

	~ini_parser() {
		fin.close();
	}

private:
	std::ifstream fin;
	std::map<std::string, std::map<std::string, std::string>> sections; // �������, � ������� ������������ ������ � �� ��������� �� INI �����
	// ������� ��������� ��������� ������ �������
	void ini_parser_error(std::string&, std::string&);
	void ini_parser_type_error(std::string&, std::map<std::string, std::map<std::string, std::string>>&);
};


