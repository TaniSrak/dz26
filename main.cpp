#include <iostream>

struct Movie 
{
	std::string title;
	int year;
	std::string genre;
	unsigned int duration;
	unsigned int price;
};

void print_movie(Movie Kino)
{
	std::cout << Kino.title << std::endl;
	std::cout << Kino.year << std::endl;
	std::cout << Kino.genre << std::endl;
	std::cout << Kino.duration << std::endl;
	std::cout << Kino.price << std::endl;
	std::cout << "\n";
}

Movie expensive(Movie Film[], int length)
{
	Movie Luhari= Film[0];

	for (int i = 0; i < length; i++)
	{
		if (Luhari.price < Film[i].price)
		{
			Luhari = Film[i];
		}
	}
	return Luhari;
}

void update_info(struct Movie* Zamena)
{
	std::cout << "Выберите, какую информацию о фильме необходимо обновить :\n1. Название; \n2. Год; \n3. Жанр; \n4. Продолжительность; \n5. Цена;\n";

	int n;
	std::cin >> n;

	switch (n)
	{
	case 1: std::cout << "Введите новое название фильма -> ";
		std::cin >> Zamena->title; break;
	case 2: std::cout << "Введите новый год -> ";
		std::cin >> Zamena->year; break;
	case 3: std::cout << "Введите новый жанр -> ";
		std::cin >> Zamena->genre; break;
	case 4: std::cout << "Введите новую продолжительность -> ";
		std::cin >> Zamena->duration; break;
	case 5: std::cout << "Введите новую цену -> ";
		std::cin >> Zamena->price; break;
	default: std::cout << "Такого нет";
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	Movie Kino;
	Kino.title = "Interstellar";
	Kino.year = 2014;
	Kino.genre = "Fantastish";
	Kino.duration = 169;
	Kino.price = 500;

	print_movie(Kino);

	Movie Kino2;
	Kino2.title = "Interstellar2";
	Kino2.year = 2014;
	Kino2.genre = "Fantastish";
	Kino2.duration = 169;
	Kino2.price = 5000;

	Movie Kino3;
	Kino3.title = "Interstellar3";
	Kino3.year = 2014;
	Kino3.genre = "Fantastish";
	Kino3.duration = 169;
	Kino3.price = 50000;
	
	Movie massiv[]{ Kino, Kino2, Kino3 };
	std::cout << expensive(massiv, 3).title;

	update_info(&Kino);
	print_movie(Kino);

	return 0;
}