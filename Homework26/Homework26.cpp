#include <iostream>
#include <string>
#include <cmath>

struct movies {
	std::string title; //Название фильма
	int year{}; // год выхода фильма
	std::string genre; // жанр фильма
	unsigned int duration; //продолжительность фильма в минутах
	unsigned int price; // цена за диск фильма
} m1, m2, m3;


void show_movies(movies M) {

	std::cout << "Название фильма: " << M.title << "\n";
	std::cout << "Год выхода фильма: " << M.year << "\n";
	std::cout << "Жанр фильма: " << M.genre << "\n";
	std::cout << "Продолжительность фильма в минутах: " << M.duration << "\n";
	std::cout << "Цена за диск фильма: " << M.price << "\n";
	}


movies expensive(movies m1, movies m2, movies m3) {
	if (m1.price > m2.price && m1.price > m3.price) {
		std::cout << m1.title << " - самый дорогой фильм.";
		return m1;
	}
	if (m2.price > m1.price && m2.price > m3.price) {
		std::cout << m2.title << " - самый дорогой фильм.";
		return m2;
	}
	if (m3.price > m2.price && m3.price > m1.price) {
		std::cout << m3.title << " - самый дорогой фильм.";
		return m3;
	}
}

void update_info(movies& M) {

	int info;
	std::cout << "Укажите, какую информацию о фильмe вы хотите изменить: " << "\n";
	std::cout << "1. Название." << "\n";
	std::cout << "2. Год выхода." << "\n";
	std::cout << "3. Жанр." << "\n";
	std::cout << "4. Продолжительность." << "\n";
	std::cout << "5. Цена за диск." << "\n";
	std::cin >> info;
	if (info <= 0 || info > 5)
		std::cout << "Ошибка ввода" << "\n";

	switch (info) {
	case 1: std::cout << "Вы выбрали смену названия фильма. Введите название: "; std::cin >> M.title; break; return;
	case 2: std::cout << "Вы выбрали смену года. Введите год: "; std::cin >> M.year; break; return;
	case 3: std::cout << "Вы выбрали смену жанра. Введите жанр: "; std::cin >> M.genre; break; return;
	case 4: std::cout << "Вы выбрали смену продолжительности. Введите продолжительность: "; std::cin >> M.duration; break; return;
	case 5: std::cout << "Вы выбрали смену цены. Введите цену: "; std::cin >> M.price; break; return;
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
	

	// Задача 1. Вывод информации об объекте.
	std::cout << "Задача 1.\n";
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

	// Задача 2. Поиск самой высокой цены за диск.
	std::cout << "Задача 2.\n";
	std::cout << "\n";
	expensive(m1, m2, m3);
	std::cout << "\n\n";

	// Задача 3. Изменение информации.
	std::cout << "Задача 3.\n";
	std::cout << "\n";
	int info;
	std::cout << "Введите фильм, который вы хотите обновить: " << "\n";
	std::cout << "1. Green Mile" << "\n";
	std::cout << "2. Forrest Gump" << "\n";
	std::cout << "3. The Da Vinci Code" << "\n";
	std::cin >> info;
	if (info <= 0 || info > 3)
		std::cout << "Ошибка ввода";

	switch (info) {
	case 1: std::cout << "Вы выбрали фильм -> " << m1.title << "\n"; update_info(m1); show_movies(m1); break;
	case 2: std::cout << "Вы выбрали фильм -> " << m2.title << "\n"; update_info(m2); show_movies(m2); break;
	case 3: std::cout << "Вы выбрали фильм -> " << m3.title << "\n"; update_info(m3); show_movies(m3); break;
	default: break;
	}

	return 0;
}