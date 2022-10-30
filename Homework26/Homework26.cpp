#include <iostream>
#include <string>
#include <cmath>

struct movies {
	std::string title; //�������� ������
	int year{}; // ��� ������ ������
	std::string genre; // ���� ������
	unsigned int duration; //����������������� ������ � �������
	unsigned int price; // ���� �� ���� ������
} m1, m2, m3;


void show_movies(movies M) {

	std::cout << "�������� ������: " << M.title << "\n";
	std::cout << "��� ������ ������: " << M.year << "\n";
	std::cout << "���� ������: " << M.genre << "\n";
	std::cout << "����������������� ������ � �������: " << M.duration << "\n";
	std::cout << "���� �� ���� ������: " << M.price << "\n";
	}


movies expensive(movies m1, movies m2, movies m3) {
	if (m1.price > m2.price && m1.price > m3.price) {
		std::cout << m1.title << " - ����� ������� �����.";
		return m1;
	}
	if (m2.price > m1.price && m2.price > m3.price) {
		std::cout << m2.title << " - ����� ������� �����.";
		return m2;
	}
	if (m3.price > m2.price && m3.price > m1.price) {
		std::cout << m3.title << " - ����� ������� �����.";
		return m3;
	}
}

void update_info(movies& M) {

	int info;
	std::cout << "�������, ����� ���������� � �����e �� ������ ��������: " << "\n";
	std::cout << "1. ��������." << "\n";
	std::cout << "2. ��� ������." << "\n";
	std::cout << "3. ����." << "\n";
	std::cout << "4. �����������������." << "\n";
	std::cout << "5. ���� �� ����." << "\n";
	std::cin >> info;
	if (info <= 0 || info > 5)
		std::cout << "������ �����" << "\n";

	switch (info) {
	case 1: std::cout << "�� ������� ����� �������� ������. ������� ��������: "; std::cin >> M.title; break; return;
	case 2: std::cout << "�� ������� ����� ����. ������� ���: "; std::cin >> M.year; break; return;
	case 3: std::cout << "�� ������� ����� �����. ������� ����: "; std::cin >> M.genre; break; return;
	case 4: std::cout << "�� ������� ����� �����������������. ������� �����������������: "; std::cin >> M.duration; break; return;
	case 5: std::cout << "�� ������� ����� ����. ������� ����: "; std::cin >> M.price; break; return;
	default: break; return;
	}
	std::cout << "\n";
}

int main() {
	setlocale(LC_ALL, "Russian");

	movies m1;
	m1.title = "Green Mile";
	m1.year = 1999;
	m1.genre = "drama";
	m1.duration = 189;
	m1.price = 500;
	
	movies m2;
	m2.title = "Forrest Gump";
	m2.year = 1994;
	m2.genre = "melodrama";
	m2.duration = 142;
	m2.price = 670;
	
	movies m3;
	m3.title = "The Da Vinci Code";
	m3.year = 2006;
	m3.genre = "detective";
	m3.duration = 149;
	m3.price = 590;
	

	// ������ 1. ����� ���������� �� �������.
	std::cout << "������ 1.\n";
	std::cout << "\n";
	show_movies(m1);
	std::cout << "---------------------------------";
	std::cout << "\n";
	show_movies(m2);
	std::cout << "---------------------------------";
	std::cout << "\n";
	show_movies(m3);
	std::cout << "---------------------------------";
	std::cout << "\n\n";

	// ������ 2. ����� ����� ������� ���� �� ����.
	std::cout << "������ 2.\n";
	std::cout << "\n";
	expensive(m1, m2, m3);
	std::cout << "\n\n";

	// ������ 3. ��������� ����������.
	std::cout << "������ 3.\n";
	std::cout << "\n";
	int info;
	std::cout << "������� �����, ������� �� ������ ��������: " << "\n";
	std::cout << "1. Green Mile" << "\n";
	std::cout << "2. Forrest Gump" << "\n";
	std::cout << "3. The Da Vinci Code" << "\n";
	std::cin >> info;
	if (info <= 0 || info > 3)
		std::cout << "������ �����";

	switch (info) {
	case 1: std::cout << "�� ������� ����� -> " << m1.title << "\n"; update_info(m1); show_movies(m1); break;
	case 2: std::cout << "�� ������� ����� -> " << m2.title << "\n"; update_info(m2); show_movies(m2); break;
	case 3: std::cout << "�� ������� ����� -> " << m3.title << "\n"; update_info(m3); show_movies(m3); break;
	default: break;
	}

	return 0;
}