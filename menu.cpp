/*
 * menu.cpp
 *
 *  Created on: 1 jun. 2020
 *      Author: Santi
 */

#include "menu.h"


Menu::Menu()
{
	salir = true;
}

Menu::~Menu()
{

}

void Menu::ingresar_opcion()
{
	int opcion_ingresada;

	while(salir)
	{
		fflush(stdin);

		std::cout << "\n";
		std::cout << "1 - " << "Consultar que objeto hay en determinada posicion" << std::endl;
		std::cout << "2 - " << "Dar de baja el objeto de cierta posicion" << std::endl;
		std::cout << "3 - " << "Agregar un nuevo objeto de forma manual" << std::endl;
		std::cout << "4 - " << "Listar todos los objetos" << std::endl;
		std::cout << "5 - " << "Indicar la superficie maxima" << std::endl;
		std::cout << "6 - " << "Indicar la superficie minima" << std::endl;
		std::cout << "7 - " << "Finalizar la aplicacion" << std::endl;

		std::cout << "\nIngrese una opcion: ";

		std::cin>>opcion_ingresada;

		opciones(opcion_ingresada);
	}
}

void Menu::opciones(int opcion_ingresada)
{

	switch(opcion_ingresada)
	{
		case 1: pedir_posicion(true); break;
		case 2: pedir_posicion(false); break;
		case 3: pedir_valores(); break;
		case 4: print_list(); break;
		case 5: std::cout << "\nLa superficie maxima es: " << sup_max() << "\n"; break;
		case 6: std::cout << "\nLa supericie minima es: " << sup_min() << "\n"; break;
		case 7: salir = false; break;
	}
}

void Menu::pedir_posicion(bool caso)
{
	int pos, tam;

	tam = get_tam();

	if(caso)
	{
		std::cout << "Ingrese una posicion entre 1 y " << tam << "\ndel dato que quiere visualizar: ";
		std::cin>>pos;
		std:: cout << get_dato(pos) -> mostrar() << std::endl;
	}
	else
	{
		std::cout << "Ingrese una posicion entre 1 y " << tam  << "\ndel dato a eliminar: ";
		std::cin>>pos;
		del_dato(pos);
	}
}

void Menu::pedir_valores()
{
	char fig;
	float n1,n2 = 0;

	std::cout << "Ingrese el tipo de Figura C para Circulo,\nT para Triangulo y R para Rectangulo: ";
	std::cin >> fig;

	if(fig == 'C')
	{
		std::cout << "Ingrese el diametro del circulo: ";
		std::cin >> n1;
		crear_figura(n1);
	}
	else
	{
		std::cout << "Ingrese la base del Triangulo o Rectangulo: ";
		std::cin >> n1;

		std::cout << "Ingrese la altura del Triangulo o Rectangulo: ";
		std::cin >> n2;

		crear_figura(fig,n1,n2);
	}
}
