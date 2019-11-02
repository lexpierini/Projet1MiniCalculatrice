#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>

using namespace std;

// DÉCLARATION DES FONCTIONS
void version1();
void version2();
void version3();
void menuParametres();
void menuAide();
bool estOperateur(char op);


int main() {

	char choixMenuGeneral;

	system("cls");


	cout << setfill('-') << setw(28) << ("-") << endl;
	cout << "PROJET 1 - MINI CALCULATRICE\n";
	cout << setfill('-') << setw(28) << ("-") << endl;
	cout << "MENU GENERAL\n";
	cout << "   1) Nouvelle op\x82ration\n";
	cout << "   2) D""\x82""finir les param\x8Atres\n";
	cout << "   3) Aide\n";
	cout << "   Q) Quitter le logiciel\n";
	cout << setfill('-') << setw(28) << ("-") << endl;
	choixMenuGeneral = _getch();

	switch (choixMenuGeneral)
	{
		case '1': 
			version1();
			break;
		case '2': 
			menuParametres();
			break;
		case '3':
			menuAide();
			break;
		case 'Q':
			return 0;
			break;
		case 'q':
			return 0;
			break;
		default:
			system("cls");
			main();
			break;
	}
}


//LISTE DES FONCTIONS 

void version1(){
	
	string operation = "", operationPropre = "", temp = "";
	int n1 = 0, n2 = 0, resultat = 0;
	char operateur = ' ';

	system("cls");
	cout << "PROJET 1 - MINI CALCULATRICE - VERSION (1)\n";
	cout << setfill('-') << setw(58) << ("-") << endl;
	cout << "SAISIE D\x27UNE OPERATION: ";
	getline(cin, operation);

	//Laisse la variable propre pour une opération mathématique de base.
	for (int i = 0; i < operation.size(); i++)
	{
		if (isdigit(operation[i]) || estOperateur(operation[i]))
		{
			if (isdigit(operation[i]))
			{
				operationPropre = operationPropre + operation[i];
			}
			else if (estOperateur(operationPropre[operationPropre.size()-1]) && operation[i] != '-')
			{
				continue;
			}
			else
			{
				operationPropre = operationPropre + operation[i];
			}
		}
	}

	//Trier les numéros et les opérateurs.
	for ( int i = 0; i < size(operationPropre); i++)
	{
		if (isdigit(operationPropre[i]))
		{
			temp = temp + operationPropre[i];
		}
		else if (estOperateur(operationPropre[i]) && operateur == ' ')
		{
			operateur = operationPropre[i];
			n1 = stoi(temp);
			temp = "";
		}
		else
		{
			temp = temp + operationPropre[i];
		}
	}

	n2 = stoi(temp);

	//Faire les opérations mathématiques.
	switch (operateur)
	{
	case '+':
		resultat = n1 + n2;
		break;
	case '-':
		resultat = n1 - n2;
		break;
	case '*':
		resultat = n1 * n2;
		break;
	case '/':
		resultat = n1 / n2;
		break;

	default:
		cout << "L""\x027""expression que vous avez entr""\0xA7""ée n""\x027""est pas valide.";
		break;
	}

	system("cls");
	cout << "PROJET 1 - MINI CALCULATRICE - VERSION (1)\n";
	cout << setfill('-') << setw(58) << ("-") << endl;
	cout << "SAISIE D\x27UNE OPERATION: " << n1 << operateur << n2 <<" = " << resultat <<endl;
	cout << setfill('-') << setw(58) << ("-") << endl;
	cout << "Appuyez sur une touche pour revenir au menu g\x82n\x82ral\n";
	system("pause >> null");
	main();
}

void version2(){

	string operation, temp;
	int n1 = 0, n2 = 0, resultat = 0;
	char operateur = ' ';

	system("cls");
	cout << "PROJET 1 - MINI CALCULATRICE - VERSION (2)\n";
	cout << setfill('-') << setw(58) << ("-") << endl;
	cout << "SAISIE D\x27UNE OPERATION: ";
	getline(cin, operation);
	
	for (int i = 0; i < size(operation); i++)
	{
		if (isdigit(operation[i]))
		{
			temp = temp + operation[i];
		}
		else if (estOperateur(operation[i]))
		{
			operateur = operation[i];
			n1 = stoi(temp);
			temp = "";
		}

	}

		n2 = stoi(temp);

	switch (operateur)
	{
	case '+':
		resultat = n1 + n2;
		break;
	case '-':
		resultat = n1 - n2;
		break;
	case '*':
		resultat = n1 * n2;
		break;
	case '/':
		resultat = n1 / n2;
		break;

	default:
		cout << "L""\x027""expression que vous avez entr""\0xA7""ée n""\x027""est pas valide.";
		break;
	}

	system("cls");
	cout << "PROJET 1 - MINI CALCULATRICE - VERSION (2)\n";
	cout << setfill('-') << setw(58) << ("-") << endl;
	cout << "SAISIE D\x27UNE OPERATION: " << n1 << operateur << n2 << " = " << resultat << endl;
	cout << setfill('-') << setw(58) << ("-") << endl;
	cout << "Appuyez sur une touche pour revenir au menu g\x82n\x82ral\n";
	system("pause >> null");
	main();
	
}

void version3() {
	
	system("cls");
	cout << "PROJET 1 - MINI CALCULATRICE - VERSION (3)\n";
	cout << setfill('-') << setw(58) << ("-") << endl;
	cout << "Bien vouloir attendre la version d\x27hivers 2020 du logiciel\n";
	cout << setfill('-') << setw(58) << ("-") << endl;
	cout << "Appuyez sur une touche pour revenir au menu g\x82n\x82ral\n";

	system("pause >> null");
	main();
	
}

void menuParametres() {

	char choixParametres;

	system("cls");

	cout << setfill('-') << setw(53) << ("-") << endl;
	cout << "PROJET 1 - MINI CALCULATRICE\n";
	cout << setfill('-') << setw(53) << ("-") << endl;
	cout << "PROPRIETES\n";
	cout << "Nom du Programmeur: Alex Forastier Pierini\n";
	cout << "Date de cr\x82""ation: 2019-10-22\n";
	cout << "Lieu de d\x82veloppement: Institut Grasset\n";
	cout << "Version en cours: 1.0\n";
	cout << setfill('-') << setw(53) << ("-") << endl;
	cout << "CHOISISSEZ LA VERSION DU LOGICIEL\n";
	cout << "   1) Additionneuse \x85 1 seule op\x82ration\n";
	cout << "   2) Additionneuse Priorit\x82 par Rang de l\x27op\x82ration\n";
	cout << "   3) Additionneuse Priorit\x82 \x2A et \x2F\n";
	choixParametres = _getch();
	
	switch (choixParametres)
	{
		case '1': 
			version1(); 
			break;
		case '2':
			version2();
			break;
		case '3':
			version3();
			break;
		default:
			system("cls");
			menuParametres();
			break;
	}
}

void menuAide() {

	system("cls");

	cout << setfill('-') << setw(62) << ("-") << endl;
	cout << "PROJET 1 - MINI CALCULATRICE\n";
	cout << setfill('-') << setw(62) << ("-") << endl;
	cout << "AIDE\n";
	cout << "Ce logiciel offre les fonctions de base d\x27une calculatrice\n ";
	cout << "(Addition, Soustraction, Multiplication et Division)\n\n";
	cout << "1 - Le menu 1 vous am\x8Ane \x85 la saisie de l\x27op\x82ration\n";
	cout << "2 - Le menu 2 permet d\x82""finir les param\x8Atres du logiciel\n";
	cout << "3 - Le menu 3 vous propose l\x27""aide que vous lisez actuellement\n";
	cout << "4 - La touche Q permet de quitter le programme\n";
	cout << setfill('-') << setw(62) << ("-") << endl;
	cout << "Appuyez sur une touche pour revenir au menu g\x82n\x82ral\n";

	system("pause >> null");
	main();
}

int quitter()
{
	system("cls");
	cout << setfill('-') << setw(28) << ("-") << endl;
	cout << "PROJET 1 - MINI CALCULATRICE\n";
	cout << setfill('-') << setw(28) << ("-") << endl;
	cout << "FIN DU PROGRAMME\n";
	cout << "Merci d'avoir utilise la MiniCalculatrice\n";
	cout << setfill('-') << setw(40) << "-" << endl;
	cout << "Appuyez sur une touche pour finir\n";
	return 0;
}

bool estOperateur(char op) {
	return ((op == '+') || (op == '-') || (op == '*') || (op == '/'));
}