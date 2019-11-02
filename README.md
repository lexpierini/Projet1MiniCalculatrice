# Projet1MiniCalculatrice

Premier projet d'introduction à programmation École Andre Grasset.

On se propose de créer un logiciel qui offre les fonctions de base d’une calculatrice (Addition, Soustraction, Multiplication et Division), selon 3 versions (sans gérer les opérations unaires + et -).
L’étudiant est tenu de fournir au moins 2 de ces versions dans lesquelles figure la version 1.
Quand on lance le logiciel, le logiciel devrait afficher les menus suivants : 

PROJET 1 – MINI CALCULATRICE
-------------------------------------------------------------------
MENU GENERAL
1)	Nouvelle opération
2)	Définir les paramètres
3)	Aide
Q)	Quitter le logiciel


Quand l’utilisateur choisit :

•	1 - pour Nouvelle Opération, 
Le programme affiche l’un des sous menus suivant, en fonction de celui qui a été défini dans les paramètres. 
La version 1 est définie par défaut.
Version 1 :
Cette version gère uniquement 1 seule opération sur 2 nombre entiers
Exemple d’écran de sortie:

PROJET 1 – MINI CALCULATRICE – VERSION (1)
-------------------------------------------------------------------
SAISIE D’UNE OPERATION : 12+23=35
-------------------------------------------------------------------
Appuyez sur une touche pour revenir au menu général


Version 2 :
Cette version gère des opérations « exactement » comme une calculatrice. 
La contrainte à respecter est que la priorité est donnée en fonction du rang de l’opérateur dans l’expression.
Ainsi l’expression 1 + 2 * 3 – 4 = (((1+2) * 3) – 4) = 5
Exemple d’écran de sortie:

PROJET 1 – MINI CALCULATRICE – VERSION (2)
-------------------------------------------------------------------
SAISIE D’UNE OPERATION : 1 + 2 * 3 – 4 = 5
-------------------------------------------------------------------
Appuyez sur une touche pour revenir au menu général


Version 3 :
Cette version gère aussi des opérations « exactement » comme une calculatrice. 
La contrainte à respecter est que la multiplication et la division sont prioritaires par rapport à l’addition et la soustraction
Ainsi l’expression 1 + 2 * 3 – 4 / 5 = (1+(2 * 3) – (4 / 5)) = 7
Exemple d’écran de sortie:

PROJET 1 – MINI CALCULATRICE – VERSION (2)
-------------------------------------------------------------------
SAISIE D’UNE OPERATION : 1 + 2 * 3 – 4 / 5 = 7
-------------------------------------------------------------------
Appuyez sur une touche pour revenir au menu général


•	2-  pour DEFINIR LES PARAMETRES, 
Le programme affiche plutôt le sous menu suivant

PROJET 1 – MINI CALCULATRICE
-------------------------------------------------------------------
PROPRIETES 
Nom du Programmeur : Votre nom
Date de création : 22/10/2019
Lieu de développement : Institut Grasset
Version en cours : 1.0
-------------------------------------------------------------------
CHOISISSEZ LA VERSION DU LOGICIEL
1-	Additionneuse 	à  1 seule opération
2-	Additionneuse 	Priorité par Rang de l’opération
3-	Additionneuse 	Priorité * et /
Choix : 


•	3-  pour AIDE, le programme affiche plutôt le sous menu suivant

PROJET 1 – MINI CALCULATRICE
-------------------------------------------------------------------
AIDE
Ce logiciel offre les fonctions de base d’une calculatrice (Addition, Soustraction, Multiplication et Division)
1-	Le menu 1 vous amène à la saisie de l’opération
2-	Le menu 2 permet de définir les paramètres du logiciel
3-	Le menu 3 vous propose l’aide que vous lisez actuellement
4-	La touche Q permet de quitter le programme


•	Q-  pour FIN DU PROGRAMME, 
Le programme affiche plutôt le sous menu suivant

PROJET 1 – MINI CALCULATRICE
-------------------------------------------------------------------
FIN DU PROGRAMME
Merci d’avoir utilisé la MiniCalculatrice
-------------------------------------------------------------------
Appuyez sur une touche pour finir


1.2-	 Saisie de l’expression dans la version 2 du logiciel
L’étudiant peut faire des saisies de données sans écho à l’écran dans la version 2 en simulant le fonctionnement des calculatrices réelles. Dans ce cas l’instruction _getch() de C++ peut lui être utile. Il devrait toutefois réafficher le menu après la saisie de chaque élément de l’expression.


1.3-	 Exemple de l’écran de sortie de la version du logiciel non programmée
Afficher uniquement l’écran suivant pour la version qui n’a pas été implémentée

PROJET 1 – MINI CALCULATRICE – VERSION (?)
-------------------------------------------------------------------
Bien vouloir attendre la version d’hivers 2020 du Logiciel
-------------------------------------------------------------------
Appuyez sur une touche pour revenir au menu général