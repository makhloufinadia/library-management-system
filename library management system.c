#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>

typedef struct ouvrage {
	int cote ; 
	char titre [50];
	int nbr_exempler_dans ;
    int	nbr_exempler_empruntes ;
    struct ouvrage *suiv;
} ouvrage;
typedef struct etudiant {
 	double matricule;
 	int penalite;
 	char abonnement;
 	struct etudiant *suiv;
 	
 }etudiant;
 //initialisation
ouvrage *tete1=NULL;
ouvrage *initialiser( ouvrage *tete1){
    ouvrage *livre1,*livre2,*livre3,*livre4,*livre5, *ptr;
livre1 = (ouvrage*)malloc (sizeof(ouvrage));
livre1->suiv=NULL;
tete1=livre1;
livre1->cote=125;
strcpy(livre1->titre,"alchimist");
livre1->nbr_exempler_dans=7 ;
livre1->nbr_exempler_empruntes=3 ;
ptr=livre1;
 ////

livre2 = (ouvrage*)malloc (sizeof(ouvrage));
livre2->suiv=NULL;
livre2->cote=126;
strcpy(livre2->titre,"le petit prince");
livre2->nbr_exempler_dans=25 ;
livre2->nbr_exempler_empruntes=5 ;
 ptr->suiv=livre2;
 ptr=livre2;
 ///
 
livre3 = (ouvrage*)malloc (sizeof(ouvrage));
livre3->suiv=NULL;
livre3->cote=127;

strcpy(livre3->titre,"100 deadly skills");
livre3->nbr_exempler_dans=6 ;
livre3->nbr_exempler_empruntes=1 ;
ptr->suiv=livre3;
ptr=livre3;
 ////

livre4 = (ouvrage*)malloc (sizeof(ouvrage));
livre4->suiv=NULL;
livre4->cote=128;
strcpy(livre4->titre,"hell yeah or no");
livre4->nbr_exempler_dans=13 ;
livre4->nbr_exempler_empruntes=4 ;
ptr->suiv=livre4;
ptr=livre4;
 ///
 
livre5 = (ouvrage*)malloc (sizeof(ouvrage));
livre5->suiv=NULL;
livre5->cote=129;
strcpy(livre5->titre,"the fault in our stars");
livre5->nbr_exempler_dans=15 ;
livre5->nbr_exempler_empruntes=4 ;
ptr->suiv=livre5;
return tete1;
}
//void afficher(){}
void afficher(ouvrage *tete1)
{
	
    ouvrage *ptr;
    printf("\t-------------la liste des ouvrages----------------\n");
    
        ptr = tete1;
        while(ptr != NULL)
        {
            printf("\n\t******************** ouvrage *********************\n");
        printf("\n\t_________________________________________________\n");
        printf("\n\t\t la cote: %d",ptr->cote);
        printf("\n\t\t le titre: %s",ptr->titre);
        printf("\n\t\t nombre d'exemplaire': %d",ptr->nbr_exempler_dans);
        printf("\n\t\t nombre d'exemplaire empruntes: %d",ptr->nbr_exempler_empruntes);
        printf("\n\t_________________________________________________\n");
        printf("\n\n\t*************************************************\n");
	       
            ptr = ptr->suiv;                    
        }
        
    
    printf("\n\n\t appuyer sur une touche pour continuer\n");
    getch();
}

ouvrage *remplir (ouvrage *tete1){
	ouvrage *ptr, *livre;
		livre=(ouvrage *)malloc(sizeof(ouvrage*));

        printf("\n\n");
	printf("\n\t*************************************************\n");
		printf("\n\t\tdonne le titre  de ouvrage  ") ;
		scanf ("%s",livre->titre);
		printf ("\n\t\tle nombre d'exemplaire  :    ");
		scanf("%d",&livre->nbr_exempler_dans);
			printf ("\n\t\tle nombre d'exemplaire emprunte:      ");
		scanf("%d",&livre->nbr_exempler_empruntes);
		printf ("\n\t\tla cote:     ");
        scanf("%d",&livre->cote);
        printf("\n\t\tl'ajout a ete fait avec sucess yeyy!!");
		livre->suiv=NULL;
		if(tete1==NULL){
			tete1=livre;
		}else {
			ptr=tete1;
			while(ptr->suiv != NULL){
				ptr=ptr->suiv;
			}
			ptr->suiv=livre;

		}
		return tete1;
		  
	}
	ouvrage *supprimer(ouvrage *tete1){
    ouvrage  *ptr,*temp;
    int i=0;int cote;
    printf("entrer la cote:");
    scanf("%d",&cote);
    ptr=tete1->suiv;temp=tete1;
    
    if(temp != NULL && temp->cote == cote)
    {
    	tete1 = ptr;
    	free(temp);
	}
    else
    {
    	while(ptr!= NULL && ptr->cote != cote)
    	{
    		ptr = ptr->suiv;
    	
    		temp = temp->suiv;
    		i++;
		}
		if(ptr == NULL)
			printf("ce etudiant n'existe pas");
		else
		{
			temp->suiv = ptr->suiv;
			ptr->suiv = NULL;
			free(ptr);
		}
	}
    
    
    return tete1;
}

	etudiant *tete2=NULL;
etudiant *initialiser_etud (etudiant *tete2){
	
etudiant *ptr, *etud1, *etud2,*etud3, *etud4, *etud5;
etud1 = (etudiant*)malloc (sizeof(etudiant));
etud1->suiv=NULL;
tete2=etud1;
etud1->matricule=202038009084;
etud1->penalite=7;
etud1->abonnement='c';
ptr=etud1;
////

etud2 = (etudiant*)malloc (sizeof(etudiant));
etud2->suiv=NULL;
etud2->matricule=202038000002;
etud2->penalite=4;
etud2->abonnement='c';
ptr->suiv=etud2;
ptr=etud2;
////

etud3 = (etudiant*)malloc (sizeof(etudiant));
etud3->suiv=NULL;
etud3->matricule=202038000003;
etud3->penalite=0;
etud3->abonnement='p';
ptr->suiv=etud3;
ptr=etud3;
/////

etud4 = (etudiant*)malloc (sizeof(etudiant));
etud4->suiv=NULL;
etud4->matricule=202038000004;
etud4->penalite=0;
etud4->abonnement='p';
ptr->suiv=etud4;
ptr=etud4;

/////

etud5 = (etudiant*)malloc (sizeof(etudiant));
etud5->suiv=NULL; 
etud5->matricule=202038000005;
etud5->penalite=0;
etud5->abonnement='c';
ptr->suiv=etud5;
ptr=etud5;
return tete2;

}

//void  listeEtud(){}
void afficher_etud(etudiant *tete2){
	etudiant *ptr;
	printf("\n\n");
	printf("\n\t*************************************************\n");
	printf("\t---------------la liste des etudiants--------------\n");
ptr = tete2;
        while(ptr != NULL)
        {
	printf("\n\t******************etudiant *********************\n");
    printf("\n\t________________________________________________\n");
        printf("\n\t\t le matricule: %1f",ptr->matricule);
        printf("\n\t\t la penalite: %d",ptr->penalite);
        printf("\n\t\t type d'abonnement': %c",ptr->abonnement);
        
    printf("\n\t________________________________________________ \n");
    printf("\n\t*************************************************\n");
        ptr=ptr->suiv;
	
}
    printf("\tappuyez sur une touche pour continuer:");
	getch();
}
etudiant *ajouter(etudiant *tete2){
	etudiant *student, *ptr;
	student =(etudiant*)malloc(sizeof(etudiant));
	printf("\n\t entrer les details de l'etudiant:\n ");
	printf("\n\t la matricule:");
	scanf("%1f",&student->matricule);
	printf("\n\t la penalite:");
	scanf("%d",&student->penalite);
	printf("\n\t le type d'abonnement':");
	scanf("%c",student->abonnement);
	student->suiv=NULL;
	if(tete2=NULL){
		tete2=student;
	}else{
	
	ptr=tete2;
			while(ptr->suiv != NULL){
				ptr=ptr->suiv;
			}
			ptr->suiv=student;
		}
		return tete2;
		getch();
}

// supprimer un membre  //
etudiant *supprimer_etud(etudiant *tete2){
    etudiant  *ptr,*temp;
    int i=0;double matricule;
    printf("entrer la matricule:");
    scanf("%1f",&matricule);
    ptr=tete2->suiv;temp=tete2;
    
    if(temp != NULL && temp->matricule == matricule)
    {
    	tete2 = ptr;
    	free(temp);
	}
    else
    {
    	while(ptr!= NULL && ptr->matricule != matricule)
    	{
    		ptr = ptr->suiv;
    	
    		temp = temp->suiv;
    		i++;
		}
		if(ptr == NULL)
			printf("ce etudiant n'existe pas");
		else
		{
			temp->suiv = ptr->suiv;
			ptr->suiv = NULL;
			free(ptr);
		}
	}
    
    
    return tete2;
}
etudiant* modifier_etud(etudiant *tete2)
{
	etudiant liste = *tete2;
	etudiant *ptr;
    int choix;
    int mat;

    ptr=tete2;
    printf("Donner la matricule de l'etudiant qui va modifier :");
	scanf("%d",&mat);
    while(ptr!=NULL && ptr->matricule != mat )
    ptr= ptr->suiv;
    if (ptr!=NULL)
     {
	 etudiant nev= *tete2 ;
     printf("Donner les nouvaux information de ce membre :\n");
			printf("Matricule : ");scanf("%d",&nev.matricule);
			printf("Penalite : "); scanf("%d",&nev.penalite);
    etudiant inter =*tete2;
    do{
				printf("Type (c pour Classic / p pour Prenuim) : ");
				scanf("%s",&inter.abonnement);
			}while(nev.abonnement != 'c' && nev.abonnement != 'p');
			return tete2;
}
    else
        {
		printf("on a pas pu trouver l'etudiant resseyer encore une fois\n");}
        printf("\t  appuyez sur une touche pour continuer:");
	    getch();
}

///partie etudiant
void retourner_menuEtud(ouvrage *tete1)
{
	ouvrage *ptr;
	int matricule;
	int cote;
	ptr=tete1;
	printf("\n\n");
	printf("\n\t*************************************************\n");
	printf("\t---------------la liste des etudiants--------------\n");
	printf("\n entrer votre matricule:");
	scanf("%d",&matricule);
	printf(" \n entrer la cote de livre emprunte:");
	scanf("%d",&cote);
	while( ptr!=NULL)
	{
	
	if (ptr->cote==cote)
	printf("l'operation a ete bien faite!!");
	else printf("ouvrage inexistant!!");
	
	}
while (ptr=NULL)
{
	printf("ouvrage inexistant!!");
}
printf("\t  appuyez sur une touche pour continuer:");
getch ();
}

//
void emprunt_etudMenu( ouvrage *tete1){
   ouvrage *ptr;
   double matricule;
   char abonnement;
    int i=1,cote,flag=0;
    if(tete1==NULL){
        printf("\n\t\t\t\t Il ne reste plus de livres dans la bibliothèque à émettre !\n\t\t\t\t navree pour ça!\n");
    }else{
        
        ptr=tete1;
        printf("\n\t*************** les ouvrages disponible: ****************\n");
                 afficher(tete1);
        printf("\n\n\t Entrer la cote: ");
        scanf("%d",&cote);
        ptr=tete1;
        while(ptr!=NULL){
            if(ptr->cote==cote){
                flag=1;
                break;
            }
            ptr=ptr->suiv;
        }
        if(flag==1){
            ptr=tete1;
            while(ptr->cote!=cote){
                ptr=ptr->suiv;
            }
            etudiant *tete2;
            printf("\n\t entrer vos details:\n ");
            printf("\n\t matricule: ");
            scanf("%1f",&matricule);
            
            printf("\n\t l'emprunt de l'ouvrage a ete fait avec sucess");
            printf("\n\n\t*************************************************\n");
            
            printf("\t  appuyez sur une touche pour continuer:");
            getch();
            
        }else{
            printf("\n\t\t      ...erreur!...\n");
            printf("\t  appuyez sur une touche pour continuer:");
            getch();
           
        }
    }
}
ouvrage *retourner_etud(ouvrage *tete1){
    ouvrage *ptr,*preptr;
    char bookname[50];
    int flag=0,id,code,c=0,d=1;
    printf("\n\n\t*************** retour des livres: ****************\n");
    printf("\n\n\t Entrer la cote de livre: ");
    scanf("%d",&code);
    ptr=tete1;
    while(ptr!=NULL){
        if(ptr->cote==code){
            flag=1;
            break;
        }
        ptr=ptr->suiv;
    }
    if(flag==1){
        ptr=ptr->suiv;
        while(ptr!=NULL){
            c++;
            ptr=ptr->suiv;
        }
        ptr=tete1;
        while(ptr->cote!=code){
                d++;
            ptr=ptr->suiv;
        }
        ptr=tete1;
        if( d==1 ){
            printf("\n\t_________________________________________________\n");
            printf("\n\t cote: %d",tete1->cote);
            printf("\n\t titre: %s",tete1->titre);
            printf("\n\t_________________________________________________\n");
            printf("\n\n\t Return of Book done successfully!\n");
            printf("\n\n\t*************************************************\n");
            strcpy(bookname,tete1->titre);
            code=tete1->cote;
            tete1=tete1->suiv;
            free(ptr);
            
        }else{
            ptr=tete1;
            while(ptr->cote!=code){
                preptr=ptr;
                ptr=ptr->suiv;
            }
            
            printf("\n\t_________________________________________________\n");
            printf("\n\t cote: %d",tete1->cote);
            printf("\n\t titre: %s",tete1->titre);
            printf("\n\t_________________________________________________\n");
            strcpy(bookname,ptr->titre);
            code=ptr->cote;
            preptr->suiv=ptr->suiv;
            free(ptr);
            
        }
        printf("\n\t merci pour cette magnifique aventure ");
        printf("\n\n\t appuyer sur une touche pour continuer\n");
        getch();
        
    }else{
        printf("\n\touvrage inexistable recheckez la cote");
        printf("\n\n\t appuyer sur une touche pour continuer\n");
        getch();
    
    }
    return tete1;
}
void exit(int status);

// premier menu
void menuUser() {
    int choix;
    double mat;
    int cote;
    do{
        printf("\n\n");
        printf("\n\t*************************************************\n");
        printf("\n\t***************le menu principal*****************\n");
        printf("\n\t*\t        1-voir la liste des ouvrages    *\n");
        printf("\n\t*\t        2-ajouter un livre              *\n");
        printf("\n\t*\t        3-supprimer un livre            *\n");
        printf("\n\t*\t        4-voir la liste des etudiants   *\n");
        printf("\n\t*\t        5-ajouter un etudiant           *\n");
        printf("\n\t*\t        6-supprimer un etudiant         *\n");
        printf("\n\t*\t        7-modifier un etudiant          *\n");     
        printf("\n\t*\t        8-quitter                       *\n");
        printf("\n\t*\t        entrer votre choix:              *");
        scanf("%d",&choix);
        printf("\n\t*************************************************\n");
        switch(choix){
            case 1:{ afficher(tete1); 
                     break;
                 }
            case 2: {tete1= remplir(tete1);
                    break;
                }
            case 3: {
			        tete1=supprimer(tete1);
                    break;}
            case 4: {
			        afficher_etud(tete2);
                    break;
					}
            case 5: {tete2=ajouter(tete2); 
                     break;
					}
		     case 6:{ 
		        tete2= supprimer_etud(tete2); //appel supression
                break;}
			case 7:{
				tete2=modifier_etud(tete2);
				break;
			}
            
           
            case 8: exit(0);
            break;
		}
    }while(choix!=8);    
getch();
}

//deuxieme menu
void service_etud(){
    int choix;
    do{
        printf("\n\n");
        printf("\n\t*************************************************\n");
        printf("\n\t**************le menu principal******************\n");
        printf("\n\t\t        1-voir la liste des livres\n");
        printf("\n\t\t        2-emprunter un livre\n");
        printf("\n\t\t        3-retourner un livre\n");
        printf("\n\t\t        4-quitter\n");
        printf("\n\t\t        entrer votre choix:");
        scanf("%d",&choix);
        printf("\n\t*************************************************\n");
        switch(choix){
            case 1: afficher(tete1);
            break;
            case 2: emprunt_etudMenu(tete1);
            break;
            case 3: {
			   tete1=retourner_etud(tete1);}
            break;
            case 4: exit(0);
            break;
        }
    }while(choix!=4);   
	getch(); 
}


//welcome
 void bienvenu () {
	int choix;
	printf("\n");
	printf("\t-----------------------------------------------\t\n");
	printf("\t-----------------------------------------------\t\n");
	printf("\t*                                             *\n");
	printf("\t*                                             *\n");
	printf("\t* bonjour, bienvenue a 'the gypsie library'!? *\n");
	printf("\t*                                             *\n");
	printf("\t*                                             *\n");
	printf("\t*                                             *\n");
	printf("\t-----------------------------------------------\t\n");
	printf("\t-----------------------------------------------\t\n");
	printf("\n\n");
	printf("\t-----------------------------------------------\t\n");
	printf("\t-----------------------------------------------\t\n");
	printf("\t*                                             *\n");
	printf("\t*                                             *\n");
	printf("\t*                                             *\n");
	printf("\t*\t\t avant de commencer           *\n\t*\t comment s'est passee votre journee?  *\n");
	printf("\t*\t\t 1-tres bien                  *\n");
	printf("\t*\t\t 2-pas mal                    *\n");
	printf("\t*\t\t dites nous:                  *");
	printf("\n\t*                                             *");
	printf("\n\t*                                             *");
	printf("\n\t*                                             *");
	printf("\n\t-----------------------------------------------\t");
	printf("\n\t-----------------------------------------------\t\n");
	scanf("\t\t%d",&choix);
	switch(choix){
		case 1: printf("\t\t\tyaay, coool!!\n");
		break;
		case 2: printf("\t\t\tne vous inquietez pas   \n\t\tnous allons faire votre journee  \n");
		break;
		default : printf("juste 1 ou 2");
	}
	printf("\n\t-----------------------------------------------\t");
	printf("\n\t-----------------------------------------------\t\n");
	printf("\t  appuyez sur une touche pour continuer:");
	getch();
}
//host
void host(){
	int choix;
	do{
	
	printf("\n\n");
    printf("\n\t*************************************************\n");
    printf("\n\t\t        vous etes:??\n ");
	printf("\n\t\t        1-bibliothecaire\n");
    printf("\n\t\t        2-etudiant\n");
	printf("\n\t\t        entrer votre choix:");
	scanf("%d",&choix);
	printf("\n\t*************************************************\n");
	switch(choix)
	{
            case 1: menuUser();
            break;
            case 2: service_etud();
            break;
    }
    }while(choix!=2);
    getch();
}
int main()
{
	tete1=initialiser(tete1);
	tete2=initialiser_etud(tete2);
	bienvenu ();
	host();
	menuUser();
	service_etud();
	return 0;
}
