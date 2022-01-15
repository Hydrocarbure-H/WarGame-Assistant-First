#include <stdio.h>

int main (int argc, const char * argv[]) {

	
	char prenomJ1[100];
	char prenomJ2[100];
	char prenomJ3[100];
	char armeeJ1[100];
	char armeeJ2[100];
	char armeeJ3[100];
	
	int nombreVehicule = 6;
	int nombreChef = 6;
	int nombreGeneral = 2;
	
	char reponseJoueur[4];
	
	int compteurTour = 0;
   
	
		printf ("\n\n");
	
	printf("Bonjour et bienvenu sur l'assistant du jeu War Game.\n\n Cet assistant va vous aider lors du déroulement de votre tour de jeu.\nPour commencer je vais donc vous demander d'entrer vos noms ainsi que l'armée que vous avez choisi.\n\nRappel :  Si ce jeu est disputé sans son créateur, il est nécessaire de rappeler qu'il se joue exclusivement à trois joueurs.\n\n\n");
	
	printf ("\n\n");
	
	printf ("Je vais donc vous demander d'entrer votre nom, suivi de votre armée.\n");
	
	// JOUEUR 1
	
	printf ("Joueur 1, quel est votre nom?\n");
	
		scanf("%s", prenomJ1);
		printf("Très bien %s, à présent entrez le nom de votre armée\n", prenomJ1);
		
		scanf("%s", armeeJ1);
		printf("Bon %s, vous êtes prêts à commencer la partie, commencez à réfléchir à votre stratégie et laissez la place au joueur 2\n\n", prenomJ1);
		
	// JOUEUR 2
		
	printf ("Joueur 2, quel est votre nom?\n");
		
		scanf("%s", prenomJ2);
		printf("Très bien %s, à présent entrez le nom de votre armée\n", prenomJ2);
		
		scanf("%s", armeeJ2);
		printf("Vous avez un drole de nom %s, mais ce n'est pas le nom qui vous fera gagner la partie. Vous êtes prêts à commencer la partie, commencez à réfléchir à votre stratégie et laissez la place au joueur 3\n\n", prenomJ2);
		
	// JOUEUR 3
		
	printf ("Joueur 3, quel est votre nom?\n");
		
		scanf("%s", prenomJ3);
		printf("Très bien %s, à présent entrez le nom de votre armée\n", prenomJ3);
		
		scanf("%s", armeeJ3);
		printf("Bon %s, vous êtes prêts à commencer la partie, affinez rapidement votre stratégie car le jeu est sur le point de débuter.\n\n", prenomJ3);
		
		printf("A présent que tous les joueurs sont près, c'est a dire %s, %s, %s, nous pouvons commencer la partie. Bonnes fusillades, et que le meilleur ( ou le pire) gagne!\n\n\n",prenomJ1, prenomJ2, prenomJ3);
		
		
		// DEBUT DE LA PARTIE 
		//LES JOUEURS SONT EN TRAINS DE DISPOSER LEURS PIONS
		
		printf("Que chaque joueur récupère 1 Char, 40 soldats de son choix, 1 jeep, 2 généraux ainsi que 2 chefs\n\n");
		
		
		
	do
	{
			
			//TOUR JOUEUR 1
			
			printf("C'est au tour de %s de jouer.\n", prenomJ1);
		
		printf("%s, après avoir écrit sur votre journal de bord les éléments de votre attaque, veuillez recupérer vos bataillons: Il vous reste exactement %d véhicules ainsi que %d chefs.\nVous obtenez à ce tour 20 soldats, 1 véhicule, 1 chef.\n\n", prenomJ1, nombreVehicule, nombreChef);
		
		printf("Executez les actions prévues sur votre journal de bord\n\n");
		
		printf("Effectuez les combats nécessaires à la réussite de votre stratégie\n\n");
		
		printf("Tapez oui des que vous avez terminé votre tour de jeu\n");
			
		scanf("%s", reponseJoueur);
		

		
		
		
		//TOUR JOUEUR 2
		
		printf("A présent, il s'agit de notre champion toutes catégories, %s !!!!\n\n", prenomJ2);
		
		printf("C'est au tour de %s de jouer.\n", prenomJ2);
		
		printf("%s, après avoir écrit sur votre journal de bord les éléments de votre attaque, veuillez recupérer vos bataillons: Il vous reste exactement %d véhicules ainsi que %d chefs.\nVous obtenez à ce tour 20 soldats, 1 véhicule, 1 chef.\n\n", prenomJ2, nombreVehicule, nombreChef);
		
		printf("Executez les actions prévues sur votre journal de bord\n\n");
		
		printf("Effectuez les combats nécessaires à la réussite de votre stratégie\n\n");
		
		printf("Tapez oui des que vous avez terminé votre tour de jeu");
		
		scanf("%s", reponseJoueur);
		
	
		
	
		
		
		
			//TOUR JOUEUR 3
		printf("Et pour terminer ce tour de jeu, %s, c'est de vous qu'i s'agit", prenomJ3);
		
		printf("%s, après avoir écrit sur votre journal de bord les éléments de votre attaque, veuillez recupérer vos bataillons: Il vous reste exactement %d véhicules ainsi que %d chefs.\nVous obtenez à ce tour 20 soldats, 1 véhicule, 1 chef.\n\n", prenomJ3, nombreVehicule, nombreChef);
		
		printf("Executez les actions prévues sur votre journal de bord\n\n");
		
		printf("Effectuez les combats nécessaires à la réussite de votre stratégie\n\n");
		
		printf("Tapez oui des que vous avez terminé votre tour de jeu\n");
		
		scanf("%s", reponseJoueur);
		
		
		
		
		compteurTour++;
		nombreVehicule--;
		nombreChef--; 
		
		
	}while (compteurTour<5);
	
	printf("\n\n\n");
	printf("Cela fait 5 tours que vous jouez. Vous avez donc LE DROIT DE REANIMER 20 soldats MORTS AU COMBAT de votre choix.\n\n\n");
	
	do
	{
		
		//TOUR JOUEUR 1
		
		printf("C'est au tour de %s de jouer.\n", prenomJ1);
		
		printf("%s, après avoir écrit sur votre journal de bord les éléments de votre attaque, veuillez recupérer vos bataillons: Il vous reste exactement %d véhicules ainsi que %d chefs.\nVous obtenez à ce tour 20 soldats, 1 véhicule, 1 chef.\n\n", prenomJ1, nombreVehicule, nombreChef);
		
		printf("Executez les actions prévues sur votre journal de bord\n\n");
		
		printf("Effectuez les combats nécessaires à la réussite de votre stratégie\n\n");
		
		printf("Tapez oui des que vous avez terminé votre tour de jeu\n");
		
		scanf("%s", reponseJoueur);
		
		
		
		
		
		//TOUR JOUEUR 2
		
		printf("A présent, il s'agit de notre champion toutes catégories, %s !!!!\n\n", prenomJ2);
		
		printf("C'est au tour de %s de jouer.\n", prenomJ2);
		
		printf("%s, après avoir écrit sur votre journal de bord les éléments de votre attaque, veuillez recupérer vos bataillons: Il vous reste exactement %d véhicules ainsi que %d chefs.\nVous obtenez à ce tour 20 soldats, 1 véhicule, 1 chef.\n\n", prenomJ2, nombreVehicule, nombreChef);
		
		printf("Executez les actions prévues sur votre journal de bord\n\n");
		
		printf("Effectuez les combats nécessaires à la réussite de votre stratégie\n\n");
		
		printf("Tapez oui des que vous avez terminé votre tour de jeu");
		
		scanf("%s", reponseJoueur);
		
		
		
		
		
		
		
		//TOUR JOUEUR 3
		printf("Et pour terminer ce tour de jeu, %s, c'est de vous qu'i s'agit", prenomJ3);
		
		printf("%s, après avoir écrit sur votre journal de bord les éléments de votre attaque, veuillez recupérer vos bataillons: Il vous reste exactement %d véhicules ainsi que %d chefs.\nVous obtenez à ce tour 20 soldats, 1 véhicule, 1 chef.\n\n", prenomJ3, nombreVehicule, nombreChef);
		
		printf("Executez les actions prévues sur votre journal de bord\n\n");
		
		printf("Effectuez les combats nécessaires à la réussite de votre stratégie\n\n");
		
		printf("Tapez oui des que vous avez terminé votre tour de jeu\n");
		
		scanf("%s", reponseJoueur);
		
		
		
		
		compteurTour++;
		nombreVehicule--;
		nombreChef--; 
		
		
	}while (compteurTour<10);
	
	printf("\n\n\n");
	printf("Cela fait 10 tours que vous jouez. Vous avez donc LE DROIT DE REANIMER 20 soldats MORTS AU COMBAT de votre choix.\n\n\n");
	
	do
	{
		
		//TOUR JOUEUR 1
		
		printf("C'est au tour de %s de jouer.\n", prenomJ1);
		
		printf("%s, après avoir écrit sur votre journal de bord les éléments de votre attaque, veuillez recupérer vos bataillons: Il vous reste exactement %d véhicules ainsi que %d chefs.\nVous obtenez à ce tour 20 soldats, 1 véhicule, 1 chef.\n\n", prenomJ1, nombreVehicule, nombreChef);
		
		printf("Executez les actions prévues sur votre journal de bord\n\n");
		
		printf("Effectuez les combats nécessaires à la réussite de votre stratégie\n\n");
		
		printf("Tapez oui des que vous avez terminé votre tour de jeu\n");
		
		scanf("%s", reponseJoueur);
		
		
		
		
		
		//TOUR JOUEUR 2
		
		printf("A présent, il s'agit de notre champion toutes catégories, %s !!!!\n\n", prenomJ2);
		
		printf("C'est au tour de %s de jouer.\n", prenomJ2);
		
		printf("%s, après avoir écrit sur votre journal de bord les éléments de votre attaque, veuillez recupérer vos bataillons: Il vous reste exactement %d véhicules ainsi que %d chefs.\nVous obtenez à ce tour 20 soldats, 1 véhicule, 1 chef.\n\n", prenomJ2, nombreVehicule, nombreChef);
		
		printf("Executez les actions prévues sur votre journal de bord\n\n");
		
		printf("Effectuez les combats nécessaires à la réussite de votre stratégie\n\n");
		
		printf("Tapez oui des que vous avez terminé votre tour de jeu");
		
		scanf("%s", reponseJoueur);
		
		
		
		
		
		
		
		//TOUR JOUEUR 3
		printf("Et pour terminer ce tour de jeu, %s, c'est de vous qu'i s'agit", prenomJ3);
		
		printf("%s, après avoir écrit sur votre journal de bord les éléments de votre attaque, veuillez recupérer vos bataillons: Il vous reste exactement %d véhicules ainsi que %d chefs.\nVous obtenez à ce tour 20 soldats, 1 véhicule, 1 chef.\n\n", prenomJ3, nombreVehicule, nombreChef);
		
		printf("Executez les actions prévues sur votre journal de bord\n\n");
		
		printf("Effectuez les combats nécessaires à la réussite de votre stratégie\n\n");
		
		printf("Tapez oui des que vous avez terminé votre tour de jeu\n");
		
		scanf("%s", reponseJoueur);
		
		
		
		
		compteurTour++;
		nombreVehicule--;
		nombreChef--; 
		
		
	}while (compteurTour<15);
	
	printf("\n\n\n");
	printf("Cela fait 15 tours que vous jouez. Vous avez donc LE DROIT DE REANIMER 20 soldats MORTS AU COMBAT de votre choix.\n\n\n");
	
	do
	{
		
		//TOUR JOUEUR 1
		
		printf("C'est au tour de %s de jouer.\n", prenomJ1);
		
		printf("%s, après avoir écrit sur votre journal de bord les éléments de votre attaque, veuillez recupérer vos bataillons: Il vous reste exactement %d véhicules ainsi que %d chefs.\nVous obtenez à ce tour 20 soldats, 1 véhicule, 1 chef.\n\n", prenomJ1, nombreVehicule, nombreChef);
		
		printf("Executez les actions prévues sur votre journal de bord\n\n");
		
		printf("Effectuez les combats nécessaires à la réussite de votre stratégie\n\n");
		
		printf("Tapez oui des que vous avez terminé votre tour de jeu\n");
		
		scanf("%s", reponseJoueur);
		
		
		
		
		
		//TOUR JOUEUR 2
		
		printf("A présent, il s'agit de notre champion toutes catégories, %s !!!!\n\n", prenomJ2);
		
		printf("C'est au tour de %s de jouer.\n", prenomJ2);
		
		printf("%s, après avoir écrit sur votre journal de bord les éléments de votre attaque, veuillez recupérer vos bataillons: Il vous reste exactement %d véhicules ainsi que %d chefs.\nVous obtenez à ce tour 20 soldats, 1 véhicule, 1 chef.\n\n", prenomJ2, nombreVehicule, nombreChef);
		
		printf("Executez les actions prévues sur votre journal de bord\n\n");
		
		printf("Effectuez les combats nécessaires à la réussite de votre stratégie\n\n");
		
		printf("Tapez oui des que vous avez terminé votre tour de jeu");
		
		scanf("%s", reponseJoueur);
		
		
		
		
		
		
		
		//TOUR JOUEUR 3
		printf("Et pour terminer ce tour de jeu, %s, c'est de vous qu'i s'agit", prenomJ3);
		
		printf("%s, après avoir écrit sur votre journal de bord les éléments de votre attaque, veuillez recupérer vos bataillons: Il vous reste exactement %d véhicules ainsi que %d chefs.\nVous obtenez à ce tour 20 soldats, 1 véhicule, 1 chef.\n\n", prenomJ3, nombreVehicule, nombreChef);
		
		printf("Executez les actions prévues sur votre journal de bord\n\n");
		
		printf("Effectuez les combats nécessaires à la réussite de votre stratégie\n\n");
		
		printf("Tapez oui des que vous avez terminé votre tour de jeu\n");
		
		scanf("%s", reponseJoueur);
		
		
		
		
		compteurTour++;
		nombreVehicule--;
		nombreChef--; 
		
		
	}while (compteurTour<20);
	
	printf("\n\n\n");
	printf("Cela fait 20 tours que vous jouez. Vous avez donc LE DROIT DE REANIMER 20 soldats MORTS AU COMBAT de votre choix.\n\n\n");
	
	do
	{
		
		//TOUR JOUEUR 1
		
		printf("C'est au tour de %s de jouer.\n", prenomJ1);
		
		printf("%s, après avoir écrit sur votre journal de bord les éléments de votre attaque, veuillez recupérer vos bataillons: Il vous reste exactement %d véhicules ainsi que %d chefs.\nVous obtenez à ce tour 20 soldats, 1 véhicule, 1 chef.\n\n", prenomJ1, nombreVehicule, nombreChef);
		
		printf("Executez les actions prévues sur votre journal de bord\n\n");
		
		printf("Effectuez les combats nécessaires à la réussite de votre stratégie\n\n");
		
		printf("Tapez oui des que vous avez terminé votre tour de jeu\n");
		
		scanf("%s", reponseJoueur);
		
		
		
		
		
		//TOUR JOUEUR 2
		
		printf("A présent, il s'agit de notre champion toutes catégories, %s !!!!\n\n", prenomJ2);
		
		printf("C'est au tour de %s de jouer.\n", prenomJ2);
		
		printf("%s, après avoir écrit sur votre journal de bord les éléments de votre attaque, veuillez recupérer vos bataillons: Il vous reste exactement %d véhicules ainsi que %d chefs.\nVous obtenez à ce tour 20 soldats, 1 véhicule, 1 chef.\n\n", prenomJ2, nombreVehicule, nombreChef);
		
		printf("Executez les actions prévues sur votre journal de bord\n\n");
		
		printf("Effectuez les combats nécessaires à la réussite de votre stratégie\n\n");
		
		printf("Tapez oui des que vous avez terminé votre tour de jeu");
		
		scanf("%s", reponseJoueur);
		
		
		
		
		
		
		
		//TOUR JOUEUR 3
		printf("Et pour terminer ce tour de jeu, %s, c'est de vous qu'i s'agit", prenomJ3);
		
		printf("%s, après avoir écrit sur votre journal de bord les éléments de votre attaque, veuillez recupérer vos bataillons: Il vous reste exactement %d véhicules ainsi que %d chefs.\nVous obtenez à ce tour 20 soldats, 1 véhicule, 1 chef.\n\n", prenomJ3, nombreVehicule, nombreChef);
		
		printf("Executez les actions prévues sur votre journal de bord\n\n");
		
		printf("Effectuez les combats nécessaires à la réussite de votre stratégie\n\n");
		
		printf("Tapez oui des que vous avez terminé votre tour de jeu\n");
		
		scanf("%s", reponseJoueur);
		
		
		
		
		compteurTour++;
		nombreVehicule--;
		nombreChef--; 
		
		
	}while (compteurTour<25);
	
	printf("\n\n\n");
	printf("Cela fait 25 tours que vous jouez. Vous avez donc LE DROIT DE REANIMER 20 soldats MORTS AU COMBAT de votre choix.\n\n\n");
	
	do
	{
		
		//TOUR JOUEUR 1
		
		printf("C'est au tour de %s de jouer.\n", prenomJ1);
		
		printf("%s, après avoir écrit sur votre journal de bord les éléments de votre attaque, veuillez recupérer vos bataillons: Il vous reste exactement %d véhicules ainsi que %d chefs.\nVous obtenez à ce tour 20 soldats, 1 véhicule, 1 chef.\n\n", prenomJ1, nombreVehicule, nombreChef);
		
		printf("Executez les actions prévues sur votre journal de bord\n\n");
		
		printf("Effectuez les combats nécessaires à la réussite de votre stratégie\n\n");
		
		printf("Tapez oui des que vous avez terminé votre tour de jeu\n");
		
		scanf("%s", reponseJoueur);
		
		
		
		
		
		//TOUR JOUEUR 2
		
		printf("A présent, il s'agit de notre champion toutes catégories, %s !!!!\n\n", prenomJ2);
		
		printf("C'est au tour de %s de jouer.\n", prenomJ2);
		
		printf("%s, après avoir écrit sur votre journal de bord les éléments de votre attaque, veuillez recupérer vos bataillons: Il vous reste exactement %d véhicules ainsi que %d chefs.\nVous obtenez à ce tour 20 soldats, 1 véhicule, 1 chef.\n\n", prenomJ2, nombreVehicule, nombreChef);
		
		printf("Executez les actions prévues sur votre journal de bord\n\n");
		
		printf("Effectuez les combats nécessaires à la réussite de votre stratégie\n\n");
		
		printf("Tapez oui des que vous avez terminé votre tour de jeu");
		
		scanf("%s", reponseJoueur);
		
		
		
		
		
		
		
		//TOUR JOUEUR 3
		printf("Et pour terminer ce tour de jeu, %s, c'est de vous qu'i s'agit", prenomJ3);
		
		printf("%s, après avoir écrit sur votre journal de bord les éléments de votre attaque, veuillez recupérer vos bataillons: Il vous reste exactement %d véhicules ainsi que %d chefs.\nVous obtenez à ce tour 20 soldats, 1 véhicule, 1 chef.\n\n", prenomJ3, nombreVehicule, nombreChef);
		
		printf("Executez les actions prévues sur votre journal de bord\n\n");
		
		printf("Effectuez les combats nécessaires à la réussite de votre stratégie\n\n");
		
		printf("Tapez oui des que vous avez terminé votre tour de jeu\n");
		
		scanf("%s", reponseJoueur);
		
		
		
		
		compteurTour++;
		nombreVehicule--;
		nombreChef--; 
		
		
	}while (compteurTour<30);
	
	printf("\n\n\n");
	printf("Cela fait 30 tours que vous jouez. Vous avez donc LE DROIT DE REANIMER 20 soldats MORTS AU COMBAT de votre choix.\n\n\n");
	
	
	
	
	printf("Vous noterez que le créateur n'a certes pas une vie très intérressante, cependant il a quand même mieux a faire que de faire des dizaines de copier-coller... Donc vous êtes prié d'aller gentiment vous faire la guerre ailleurs, parce que moi j'ai faim... Bonne soirée, enfin bonne nuit, enfin bonjour pardonnez moi.");
    return 0;
}
