  /**--------------------------------------------------------**/
  /**       C o n v e r s i o n   Z vers C (Standard)        **/
  /**             Réalisée par Pr D.E ZEGOUR                 **/
  /**             E S I - Alger                              **/
  /**             Copywrite 2014                             **/
  /**--------------------------------------------------------**/

  #include <stdio.h>
  #include <stdlib.h>
  #include <conio.h>
#include <windows.h>
#include<string.h>

  typedef int bool ;

  #define True 1
  #define False 0

  /** Implémentation **\: TABLEAU DE TABLEAUX DE ENTIERS**/

  /** Tableaux **/
int cpt= 0 ;
  typedef int Typeelem_V4i ;
  typedef Typeelem_V4i * Typevect_V4i ;

  Typeelem_V4i Element_V4i ( Typevect_V4i V , int I1  )
    {
      return  *(V +  (I1-1)  ) ;
    }

  void Aff_element_V4i ( Typevect_V4i V  , int I1 ,  Typeelem_V4i Val )
    {
      *(V +  (I1-1)  ) = Val ;
    }


  /** Tableaux **/

  typedef Typevect_V4i Typeelem_V8V4i ;
  typedef Typeelem_V8V4i * Typevect_V8V4i ;

  Typeelem_V8V4i Element_V8V4i ( Typevect_V8V4i V , int I1  )
    {
      return  *(V +  (I1-1)  ) ;
    }

  void Aff_element_V8V4i ( Typevect_V8V4i V  , int I1 ,  Typeelem_V8V4i Val )
    {
      Typeelem_V8V4i _Temp ;
     _Temp = malloc(4 * sizeof(int));
      /* Affectation globale de vecteur */
      int _Izw1;
      for (_Izw1= 0 ;_Izw1<=3;_Izw1++)
          *(_Temp + _Izw1) = *(Val + _Izw1);
      Val = _Temp ;
      *(V +  (I1-1)  ) = Val ;
    }


  /** Implémentation **\: TABLEAU DE STRUCTURES**/

  /** Structures statiques **/

  typedef struct Tii Type_Tii  ;
  typedef Type_Tii * Typestr_Tii ;
  typedef int Type1_Tii  ;
  typedef int Type2_Tii  ;
  struct Tii
    {
      Type1_Tii Champ1 ;
      Type2_Tii Champ2 ;
    };

  Type1_Tii Struct1_Tii ( Typestr_Tii S)
    {
      return  S->Champ1 ;
    }

  Type2_Tii Struct2_Tii ( Typestr_Tii S)
    {
      return  S->Champ2 ;
    }

  void Aff_struct1_Tii ( Typestr_Tii S, Type1_Tii Val )
    {
       S->Champ1 = Val ;
    }

  void Aff_struct2_Tii ( Typestr_Tii S, Type2_Tii Val )
    {
       S->Champ2 = Val ;
    }


  /** Tableaux **/

  typedef Typestr_Tii Typeelem_V32Tii ;
  typedef Typeelem_V32Tii * Typevect_V32Tii ;

  Typeelem_V32Tii Element_V32Tii ( Typevect_V32Tii V , int I1  )
    {
      return  *(V +  (I1-1)  ) ;
    }

  void Aff_element_V32Tii ( Typevect_V32Tii V  , int I1 ,  Typeelem_V32Tii Val )
    {
      Typeelem_V32Tii _Temp ;
      _Temp = malloc(sizeof(Type_Tii));
      /* Affectation globale de structure */
      _Temp->Champ1 = Val->Champ1;
      _Temp->Champ2 = Val->Champ2;
      Val = _Temp ;
      *(V +  (I1-1)  ) = Val ;
    }


  /** Implémentation **\: TABLEAU DE ENTIERS**/

  /** Tableaux **/

  typedef int Typeelem_V8i ;
  typedef Typeelem_V8i * Typevect_V8i ;

  Typeelem_V8i Element_V8i ( Typevect_V8i V , int I1  )
    {
      return  *(V +  (I1-1)  ) ;
    }

  void Aff_element_V8i ( Typevect_V8i V  , int I1 ,  Typeelem_V8i Val )
    {
      *(V +  (I1-1)  ) = Val ;
    }


  /** Implémentation **\: ARBRE BINAIRE DE STRUCTURES**/

  /** Structures statiques **/

  typedef struct Tiii Type_Tiii  ;
  typedef Type_Tiii * Typestr_Tiii ;
  typedef int Type1_Tiii  ;
  typedef int Type2_Tiii  ;
  typedef int Type3_Tiii  ;
  struct Tiii
    {
      Type1_Tiii Champ1 ;
      Type2_Tiii Champ2 ;
      Type3_Tiii Champ3 ;
    };

  Type1_Tiii Struct1_Tiii ( Typestr_Tiii S)
    {
      return  S->Champ1 ;
    }

  Type2_Tiii Struct2_Tiii ( Typestr_Tiii S)
    {
      return  S->Champ2 ;
    }

  Type3_Tiii Struct3_Tiii ( Typestr_Tiii S)
    {
      return  S->Champ3 ;
    }

  void Aff_struct1_Tiii ( Typestr_Tiii S, Type1_Tiii Val )
    {
       S->Champ1 = Val ;
    }

  void Aff_struct2_Tiii ( Typestr_Tiii S, Type2_Tiii Val )
    {
       S->Champ2 = Val ;
    }

  void Aff_struct3_Tiii ( Typestr_Tiii S, Type3_Tiii Val )
    {
       S->Champ3 = Val ;
    }


  /** Arbres de recherche binaire **/

  typedef Typestr_Tiii Typeelem_ATiii   ;
  typedef struct Noeud_ATiii * Pointeur_ATiii ;

  struct Noeud_ATiii
    {
      Typeelem_ATiii  Val ;
      Pointeur_ATiii Fg ;
      Pointeur_ATiii Fd ;
      Pointeur_ATiii Pere ;
     } ;

  Typeelem_ATiii Info_ATiii( Pointeur_ATiii P )
    { return P->Val;   }

  Pointeur_ATiii Fg_ATiii( Pointeur_ATiii P)
    { return P->Fg ; }

  Pointeur_ATiii Fd_ATiii( Pointeur_ATiii P)
    { return P->Fd ; }

  Pointeur_ATiii Pere_ATiii( Pointeur_ATiii P)
    { return P->Pere ; }

  void Aff_info_ATiii ( Pointeur_ATiii P, Typeelem_ATiii Val)
    {
      Typeelem_ATiii _Temp ;
      _Temp = malloc(sizeof(Type_Tiii));
      /* Affectation globale de structure */
      _Temp->Champ1 = Val->Champ1;
      _Temp->Champ2 = Val->Champ2;
      _Temp->Champ3 = Val->Champ3;
      Val = _Temp ;
       P->Val = Val ;
    }

  void Aff_fg_ATiii( Pointeur_ATiii P, Pointeur_ATiii Q)
    { P->Fg =  Q;  }

  void Aff_fd_ATiii( Pointeur_ATiii P, Pointeur_ATiii Q)
    { P->Fd =  Q ; }

  void Aff_pere_ATiii( Pointeur_ATiii P, Pointeur_ATiii Q)
    { P->Pere =  Q ; }

  void Creernoeud_ATiii( Pointeur_ATiii *P)
    {
      *P = (struct Noeud_ATiii *) malloc( sizeof( struct Noeud_ATiii))   ;
      (*P)->Val = malloc(sizeof(Type_Tiii));
      (*P)->Fg = NULL;
      (*P)->Fd = NULL;
      (*P)->Pere = NULL;
    }

  void Liberernoeud_ATiii( Pointeur_ATiii P)
    { free( P ) ; }


  /** Implémentation **\: LISTE DE STRUCTURES**/

  /** Listes lin?aires cha?n?es **/

  typedef Typestr_Tiii Typeelem_LTiii   ;
  typedef struct Maillon_LTiii * Pointeur_LTiii ;

  struct Maillon_LTiii
    {
      Typeelem_LTiii  Val ;
      Pointeur_LTiii Suiv ;
    } ;

  Pointeur_LTiii Allouer_LTiii (Pointeur_LTiii *P)
    {
      *P = (struct Maillon_LTiii *) malloc( sizeof( struct Maillon_LTiii)) ;
      (*P)->Val = malloc(sizeof(Type_Tiii));
      (*P)->Suiv = NULL;
    }

  void Aff_val_LTiii(Pointeur_LTiii P, Typeelem_LTiii Val)
    {
      Typeelem_LTiii _Temp ;
      _Temp = malloc(sizeof(Type_Tiii));
      /* Affectation globale de structure */
      _Temp->Champ1 = Val->Champ1;
      _Temp->Champ2 = Val->Champ2;
      _Temp->Champ3 = Val->Champ3;
      Val = _Temp ;
      P->Val = Val ;
    }

  void Aff_adr_LTiii( Pointeur_LTiii P,  Pointeur_LTiii Q)
    {
      P->Suiv = Q ;
    }

  Pointeur_LTiii Suivant_LTiii(  Pointeur_LTiii P)
    { return( P->Suiv ) ;  }

  Typeelem_LTiii Valeur_LTiii( Pointeur_LTiii P)
    { return( P->Val) ; }

  void Liberer_LTiii ( Pointeur_LTiii P)
    { free (P);}


  /** Implémentation **\: TABLEAU DE LISTES DE STRUCTURES**/

  /** Tableaux **/

  typedef Pointeur_LTiii Typeelem_V8LTiii ;
  typedef Typeelem_V8LTiii * Typevect_V8LTiii ;

  Typeelem_V8LTiii Element_V8LTiii ( Typevect_V8LTiii V , int I1  )
    {
      return  *(V +  (I1-1)  ) ;
    }

  void Aff_element_V8LTiii ( Typevect_V8LTiii V  , int I1 ,  Typeelem_V8LTiii Val )
    {
      *(V +  (I1-1)  ) = Val ;
    }

  /** Pour les variables temporaires **/
  typedef Typeelem_V4i Typetab_V4i[4];

  /** Pour les variables temporaires **/
  typedef Typeelem_V8V4i Typetab_V8V4i[8];

  /** Pour les variables temporaires **/
  typedef Typeelem_V32Tii Typetab_V32Tii[32];


  /** Implémentation **\: TABLEAU DE STRUCTURES**/

  /** Tableaux **/

  typedef Typestr_Tii Typeelem_V4Tii ;
  typedef Typeelem_V4Tii * Typevect_V4Tii ;

  Typeelem_V4Tii Element_V4Tii ( Typevect_V4Tii V , int I1  )
    {
      return  *(V +  (I1-1)  ) ;
    }

  void Aff_element_V4Tii ( Typevect_V4Tii V  , int I1 ,  Typeelem_V4Tii Val )
    {
      Typeelem_V4Tii _Temp ;
      _Temp = malloc(sizeof(Type_Tii));
      /* Affectation globale de structure */
      _Temp->Champ1 = Val->Champ1;
      _Temp->Champ2 = Val->Champ2;
      Val = _Temp ;
      *(V +  (I1-1)  ) = Val ;
    }

  /** Pour les variables temporaires **/
  typedef Typeelem_V8i Typetab_V8i[8];

  /** Pour les variables temporaires **/
  typedef Typeelem_V4Tii Typetab_V4Tii[4];


  /** Implémentation **\: PILE DE ARBRES BINAIRES DE STRUCTURES**/
  /** Piles **/

  typedef Pointeur_ATiii Typeelem_PATiii ;
  typedef struct Maillon_PATiii * Pointeur_PATiii ;
  typedef   Pointeur_PATiii  Typepile_PATiii  ;

  struct Maillon_PATiii
    {
      Typeelem_PATiii  Val ;
      Pointeur_PATiii Suiv ;
    } ;

  void Creerpile_PATiii( Pointeur_PATiii *P )
    { *P = NULL ; }

  bool Pilevide_PATiii ( Pointeur_PATiii P )
    { return  (P == NULL ); }

  void Empiler_PATiii ( Pointeur_PATiii *P,  Typeelem_PATiii Val )
    {
      Pointeur_PATiii Q;

      Q = (struct Maillon_PATiii *) malloc( sizeof( struct Maillon_PATiii))   ;
      Q->Val = Val ;
      Q->Suiv = *P;
      *P = Q;
    }

  void Depiler_PATiii ( Pointeur_PATiii *P,  Typeelem_PATiii *Val )
    {
      Pointeur_PATiii Sauv;

      if (! Pilevide_PATiii (*P) )
        {
          *Val = (*P)->Val ;
          Sauv = *P;
          *P = (*P)->Suiv;
          free(Sauv);
        }
      else printf ("%s \n", "Pile vide");
    }


  /** Implémentation **\: FILE DE ARBRES BINAIRES DE STRUCTURES**/
  /** Files d'attente **/

  typedef Pointeur_ATiii Typeelem_FATiii ;
  typedef  struct Filedattente_FATiii * Pointeur_FATiii ;
  typedef  struct Maillon_FATiii * Ptliste_FATiii ;

  struct Maillon_FATiii
    {
      Typeelem_FATiii Val ;
      Ptliste_FATiii Suiv  ;
    };

  struct Filedattente_FATiii
    {
      Ptliste_FATiii Tete, Queue ;
    };

  void Creerfile_FATiii ( Pointeur_FATiii *Fil   )
    {
      *Fil = (struct Filedattente_FATiii *) malloc( sizeof( struct Filedattente_FATiii)) ;
      (*Fil)->Tete = NULL ;
      (*Fil)->Queue = NULL ;
    }

  bool Filevide_FATiii (Pointeur_FATiii Fil  )
    { return  Fil->Tete == NULL ;}

  void Enfiler_FATiii ( Pointeur_FATiii Fil , Typeelem_FATiii Val   )
    {
      Ptliste_FATiii Q;

      Q = (struct Maillon_FATiii *) malloc( sizeof( struct Maillon_FATiii))   ;
      Q->Val = Val ;
      Q->Suiv = NULL;
      if ( ! Filevide_FATiii(Fil) )
        Fil->Queue->Suiv = Q ;
      else Fil->Tete = Q;
        Fil->Queue = Q;
    }

  void Defiler_FATiii (Pointeur_FATiii Fil, Typeelem_FATiii *Val )
    {
      if (! Filevide_FATiii(Fil) )
        {
          *Val = Fil->Tete->Val ;
          Fil->Tete =  Fil->Tete->Suiv;
        }
      else printf ("%s \n", "File d'attente vide");
    }


  /** Implémentation **\: TABLEAU DE STRUCTURES**/

  /** Tableaux **/

  typedef Typestr_Tii Typeelem_V8Tii ;
  typedef Typeelem_V8Tii * Typevect_V8Tii ;

  Typeelem_V8Tii Element_V8Tii ( Typevect_V8Tii V , int I1  )
    {
      return  *(V +  (I1-1)  ) ;
    }

  void Aff_element_V8Tii ( Typevect_V8Tii V  , int I1 ,  Typeelem_V8Tii Val )
    {
      Typeelem_V8Tii _Temp ;
      _Temp = malloc(sizeof(Type_Tii));
      /* Affectation globale de structure */
      _Temp->Champ1 = Val->Champ1;
      _Temp->Champ2 = Val->Champ2;
      Val = _Temp ;
      *(V +  (I1-1)  ) = Val ;
    }

  /** Pour les variables temporaires **/
  typedef Typeelem_V8Tii Typetab_V8Tii[8];


  /** Variables du programme principal **/
  Typevect_V8V4i Tab_g;
  Typevect_V4i V1;
  Typevect_V4i V2;
  Typevect_V4i V3;
  Typevect_V4i V4;
  Typevect_V4i V5;
  Typevect_V4i V6;
  Typevect_V4i V7;
  Typevect_V4i V8;
  Typevect_V32Tii Vpts;
  Typevect_V32Tii Vcoupe2018;
  Typevect_V8i T1;
  Typevect_V8i T2;
  Typestr_Tii S;
  Typestr_Tii T;
  int I;
  int J;
  int P;
  int N;
  int Choix;
  int Eq;
  Pointeur_ATiii A=NULL;
  Pointeur_ATiii R=NULL;
  Pointeur_ATiii Ag=NULL;
  Pointeur_ATiii Ad=NULL;
  Typestr_Tiii Info_noeud;
  Pointeur_LTiii Match=NULL;
  Typevect_V8LTiii Tab_liste;
  Pointeur_LTiii L=NULL;
  Pointeur_LTiii Q=NULL;
  Typevect_V8i Vclsmnt1;
  Typevect_V8i Vclsmnt2;
  Typevect_V8i Tapts;
    Typetab_V4i T_V1;
    Typetab_V4i T_V2;
    Typetab_V4i T_V3;
    Typetab_V4i T_V4;
    Typetab_V4i T_V5;
    Typetab_V4i T_V6;
    Typetab_V4i T_V7;
    Typetab_V4i T_V8;
    Typetab_V8V4i T_Tab_g;
    Typetab_V32Tii T_Vcoupe2018;
  int _Px1;
  int _Izw;  /** Variable de contrôle **/

  /** Fonctions standards **/

  int Aleanombre( int N )
    { return ( rand() % N ); }

  int Mod( int a, int b)
    { return ( a % b ); }


  /** Initialisation d'un tableau **/
  void Init_vect_V4i (  Typevect_V4i T , Typetab_V4i Tab , int N)
    {
      int K=-1;
     int I1 ;
     for (I1=0; I1< 4; ++I1)
        {
          K++;
         *(T +  I1  ) = Tab [K] ;
        }
    }


  /** Initialisation d'un tableau **/
  void Init_vect_V8V4i (  Typevect_V8V4i T , Typetab_V8V4i Tab , int N)
    {
      int K=-1;
     int I1 ;
     for (I1=0; I1< 8; ++I1)
        {
          K++;
         *(T +  I1  ) = Tab [K] ;
        }
    }


  /** Initialisation d'un tableau **/
  void Init_vect_V32Tii (  Typevect_V32Tii T , Typetab_V32Tii Tab , int N)
    {
      int K=-1;
     int I1 ;
     for (I1=0; I1< 32; ++I1)
        {
          K++;
         *(T +  I1  ) = Tab [K] ;
        }
    }


  /** Initialisation d'un tableau **/
  void Init_vect_V8i (  Typevect_V8i T , Typetab_V8i Tab , int N)
    {
      int K=-1;
     int I1 ;
     for (I1=0; I1< 8; ++I1)
        {
          K++;
         *(T +  I1  ) = Tab [K] ;
        }
    }


  /** Initialisation d'une structure **/
  void Init_struct_Tii ( Typestr_Tii S, Type_Tii S_ )
    {
      S->Champ1 = S_.Champ1 ;
      S->Champ2 = S_.Champ2 ;
    }


  /** Initialisation d'un tableau **/
  void Init_vect_V4Tii (  Typevect_V4Tii T , Typetab_V4Tii Tab , int N)
    {
      int K=-1;
     int I1 ;
     for (I1=0; I1< 4; ++I1)
        {
          K++;
         *(T +  I1  ) = Tab [K] ;
        }
    }


  /** Initialisation d'un tableau **/
  void Init_vect_V8Tii (  Typevect_V8Tii T , Typetab_V8Tii Tab , int N)
    {
      int K=-1;
     int I1 ;
     for (I1=0; I1< 8; ++I1)
        {
          K++;
         *(T +  I1  ) = Tab [K] ;
        }
    }


   Type_Tiii E1,E2,E3,E4,E5,E6,E7,E8,E9,E10,E11,E12,E13,E14,E15;
  /** Prototypes des fonctions **/

  void Enonparticipe (int *Eq , Typevect_V32Tii *Vcoupe2018);
  void Eqptour1 (int *Eq , Typevect_V32Tii *Vcoupe2018);
  void Eqp8 (int *Eq , Typevect_V32Tii *Vcoupe2018);
  void Eqp4 (int *Eq , Typevect_V32Tii *Vcoupe2018);
  void Eqp2 (int *Eq , Typevect_V32Tii *Vcoupe2018);
  void Eqp1 (int *Eq , Typevect_V32Tii *Vcoupe2018);
  void Creatablistes (Typevect_V8V4i *Tab_g , int *N , Typevect_V8LTiii *Tab_liste);
  void Afficherencontre (int *N , Typevect_V8LTiii *Tab_liste);
  void Resultathasard (Typevect_V8LTiii *Tab_liste);
  int  Indiceeq (Typevect_V32Tii *Vpts , int *Ne , int *Pte) ;
  void Sommepts (Typevect_V8LTiii *Tab_liste , Typevect_V32Tii *Vpts);
  void Eqpclasses (Typevect_V8i *Vclsmnt1 , Typevect_V8i *Vclsmnt2 , Typevect_V32Tii *Vpts);
  void Equpe1_2 (Typevect_V32Tii *Vpts , int *I1 , int *I2 , Typevect_V4Tii *Tval);
  void Permut (Typestr_Tii *Val1 , Typestr_Tii *Val2);
  void Rslt_eqfav (Typevect_V8LTiii *Tab_liste);
  void Rslt_has_efav (Typevect_V8LTiii *Tab_liste);
  void Insert_arb (Pointeur_ATiii *A);
  void Cons_arb (Pointeur_ATiii *A , int *N);
  void Inordre (Pointeur_ATiii *A);
  Pointeur_ATiii Feuille_pos (int *Pos , Pointeur_ATiii *A) ;
  void Huit_final (Pointeur_ATiii *A , Typevect_V8i *Vclsmnt1 , Typevect_V8i *Vclsmnt2);
  void Score_hasard (Pointeur_ATiii *A);
  Pointeur_ATiii Acces_niv (int *Nv , int *Pos , Pointeur_ATiii *A) ;
  void Remp_eqq (Pointeur_ATiii *A);
  void Score_eqfav (Pointeur_ATiii *A);
  int  Ptseq (Typevect_V32Tii *Vpts , int *Ne , int *Pte) ;
  void Score_phase1 (Pointeur_ATiii *A);
  void Eqfv_phase1 (Pointeur_ATiii *A);
  void Etc1 (Typevect_V8LTiii *Tab_liste);
  void Score_phase1et2 (Pointeur_ATiii *A);
  void Remp_ptsphase2 (Pointeur_ATiii *A , int *Cpt , int *Nv , Typevect_V8Tii *Tapts);
  int  Indiceeq1 (Typevect_V8Tii *Tapts , int *Ne , int *Pte) ;
  int  Ptseq1 (Typevect_V8Tii *Tapts , int *Ne , int *Pte) ;
  void Eqfav_phase1et2 (Pointeur_ATiii *A);
  void Score_coupe18 (Pointeur_ATiii *A);
  void Remperes (Pointeur_ATiii *A , int *Cpt , int *J , int *Nv , int *I);

       char* Tb[120];

  /************************************************************************/
  void Enonparticipe (int *Eq , Typevect_V32Tii *Vcoupe2018)
    {

      /** Corps du module **/
     if( ( *Eq == 51 ) || ( *Eq == 46 ) || ( *Eq == 10 )) {
       Aff_struct2_Tii ( Element_V32Tii ( *Vcoupe2018 , I   )  , 32 ) ;

     } ;
     if( ( *Eq == 15 ) || ( *Eq == 18 ) || ( *Eq == 68 )) {
       Aff_struct2_Tii ( Element_V32Tii ( *Vcoupe2018 , I   )  , 32 ) ;

     } ;
     if( ( *Eq == 101 ) || ( *Eq == 38 ) || ( *Eq == 37 ) || ( *Eq == 60 )) {
       Aff_struct2_Tii ( Element_V32Tii ( *Vcoupe2018 , I   )  , 32 ) ;

     } ;

    }
  /**********************************************************************/
  void Eqptour1 (int *Eq , Typevect_V32Tii *Vcoupe2018)
    {

      /** Corps du module **/
     if( ( *Eq == 20 ) || ( *Eq == 21 ) || ( *Eq == 49 )) {
       Aff_struct2_Tii ( Element_V32Tii ( *Vcoupe2018 , I   )  , 16 ) ;

     } ;
     if( ( *Eq == 26 ) || ( *Eq == 35 ) || ( *Eq == 12 )) {
       Aff_struct2_Tii ( Element_V32Tii ( *Vcoupe2018 , I   )  , 16 ) ;

     } ;
     if( ( *Eq == 24 ) || ( *Eq == 25 ) || ( *Eq == 29 )) {
       Aff_struct2_Tii ( Element_V32Tii ( *Vcoupe2018 , I   )  , 16 ) ;

     } ;

    }
  /**********************************************************************/
  void Eqp8 (int *Eq , Typevect_V32Tii *Vcoupe2018)
    {

      /** Corps du module **/
     if( ( *Eq == 4 ) || ( *Eq == 9 ) || ( *Eq == 11 ) || ( *Eq == 7 )) {
       Aff_struct2_Tii ( Element_V32Tii ( *Vcoupe2018 , I   )  , 8 ) ;

     } ;
     if( ( *Eq == 23 ) || ( *Eq == 14 ) || ( *Eq == 8 )) {
       Aff_struct2_Tii ( Element_V32Tii ( *Vcoupe2018 , I   )  , 8 ) ;

     } ;

    }
  /*************************************************************************/
  void Eqp4 (int *Eq , Typevect_V32Tii *Vcoupe2018)
    {

      /** Corps du module **/
     if( ( *Eq == 1 ) || ( *Eq == 13 )) {
       Aff_struct2_Tii ( Element_V32Tii ( *Vcoupe2018 , I   )  , 4 ) ;

     } ;

    }
  /*****************************************************************/
  void Eqp2 (int *Eq , Typevect_V32Tii *Vcoupe2018)
    {

      /** Corps du module **/
     if( ( *Eq == 5 ) || ( *Eq == 2 )) {
       Aff_struct2_Tii ( Element_V32Tii ( *Vcoupe2018 , I   )  , 2 ) ;

     } ;

    }
  /*************************************************/
  void Eqp1 (int *Eq , Typevect_V32Tii *Vcoupe2018)
    {

      /** Corps du module **/
     if( ( *Eq == 3 ) || ( *Eq == 16 )) {
       Aff_struct2_Tii ( Element_V32Tii ( *Vcoupe2018 , I   )  , 2 ) ;

     } ;

    }
  /**********************************************************************/
  void Creatablistes (Typevect_V8V4i *Tab_g , int *N , Typevect_V8LTiii *Tab_liste)
    {
      /** Variables locales **/
      Pointeur_LTiii Match=NULL;
      Pointeur_LTiii L=NULL;
      Pointeur_LTiii Q=NULL;
      int I;
      int J;
      Typestr_Tiii M;

      /** Corps du module **/
     M = malloc(sizeof(Type_Tiii));
     J  =  1 ;
     while( ( J < 4 )) {
       ;
       for( I  =  J + 1 ;I <=  4 ; ++I){
         Allouer_LTiii (& Q ) ;
         Aff_adr_LTiii ( Q , Element_V8LTiii ( *Tab_liste , *N   ) ) ;
         Aff_element_V8LTiii ( *Tab_liste , *N   , Q ) ;
         Aff_struct1_Tiii ( M  , Element_V4i ( Element_V8V4i ( *Tab_g , *N   ) , J   ) ) ;
         Aff_struct2_Tiii ( M  , Element_V4i ( Element_V8V4i ( *Tab_g , *N   ) , I   ) ) ;
         Aff_struct3_Tiii ( M  , - 1 ) ;
         Aff_val_LTiii ( Q , M ) ;

       } ;
       J  =  J + 1 ;

     } ;

    }
  /*****************************************************************************************/
   void Afficherencontre (int *N , Typevect_V8LTiii *Tab_liste)
    {
         char* Tb[120];
   for (int i=0; i<=100; i++)
     {
      Tb[i]=malloc(120*sizeof(char));
       strcpy (Tb[i]," ");
    }
    strcpy(Tb[50],"QTR" ) ;
    strcpy(Tb[45],"EQR")   ;
    strcpy(Tb[19],"SNG")   ;
    strcpy(Tb[9],"PBS")   ;
    strcpy(Tb[4],"ANG")    ;
    strcpy(Tb[20],"IRN") ;
  strcpy(Tb[3],"AGT")   ;
  strcpy(Tb[48],"SAB")  ;
  strcpy(Tb[8],"MEX")  ;
   strcpy(Tb[25],"PLG") ;
   strcpy(Tb[2],"FRA") ;
   strcpy(Tb[67],"EMI")   ;
    strcpy(Tb[10],"DAN")  ;
    strcpy(Tb[34],"TUN")    ;
    strcpy(Tb[6],"ESG")  ;
    strcpy(Tb[100],"NID")   ;
    strcpy(Tb[11],"ALM")     ;
    strcpy(Tb[22],"JPN");
    strcpy(Tb[1],"BLG") ;
  strcpy(Tb[37],"CND");
     ;strcpy(Tb[23],"MAR")    ;
     strcpy(Tb[15],"CRT")  ;
    strcpy(Tb[0],"BSL")  ;
    strcpy(Tb[24],"SEB")   ;
    strcpy(Tb[13],"SUI")     ;
    strcpy(Tb[36],"CMR")  ;
   strcpy(Tb[7],"PTG")     ;
   strcpy(Tb[59],"GHA")      ;
   strcpy(Tb[12],"URU")   ;
   strcpy(Tb[28],"KOR")      ;
   strcpy(Tb[14],"USA")      ;
   strcpy(Tb[17],"PGL")  ;
      /** Variables locales **/
      Pointeur_LTiii L=NULL;
      Pointeur_LTiii Q=NULL;
      int I;
      int J;
      Type_Tiii _Struct_Temp1;

      /** Corps du module **/
     L  =  Element_V8LTiii ( *Tab_liste , *N   ) ;

     while( L != NULL )
    {
       /** Ecriture d'une structure */
       _Struct_Temp1 = *Valeur_LTiii(L);
       printf ( "[ %2s",Tb[(_Struct_Temp1.Champ1)-1] );
       printf ( " %2s",Tb[(_Struct_Temp1.Champ2)-1] );
       if (Suivant_LTiii ( L )==NULL)
       {printf ( " %2d ]", _Struct_Temp1.Champ3 ) ;}
       else{printf ( " %2d ]-->", _Struct_Temp1.Champ3 );};

      // printf("\n----- ----------------------\n");
       L = Suivant_LTiii ( L ) ;
    } ;
    // Liberernoeud_ATiii( L);
}
  /*****************************************************************************************/
  void Resultathasard (Typevect_V8LTiii *Tab_liste)
    {
      /** Variables locales **/
      Pointeur_LTiii L=NULL;
      int I;
      int T;

      /** Corps du module **/
     for( I  =  1 ;I <=  8 ; ++I){
       L  =  Element_V8LTiii ( *Tab_liste , I   ) ;
       while( ( L != NULL )) {
         T  =  Aleanombre(3 ) ;
         Aff_struct3_Tiii ( Valeur_LTiii ( L )  , T ) ;
         L  =  Suivant_LTiii ( L ) ;

       }
     } ;

    }
  /*****************************************************************************************/
  int  Indiceeq (Typevect_V32Tii *Vpts , int *Ne , int *Pte)
    {
      /** Variables locales **/
      int  Indiceeq2 ;
      int I;
      int Bool;
      int R;

      /** Corps du module **/
     I  =  1 ;
     R  =  0 ;
     Bool  =  0 ;
     while( ( ( I < *Pte + 1 ) && ( Bool == 0 ) )) {
       if( ( Struct1_Tii ( Element_V32Tii ( *Vpts , I   )  ) == *Ne )) {
         Bool  =  1 ;
         R  =  I ;

       } ;
       I  =  I + 1 ;

     } ;
     Indiceeq2  =  R ;

     return Indiceeq2 ;
    }
  /*****************************************************************************************/
  void Sommepts (Typevect_V8LTiii *Tab_liste , Typevect_V32Tii *Vpts)
    {
      /** Variables locales **/
      Pointeur_LTiii L=NULL;
      int I;
      int T;
      int Ne;
      int _Px1;
      int _Px2;
      int _Px3;
      int _Px4;

      /** Corps du module **/
     for( I  =  1 ;I <=  8 ; ++I){
       L  =  Element_V8LTiii ( *Tab_liste , I   ) ;
       while( ( L != NULL )) {
         if( ( Struct3_Tiii ( Valeur_LTiii ( L )  ) == 1 )) {
           Ne  =  Struct1_Tiii ( Valeur_LTiii ( L )  ) ;
           _Px1 =  32 ;
           T  =  Indiceeq ( & *Vpts , & Ne , &_Px1) ;
           Aff_struct2_Tii ( Element_V32Tii ( *Vpts , T   )  , Struct2_Tii ( Element_V32Tii ( *Vpts , T   )  ) + 3 ) ;
           }
         else
           {
           if( ( Struct3_Tiii ( Valeur_LTiii ( L )  ) == 2 )) {
             Ne  =  Struct2_Tiii ( Valeur_LTiii ( L )  ) ;
             _Px2 =  32 ;
             T  =  Indiceeq ( & *Vpts , & Ne , &_Px2) ;
             Aff_struct2_Tii ( Element_V32Tii ( *Vpts , T   )  , Struct2_Tii ( Element_V32Tii ( *Vpts , T   )  ) + 3 ) ;
             }
           else
             {
             if( ( Struct3_Tiii ( Valeur_LTiii ( L )  ) == 0 )) {
               Ne  =  Struct2_Tiii ( Valeur_LTiii ( L )  ) ;
               _Px3 =  32 ;
               T  =  Indiceeq ( & *Vpts , & Ne , &_Px3) ;
               Aff_struct2_Tii ( Element_V32Tii ( *Vpts , T   )  , Struct2_Tii ( Element_V32Tii ( *Vpts , T   )  ) + 1 ) ;
               Ne  =  Struct1_Tiii ( Valeur_LTiii ( L )  ) ;
               _Px4 =  32 ;
               T  =  Indiceeq ( & *Vpts , & Ne , &_Px4) ;
               Aff_struct2_Tii ( Element_V32Tii ( *Vpts , T   )  , Struct2_Tii ( Element_V32Tii ( *Vpts , T   )  ) + 1 ) ;

             }
           }
         } ;
         L  =  Suivant_LTiii ( L ) ;

       }
     } ;

    }
  /*****************************************************************************************/
  void Eqpclasses (Typevect_V8i *Vclsmnt1 , Typevect_V8i *Vclsmnt2 , Typevect_V32Tii *Vpts)
    {
      /** Variables locales **/
      Typevect_V4Tii Tval;
      int I;
      int J;
      int Nm;
        Typetab_V8i T_Vclsmnt1;
        Typetab_V8i T_Vclsmnt2;
      int _Px1;
      int _Izw;  /** Variable de contrôle **/

      /** Corps du module **/
     Tval = malloc(4 * sizeof(Typestr_Tii));
     int _Izw2;for (_Izw2=0; _Izw2<4; ++_Izw2)
       Tval[_Izw2] = malloc( sizeof(Type_Tii ));
     I  =  1 ;
     J  =  1 ;
     T_Vclsmnt1 [ 0 ] = 0 ;
     T_Vclsmnt1 [ 1 ] = 0 ;
     T_Vclsmnt1 [ 2 ] = 0 ;
     T_Vclsmnt1 [ 3 ] = 0 ;
     T_Vclsmnt1 [ 4 ] = 0 ;
     T_Vclsmnt1 [ 5 ] = 0 ;
     T_Vclsmnt1 [ 6 ] = 0 ;
     T_Vclsmnt1 [ 7 ] = 0 ;

     Init_vect_V8i ( *Vclsmnt1 , T_Vclsmnt1 , 8 )  ;
     T_Vclsmnt2 [ 0 ] = 0 ;
     T_Vclsmnt2 [ 1 ] = 0 ;
     T_Vclsmnt2 [ 2 ] = 0 ;
     T_Vclsmnt2 [ 3 ] = 0 ;
     T_Vclsmnt2 [ 4 ] = 0 ;
     T_Vclsmnt2 [ 5 ] = 0 ;
     T_Vclsmnt2 [ 6 ] = 0 ;
     T_Vclsmnt2 [ 7 ] = 0 ;
     Init_vect_V8i ( *Vclsmnt2 , T_Vclsmnt2 , 8 )  ;
     while( ( I <= 32 )) {
       _Px1 =  I + 3 ;
       Equpe1_2 (  &*Vpts , & I , &_Px1, & Tval ) ;

       Nm  =  Struct1_Tii ( Element_V4Tii ( Tval , 1   )  ) ;
       Aff_element_V8i ( *Vclsmnt1 , J   , Nm ) ;
       Nm  =  Struct1_Tii ( Element_V4Tii ( Tval , 2   )  ) ;
       Aff_element_V8i ( *Vclsmnt2 , J   , Nm ) ;
       J  =  J + 1 ;
       I  =  I + 4 ;
     } ;
    }
  /*****************************************************************************************/
  void Equpe1_2 (Typevect_V32Tii *Vpts , int *I1 , int *I2 , Typevect_V4Tii *Tval)
    {
      /** Variables locales **/
      int I;
      int T;
      int J;
      int N1;
      int N2;
      int M;
      int Ptseq1;
      int Ptseq2;
      int Ptseq3;
      int Cpt;
      Typestr_Tii P;
      Type_Tii S_P;
      Typetab_V4Tii T_Tval;
      Typestr_Tii _Px1;
      Typestr_Tii _Px2;
      Typestr_Tii _Px3;
      Typestr_Tii _Px4;
      Typestr_Tii _Px5;
      Typestr_Tii _Px6;
      /** Corps du module **/
     P = malloc(sizeof(Type_Tii));
     int _Izw2;for (_Izw2=0; _Izw2<4; ++_Izw2)
       T_Tval[_Izw2] = malloc(sizeof(Type_Tii));
     _Px1 = malloc(sizeof(Type_Tii));
     _Px2 = malloc(sizeof(Type_Tii));
     _Px3 = malloc(sizeof(Type_Tii));
     _Px4 = malloc(sizeof(Type_Tii));
     _Px5 = malloc(sizeof(Type_Tii));
     _Px6 = malloc(sizeof(Type_Tii));
     T  =  1 ;
     S_P.Champ1 = 0 ;
     S_P.Champ2 = 0 ;
     Init_struct_Tii ( P , S_P )  ;
     T_Tval [ 0 ] = P ;
     T_Tval [ 1 ] = P ;
     T_Tval [ 2 ] = P ;
     T_Tval [ 3 ] = P ;

     Init_vect_V4Tii ( *Tval , T_Tval , 4 )  ;


     for( I  =  *I1 ;I <=  *I2 ; ++I)
    {
        (*Tval)[T] = ((*Tval)[T-1] +1) ;

       Aff_struct1_Tii ( Element_V4Tii ( *Tval , T  )  , Struct1_Tii ( Element_V32Tii ( *Vpts , I   )  ) ) ;
       Aff_struct2_Tii ( Element_V4Tii ( *Tval , T   )  , Struct2_Tii ( Element_V32Tii ( *Vpts , I   )  ) ) ;

        T  =  T + 1 ;
    };

     for( J  =  1 ;J <=  4 ; ++J)
    {
       for( I = 1 ;I <=  3 ; I++){


         if ( Struct2_Tii ( Element_V4Tii (*Tval , I)) < Struct2_Tii(Element_V4Tii ( *Tval ,I+1)) )
            {
           N1  =  Struct1_Tii ( Element_V4Tii ( *Tval , I + 1   )  ) ;
           N2  =  Struct2_Tii ( Element_V4Tii ( *Tval , I + 1   )  ) ;
           Aff_struct1_Tii ( Element_V4Tii ( *Tval , I + 1   )  , Struct1_Tii ( Element_V4Tii ( *Tval , I  )  ) ) ;
           Aff_struct2_Tii ( Element_V4Tii ( *Tval , I + 1   )  , Struct2_Tii ( Element_V4Tii ( *Tval , I  )  ) ) ;
           Aff_struct1_Tii ( Element_V4Tii ( *Tval , I   )  , N1 ) ;
           Aff_struct2_Tii ( Element_V4Tii ( *Tval , I   )  , N2 ) ;
            }
       }
     } ;
    /*  reclasser les equipes en cas d egalite */
     Ptseq1  =  Struct2_Tii ( Element_V4Tii ( *Tval , 1   )  ) ;
     Ptseq2  =  Struct2_Tii ( Element_V4Tii ( *Tval , 2   )  ) ;
     Ptseq3  =  Struct2_Tii ( Element_V4Tii ( *Tval , 3   )  ) ;
     if( ( Ptseq1 == Ptseq2 ) || ( Ptseq2 == Ptseq3 )) {
       if( ( Ptseq1 == Ptseq2 )) {
         Cpt  =  0 ;
         I  =  1 ;
         while( ( Struct2_Tii ( Element_V4Tii ( *Tval , I   )  ) == Ptseq2 ) && ( I <= 4 )) {
           Cpt  =  Cpt + 1 ;
           I  =  I + 1 ;
         } ;
         M  =  Aleanombre ( Cpt ) + 1 ;
         _Px1 =  Element_V4Tii ( *Tval , M   ) ;
         _Px2 =  Element_V4Tii ( *Tval , 1   ) ;
         Permut ( &_Px1, &_Px2) ;
         if( ( Cpt > 2 )) {
           M  =  Aleanombre ( Cpt - 1 ) + 2 ;
           _Px3 =  Element_V4Tii ( *Tval , M   ) ;
           _Px4 =  Element_V4Tii ( *Tval , 2   ) ;
           Permut ( &_Px3, &_Px4) ;

         } ;
         }
       else
         {
         if( ( Ptseq2 == Ptseq3 )) {
           Cpt  =  0 ;
           I  =  2 ;

           while( ( Struct2_Tii ( Element_V4Tii ( *Tval , I   )  ) == Ptseq2 ) && ( I < 4 )) {
             Cpt  =  Cpt + 1 ;
             I  =  I + 1 ;

           } ;
           M  =  Aleanombre ( Cpt ) + 2 ;
           _Px5 =  Element_V4Tii ( *Tval , M   ) ;
           _Px6 =  Element_V4Tii ( *Tval , 2   ) ;
           Permut ( &_Px5, &_Px6) ;
         }
       }
     } ;
    }
  /*****************************************************************************************/
  void Permut (Typestr_Tii *Val1 , Typestr_Tii *Val2)
    {
      /** Variables locales **/
      int N1;
      int N2;

      /** Corps du module **/
     N1  =  Struct1_Tii ( *Val1  ) ;
     N2  =  Struct2_Tii ( *Val1  ) ;
     Aff_struct1_Tii ( *Val1  , Struct1_Tii ( *Val2  ) ) ;
     Aff_struct2_Tii ( *Val1  , Struct2_Tii ( *Val2  ) ) ;
     Aff_struct1_Tii ( *Val2  , N1 ) ;
     Aff_struct2_Tii ( *Val2  , N2 ) ;

    }
  /*****************************************************************************************/
  void Rslt_eqfav (Typevect_V8LTiii *Tab_liste)
    {
      /** Variables locales **/
      Pointeur_LTiii L=NULL;
      int I;
      int T;

      /** Corps du module **/
     for( I  =  1 ;I <=  8 ; ++I){
       L  =  Element_V8LTiii ( *Tab_liste , I   ) ;
       while( ( L != NULL )) {
         if( ( Struct1_Tiii ( Valeur_LTiii ( L )  ) < Struct2_Tiii ( Valeur_LTiii ( L )  ) )) {
           T  =  1 ;
           }
         else
           {
           T  =  2 ;

         } ;
         Aff_struct3_Tiii ( Valeur_LTiii ( L )  , T ) ;
         L  =  Suivant_LTiii ( L ) ;

       }
     } ;

    }
  /*****************************************************************************************/
  void Rslt_has_efav (Typevect_V8LTiii *Tab_liste)
    {
      /** Variables locales **/
      Pointeur_LTiii L=NULL;
      int I;
      int T;
      int Alea;

      /** Corps du module **/
     for( I  =  1 ;I <=  8 ; ++I){
       L  =  Element_V8LTiii ( *Tab_liste , I   ) ;
      /* choisir si l'hasard ou leqp fav qui designera le gagnant du match*/
       while( ( L != NULL )) {
         Alea  =  Aleanombre(2 ) + 1 ;
        /* on choisis selon le hasard */
         if( ( Alea == 1 )) {
           T  =  Aleanombre(3 ) ;
           Aff_struct3_Tiii ( Valeur_LTiii ( L )  , T ) ;
           }
        /* on choisis selon l eqp fav */
         else
           {
           if( ( Struct1_Tiii ( Valeur_LTiii ( L )  ) < Struct2_Tiii ( Valeur_LTiii ( L )  ) )) {
             T  =  1 ;
             }
           else
             {
             T  =  2 ;

           } ;
           Aff_struct3_Tiii ( Valeur_LTiii ( L )  , T ) ;

         } ;
         L  =  Suivant_LTiii ( L ) ;

       }
     } ;

    }
  /*****************************************************************************************/
  void Insert_arb (Pointeur_ATiii *A)
    {
      /** Variables locales **/
      int N;
      int I;
      Pointeur_ATiii G=NULL;
      Pointeur_ATiii D=NULL;
      Typestr_Tiii Info_noeud;

      /** Corps du module **/
     Info_noeud = malloc(sizeof(Type_Tiii));
     if( ( *A == NULL )) {
       Creernoeud_ATiii (& *A ) ;
       Aff_struct1_Tiii ( Info_noeud  , 0 ) ;
       Aff_struct2_Tiii ( Info_noeud  , 0 ) ;
       Aff_struct3_Tiii ( Info_noeud  , 0 ) ;
       Aff_info_ATiii ( *A , Info_noeud ) ;
       }
     else
       {
       G  =  Fg_ATiii ( *A ) ;
       Insert_arb ( & G ) ;
       Aff_fg_ATiii ( *A , G ) ;
       D  =  Fd_ATiii ( *A ) ;
       Insert_arb ( & D ) ;
       Aff_fd_ATiii ( *A , D ) ;

     } ;

    }
  /*****************************************************************************************/
  void Cons_arb (Pointeur_ATiii *A , int *N)
    {
      /** Variables locales **/
      Pointeur_ATiii Ag=NULL;
      Pointeur_ATiii Ad=NULL;
      Typestr_Tiii Info_noeud;
      int I;

      /** Corps du module **/
     Info_noeud = malloc(sizeof(Type_Tiii));
     for( I  =  1 ;I <=  *N ; ++I){
       Insert_arb ( & Ag ) ;
       Insert_arb ( & Ad ) ;

     } ;
     Creernoeud_ATiii (& *A ) ;
     Aff_struct1_Tiii ( Info_noeud  , 0 ) ;
     Aff_struct2_Tiii ( Info_noeud  , 0 ) ;
     Aff_struct3_Tiii ( Info_noeud  , 0 ) ;
     Aff_info_ATiii ( *A , Info_noeud ) ;
     Aff_fg_ATiii ( *A , Ag ) ;
     Aff_fd_ATiii ( *A , Ad ) ;

    }
  /*****************************************************************************************/
   void Inordre (Pointeur_ATiii *A)
    {
        char* Tb[120];
   for (int i=0; i<=100; i++)
     {
      Tb[i]=malloc(120*sizeof(char));
       strcpy (Tb[i]," ");
    }
    strcpy(Tb[50],"QTR" ) ;strcpy(Tb[45],"EQR")   ;strcpy(Tb[19],"SNG")   ;
    strcpy(Tb[9],"PBS")   ;strcpy(Tb[4],"ANG")    ;strcpy(Tb[20],"IRN") ;strcpy(Tb[3],"AGT")   ;
    strcpy(Tb[48],"SAB")  ;strcpy(Tb[8],"MEX")  ;strcpy(Tb[25],"PLG") ;
   strcpy(Tb[2],"FRA") ;strcpy(Tb[67],"EMI")   ;strcpy(Tb[10],"DAN")  ;
    strcpy(Tb[34],"TUN")    ;strcpy(Tb[6],"ESG")  ;strcpy(Tb[100],"NID")   ;
    strcpy(Tb[11],"ALM")     ;strcpy(Tb[22],"JPN");strcpy(Tb[1],"BLG") ;
  strcpy(Tb[37],"CND");strcpy(Tb[23],"MAR")    ;strcpy(Tb[15],"CRT")  ;
  strcpy(Tb[0],"BSL")  ;strcpy(Tb[24],"SEB")   ;strcpy(Tb[13],"SUI")     ;strcpy(Tb[36],"CMR")  ;strcpy(Tb[7],"PTG")     ;
   strcpy(Tb[59],"GHA")      ;strcpy(Tb[12],"URU")   ;strcpy(Tb[28],"KOR")      ;
   strcpy(Tb[14],"USA")      ;strcpy(Tb[17],"PGA")  ;

      /** Variables locales **/
      Pointeur_ATiii _Px1=NULL;
      Type_Tiii _Struct_Temp2;

      Pointeur_ATiii _Px2=NULL;

      /** Corps du module **/
     if( ( *A != NULL )) {

       _Px1 =  Fg_ATiii ( *A ) ;
       Inordre ( &_Px1) ;
       /** Ecriture d'une structure */
       _Struct_Temp2 = *Info_ATiii(*A);
    cpt= cpt+1 ;

        if(cpt==1 ){  E1= *Info_ATiii(*A);

        } else{
         if(cpt==2 ){  E2= *Info_ATiii(*A); }else{

             if(cpt==3 ){  E3= *Info_ATiii(*A); }else{
                if(cpt==4 ){ E4= *Info_ATiii(*A); }else{
                    if(cpt==5){  E5= *Info_ATiii(*A); }else{
                        if(cpt==6 ){  E6= *Info_ATiii(*A);}else{
                            if(cpt==7 ){  E7= *Info_ATiii(*A); }else{
                                if(cpt==8 ){  E8=*Info_ATiii(*A);

                                 }else{
                                    if(cpt==9){  E9= *Info_ATiii(*A); }else{
                                       if(cpt==10 ){  E10= *Info_ATiii(*A); }else{
                                        if(cpt==11 ){  E11= *Info_ATiii(*A); }else{
                                            if(cpt==12 ){  E12= *Info_ATiii(*A); }else{
                                               if(cpt==13 ){  E13= *Info_ATiii(*A); }else{
                                                if(cpt==14 ){  E14=*Info_ATiii(*A); }else{
                                                    if(cpt==15 ){  E15= *Info_ATiii(*A); }
                                                }
                                               }}}} }}}}}}}}}

       _Px2 =  Fd_ATiii ( *A ) ;
       Inordre ( &_Px2) ;
     } ;

    }
  /*****************************************************************************************/
  Pointeur_ATiii Feuille_pos (int *Pos , Pointeur_ATiii *A)
    {
      /** Variables locales **/
      Pointeur_ATiii Feuille_pos2 =NULL;
      int Numf;
      int Found;
      Pointeur_PATiii P=NULL;
      Pointeur_ATiii Pi=NULL;

      /** Corps du module **/
     Numf  =  0 ;
     Found  =  0 ;
     Creerpile_PATiii (& P ) ;
     Pi  =  *A ;
     while( ( ( ( Pi != NULL ) || ( ! Pilevide_PATiii ( P ) ) ) && ( Found == 0 ) )) {
       while( ( Pi != NULL ) && ( ( Fg_ATiii ( Pi ) != NULL ) || ( Fd_ATiii ( Pi ) != NULL ) )) {
         Empiler_PATiii (& P , Pi ) ;
         Pi  =  Fg_ATiii ( Pi ) ;

       } ;
       if( ( Pi != NULL ) && ( Fg_ATiii ( Pi ) == NULL ) && ( Fd_ATiii ( Pi ) == NULL )) {
         Numf  =  Numf + 1 ;
         if( ( Numf == *Pos )) {
           Feuille_pos2  =  Pi ;
           Found  =  1 ;

         } ;

       } ;
       if( ( Numf != *Pos )) {
         Depiler_PATiii (& P , &Pi ) ;
         Pi  =  Fd_ATiii ( Pi ) ;

       } ;

     } ;

     return Feuille_pos2 ;
    }
  /*****************************************************************************************/
  void Huit_final (Pointeur_ATiii *A , Typevect_V8i *Vclsmnt1 , Typevect_V8i *Vclsmnt2)
    {
      /** Variables locales **/
      Typestr_Tiii Info_noeud;
      int I;

      /** Corps du module **/
     Info_noeud = malloc(sizeof(Type_Tiii));
     for( I  =  1 ;I <=  8 ; ++I){
       if( Mod ( I , 2 ) == 0) {
         Aff_struct1_Tiii ( Info_noeud  , Element_V8i ( *Vclsmnt1 , I   ) ) ;
         Aff_struct2_Tiii ( Info_noeud  , Element_V8i ( *Vclsmnt2 , I - 1   ) ) ;
         Aff_struct3_Tiii ( Info_noeud  , - 1 ) ;
         }
       else
         {
         Aff_struct1_Tiii ( Info_noeud  , Element_V8i ( *Vclsmnt1 , I   ) ) ;
         Aff_struct2_Tiii ( Info_noeud  , Element_V8i ( *Vclsmnt2 , I + 1   ) ) ;
         Aff_struct3_Tiii ( Info_noeud  , - 1 ) ;

       } ;
       Aff_info_ATiii ( Feuille_pos ( & I , & *A ) , Info_noeud ) ;

     } ;

    }
  /*****************************************************************************************/
  /*HASARD*/

  void Score_hasard (Pointeur_ATiii *A)
    {
      /** Variables locales **/
      int S;
      int I;
      int J;
      int Nv;

      /** Corps du module **/
     S  =  8 ;
     while( ( S > 0 )) {
       if( ( S == 8 )) {
         Nv  =  3 ;

       } ;
       if( ( S == 4 )) {
         Nv  =  2 ;

       } ;
       if( ( S == 2 )) {
         Nv  =  1 ;

       } ;
       if( ( S == 1 )) {
         Nv  =  0 ;

       } ;
       for( I  =  1 ;I <=  S ; ++I){
         J  =  Aleanombre(3 ) ;
         if( ( J == 0 )) {
           J  =  Aleanombre(2 ) + 1 ;

         } ;
         Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & I , & *A ) )  , J ) ;

       } ;
       S  =  S / 2 ;

     } ;

    }
  /*****************************************************************************************/
  Pointeur_ATiii Acces_niv (int *Nv , int *Pos , Pointeur_ATiii *A)
    {
      /** Variables locales **/
      Pointeur_ATiii Acces_niv2 =NULL;
      int Cpt;
      int Val;
      int Found;
      int Puiss;
      Pointeur_FATiii F=NULL;
      Pointeur_ATiii Noeud=NULL;

      /** Corps du module **/
     Cpt  =  0 ;
     Found  =  0 ;
     Val  =  *Pos ;
     Puiss  =  1 ;
     Noeud  =  *A ;
     for( I  =  1 ;I <=  *Nv ; ++I){
       Val  =  Val + Puiss ;
       Puiss  =  2 * Puiss ;

     } ;
     Creerfile_FATiii (& F ) ;
     if( ( Noeud != NULL )) {
       Enfiler_FATiii ( F , Noeud ) ;

     } ;
     while( ( ( ! Filevide_FATiii ( F ) ) && ( Found == 0 ) )) {
       Cpt  =  Cpt + 1 ;
       Defiler_FATiii ( F , &Noeud ) ;
       if( ( Cpt == Val )) {
         Acces_niv2  =  Noeud ;
         Found  =  1 ;

       } ;
       if( ( Found == 0 )) {
         if( ( Fg_ATiii ( Noeud ) != NULL )) {
           Enfiler_FATiii ( F , Fg_ATiii ( Noeud ) ) ;

         } ;
         if( ( Fd_ATiii ( Noeud ) != NULL )) {
           Enfiler_FATiii ( F , Fd_ATiii ( Noeud ) ) ;

         } ;

       } ;

     } ;

     return Acces_niv2 ;
    }
  /*****************************************************************************************/
  void Remp_eqq (Pointeur_ATiii *A)
    {
      /** Variables locales **/
      int I;
      int J;
      int Nv;
      int Cpt;
      int _Px1;
      int _Px2;
      int _Px3;
      int _Px4;
      int _Px5;
      int _Px6;
      int _Px7;

      /** Corps du module **/
     Cpt  =  8 ;
     while( ( Cpt > 0 )) {
       I  =  1 ;
       J  =  1 ;
       if( ( Cpt == 8 )) {
         Nv  =  3 ;

       } ;
       if( ( Cpt == 4 )) {
         Nv  =  2 ;

       } ;
       if( ( Cpt == 2 )) {
         Nv  =  1 ;

       } ;
       if( ( Cpt == 1 )) {
         Nv  =  0 ;

       } ;
       while( ( I <= Cpt ) && ( Cpt > 1 )) {
         if( ( Struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & I , & *A ) )  ) == 1 )) {
           _Px1 =  Nv - 1 ;
           Aff_struct1_Tiii ( Info_ATiii ( Acces_niv ( &_Px1, & J , & *A ) )  , Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & I , & *A ) )  ) ) ;
           }
         else
           {
           _Px2 =  Nv - 1 ;
           Aff_struct1_Tiii ( Info_ATiii ( Acces_niv ( &_Px2, & J , & *A ) )  , Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & I , & *A ) )  ) ) ;

         } ;
         _Px3 =  I + 1 ;
         if( ( Struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , &_Px3, & *A ) )  ) == 1 )) {
           _Px4 =  Nv - 1 ;
           _Px5 =  I + 1 ;
           Aff_struct2_Tiii ( Info_ATiii ( Acces_niv ( &_Px4, & J , & *A ) )  , Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , &_Px5, & *A ) )  ) ) ;
           }
         else
           {
           _Px6 =  Nv - 1 ;
           _Px7 =  I + 1 ;
           Aff_struct2_Tiii ( Info_ATiii ( Acces_niv ( &_Px6, & J , & *A ) )  , Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , &_Px7, & *A ) )  ) ) ;

         } ;
         I  =  I + 2 ;
         J  =  J + 1 ;

       } ;
       Cpt  =  Cpt / 2 ;

     } ;

    }
  /*****************************************************************************/
  void Score_eqfav (Pointeur_ATiii *A)
    {
      /** Variables locales **/
      int I;
      int Cpt;
      int J;
      int Nv;
      int Pos;
      int _Px1;
      int _Px2;
      int _Px3;
      int _Px4;
      int _Px5;
      int _Px6;
      int _Px7;

      /** Corps du module **/
     Cpt  =  8 ;
     while( ( Cpt > 0 )) {
       I  =  1 ;
       J  =  1 ;
       if( ( Cpt == 8 )) {
         Nv  =  3 ;

       } ;
       if( ( Cpt == 4 )) {
         Nv  =  2 ;

       } ;
       if( ( Cpt == 2 )) {
         Nv  =  1 ;

       } ;
       if( ( Cpt == 1 )) {
         Nv  =  0 ;

       } ;
       for( Pos  =  1 ;Pos <=  Cpt ; ++Pos){
         if( Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) > Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  )) {
           Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 1 ) ;
           }
         else
           {
           Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 2 ) ;

         } ;

       } ;
       while( ( I <= Cpt ) && ( Cpt > 1 )) {
         if( ( Struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & I , & *A ) )  ) == 1 )) {
           _Px1 =  Nv - 1 ;
           Aff_struct1_Tiii ( Info_ATiii ( Acces_niv ( &_Px1, & J , & *A ) )  , Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & I , & *A ) )  ) ) ;
           }
         else
           {
           _Px2 =  Nv - 1 ;
           Aff_struct1_Tiii ( Info_ATiii ( Acces_niv ( &_Px2, & J , & *A ) )  , Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & I , & *A ) )  ) ) ;

         } ;
         _Px3 =  I + 1 ;
         if( ( Struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , &_Px3, & *A ) )  ) == 1 )) {
           _Px4 =  Nv - 1 ;
           _Px5 =  I + 1 ;
           Aff_struct2_Tiii ( Info_ATiii ( Acces_niv ( &_Px4, & J , & *A ) )  , Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , &_Px5, & *A ) )  ) ) ;
           }
         else
           {
           _Px6 =  Nv - 1 ;
           _Px7 =  I + 1 ;
           Aff_struct2_Tiii ( Info_ATiii ( Acces_niv ( &_Px6, & J , & *A ) )  , Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , &_Px7, & *A ) )  ) ) ;

         } ;
         I  =  I + 2 ;
         J  =  J + 1 ;

       } ;
       Cpt  =  Cpt / 2 ;

     }
    }
  /*****************************************************************************/
  int  Ptseq (Typevect_V32Tii *Vpts , int *Ne , int *Pte)
    {
      /** Variables locales **/
      int  Ptseq2 ;
      int I;
      int Bool;
      int R;

      /** Corps du module **/
     I  =  1 ;
     R  =  0 ;
     Bool  =  0 ;
     while( ( ( I < *Pte + 1 ) && ( Bool == 0 ) )) {
       if( ( Struct1_Tii ( Element_V32Tii ( *Vpts , I   )  ) == *Ne )) {
         Bool  =  1 ;
         R  =  Struct2_Tii ( Element_V32Tii ( *Vpts , I   )  ) ;

       } ;
       I  =  I + 1 ;

     } ;
     Ptseq2  =  R ;

     return Ptseq2 ;
    }
  /**************************************************************************/
  void Score_phase1 (Pointeur_ATiii *A)
    {
      /** Variables locales **/
      int I;
      int Cpt;
      int J;
      int Nv;
      int Pos;
      int Al;
      int _Px1;
      int _Px2;
      int _Px3;
      int _Px4;
      int _Px5;
      int _Px6;
      int _Px7;
      int _Px8;
      int _Px9;
      int _Px10;
      int _Px11;
      int *_Px=32;

      /** Corps du module **/
     Cpt  =  8 ;
     while( ( Cpt > 0 )) {
       I  =  1 ;
       J  =  1 ;
       if( ( Cpt == 8 )) {
         Nv  =  3 ;

       } ;
       if( ( Cpt == 4 )) {
         Nv  =  2 ;

       } ;
       if( ( Cpt == 2 )) {
         Nv  =  1 ;

       } ;
       if( ( Cpt == 1 )) {
         Nv  =  0 ;

       } ;
       for( Pos  =  1 ;Pos <=  Cpt ; ++Pos){
         _Px1 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
         _Px2 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;

         if( Ptseq ( & Vpts , &_Px1,&_Px) > Ptseq ( & Vpts , &_Px2,&_Px))
            {
           Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 1 ) ;
           }
         else
           {
           _Px3 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
           _Px4 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
           if( Ptseq ( & Vpts , &_Px3,&_Px) < Ptseq ( & Vpts , &_Px4,&_Px)) {
             Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 2 ) ;
             }
           else
             {
             Al  =  Aleanombre(2 ) + 1 ;
             Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , Al ) ;

           }
         } ;

       } ;
       while( ( I <= Cpt ) && ( Cpt > 1 )) {
         if( ( Struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & I , & *A ) )  ) == 1 )) {
           _Px5 =  Nv - 1 ;
           Aff_struct1_Tiii ( Info_ATiii ( Acces_niv ( &_Px5, & J , & *A ) )  , Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & I , & *A ) )  ) ) ;
           }
         else
           {
           _Px6 =  Nv - 1 ;
           Aff_struct1_Tiii ( Info_ATiii ( Acces_niv ( &_Px6, & J , & *A ) )  , Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & I , & *A ) )  ) ) ;

         } ;
         _Px7 =  I + 1 ;
         if( ( Struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , &_Px7, & *A ) )  ) == 1 )) {
           _Px8 =  Nv - 1 ;
           _Px9 =  I + 1 ;
           Aff_struct2_Tiii ( Info_ATiii ( Acces_niv ( &_Px8, & J , & *A ) )  , Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , &_Px9, & *A ) )  ) ) ;
           }
         else
           {
           _Px10 =  Nv - 1 ;
           _Px11 =  I + 1 ;
           Aff_struct2_Tiii ( Info_ATiii ( Acces_niv ( &_Px10, & J , & *A ) )  , Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , &_Px11, & *A ) )  ) ) ;

         } ;
         I  =  I + 2 ;
         J  =  J + 1 ;

       } ;
       Cpt  =  Cpt / 2 ;

     } ;

    }
  /*****************************************************************************************/
  void Eqfv_phase1 (Pointeur_ATiii *A)
    {
      /** Variables locales **/
      int I;
      int Cpt;
      int J;
      int Nv;
      int Pos;
      int Alea;
      int _Px1;
      int _Px2;
      int _Px3;
      int _Px4;
      int _Px5;
      int _Px6;
      int _Px7;
      int _Px8;
      int _Px9;
      int _Px10;
      int _Px11;
      int _Px12;
      int _Px13;
      int _Px14;
      int _Px15;

      /** Corps du module **/
     Cpt  =  8 ;
     while( ( Cpt > 0 )) {
       I  =  1 ;
       J  =  1 ;
       if( ( Cpt == 8 )) {
         Nv  =  3 ;

       } ;
       if( ( Cpt == 4 )) {
         Nv  =  2 ;

       } ;
       if( ( Cpt == 2 )) {
         Nv  =  1 ;

       } ;
       if( ( Cpt == 1 )) {
         Nv  =  0 ;

       } ;
       for( Pos  =  1 ;Pos <=  Cpt ; ++Pos){
         if( Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) > Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  )) {
           _Px1 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
           _Px2 =  32 ;
           _Px3 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
           _Px4 =  32 ;
           if( Ptseq ( & Vpts , &_Px1, &_Px2) < Ptseq ( & Vpts , &_Px3, &_Px4)) {
             Alea  =  Aleanombre(2 ) + 1 ;

             }
           else
             {
             Alea  =  1 ;

           } ;
           Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , Alea ) ;
           }
         else
           {
           if( Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) < Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  )) {
             _Px5 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
             _Px6 =  32 ;
             _Px7 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
             _Px8 =  32 ;
             if( Ptseq ( & Vpts , &_Px5, &_Px6) < Ptseq ( & Vpts , &_Px7, &_Px8)) {
               Alea  =  Aleanombre(2 ) + 1 ;

               }
             else
               {
               Alea  =  2 ;

             } ;
             Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , Alea ) ;

           } ;

         } ;

       } ;
       while( ( I <= Cpt ) && ( Cpt > 1 )) {
         if( ( Struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & I , & *A ) )  ) == 1 )) {
           _Px9 =  Nv - 1 ;
           Aff_struct1_Tiii ( Info_ATiii ( Acces_niv ( &_Px9, & J , & *A ) )  , Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & I , & *A ) )  ) ) ;
           }
         else
           {
           _Px10 =  Nv - 1 ;
           Aff_struct1_Tiii ( Info_ATiii ( Acces_niv ( &_Px10, & J , & *A ) )  , Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & I , & *A ) )  ) ) ;

         } ;
         _Px11 =  I + 1 ;
         if( ( Struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , &_Px11, & *A ) )  ) == 1 )) {
           _Px12 =  Nv - 1 ;
           _Px13 =  I + 1 ;
           Aff_struct2_Tiii ( Info_ATiii ( Acces_niv ( &_Px12, & J , & *A ) )  , Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , &_Px13, & *A ) )  ) ) ;
           }
         else
           {
           _Px14 =  Nv - 1 ;
           _Px15 =  I + 1 ;
           Aff_struct2_Tiii ( Info_ATiii ( Acces_niv ( &_Px14, & J , & *A ) )  , Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , &_Px15, & *A ) )  ) ) ;

         } ;
         I  =  I + 2 ;
         J  =  J + 1 ;

       } ;
       Cpt  =  Cpt / 2 ;

     }
    }
  /**************************************************************************************************************/
  void Etc1 (Typevect_V8LTiii *Tab_liste)
    {
      /** Variables locales **/
      Pointeur_LTiii L=NULL;
      int I;
      int T;
      int Alea;

      /** Corps du module **/
     for( I  =  1 ;I <=  8 ; ++I){
       L  =  Element_V8LTiii ( *Tab_liste , I   ) ;
       if( ( Mod ( I , 2 ) == 1 )) {
         Alea  =  1 ;
         }
       else
         {
         Alea  =  2 ;

       } ;
       while( ( L != NULL )) {
        /* on choisis selon le hasard */
         if( ( Alea == 1 )) {
           T  =  Aleanombre(3 ) ;
           Aff_struct3_Tiii ( Valeur_LTiii ( L )  , T ) ;
           }
        /* on choisis selon l eqp fav */
         else
           {
           if( ( Struct1_Tiii ( Valeur_LTiii ( L )  ) < Struct2_Tiii ( Valeur_LTiii ( L )  ) )) {
             T  =  1 ;
             }
           else
             {
             T  =  2 ;

           } ;
           Aff_struct3_Tiii ( Valeur_LTiii ( L )  , T ) ;

         } ;
         L  =  Suivant_LTiii ( L ) ;

       }
     } ;

    }
  /*****************************************************************************************/
  void Score_phase1et2 (Pointeur_ATiii *A)
    {
      /** Variables locales **/
      int I;
      int Cpt;
      int J;
      int Nv;
      int Pos;
      int Al;
      int E;
      int Ind;
      Typevect_V8Tii Tapts;
      Typestr_Tii R;
        Typetab_V8Tii T_Tapts;
      int _Px1;
      int _Px2;
      int _Px3;
      int _Px4;
      int _Px5;
      int _Px6;
      int _Px7;
      int _Px8;
      int _Px9;
      int _Px10;
      int _Px11;
      int _Px12;
      int _Px13;
      int _Px14;
      int _Px15;
      int _Px16;
      int _Px17;
      int _Px18;
      int _Px19;
      int _Px20;
      int _Px21;
      int _Px22;
      int _Px23;
      int _Px24;
      int _Px25;
      int _Px26;
      int _Px27;
      int _Px28;
      int _Px29;
      int _Px30;
      int _Px31;
      int _Izw;  /** Variable de contrôle **/

      /** Corps du module **/
     Tapts = malloc(8 * sizeof(Typestr_Tii));
     int _Izw2;for (_Izw2=0; _Izw2<8; ++_Izw2)
     Tapts[_Izw2] = malloc( sizeof(Type_Tii ));
     R = malloc(sizeof(Type_Tii));
     int _Izw3;for (_Izw3=0; _Izw3<8; ++_Izw3)
     T_Tapts[_Izw3] = malloc(sizeof(Type_Tii));
     Aff_struct1_Tii ( R  , 0 ) ;
     Aff_struct2_Tii ( R  , 0 ) ;
     T_Tapts [ 0 ] = R ;
     T_Tapts [ 1 ] = R ;
     T_Tapts [ 2 ] = R ;
     T_Tapts [ 3 ] = R ;
     T_Tapts [ 4 ] = R ;
     T_Tapts [ 5 ] = R ;
     T_Tapts [ 6 ] = R ;
     T_Tapts [ 7 ] = R ;
     Init_vect_V8Tii ( Tapts , T_Tapts , 8 )  ;
     Cpt  =  8 ;
     while( ( Cpt > 0 )) {
       I  =  1 ;
       J  =  1 ;
       if( ( Cpt == 8 )) {
         Nv  =  3 ;
       } ;
       if( ( Cpt == 4 )) {
         Nv  =  2 ;

       } ;
       if( ( Cpt == 2 )) {
         Nv  =  1 ;

       } ;
       if( ( Cpt == 1 )) {
         Nv  =  0 ;
       } ;

       for( Pos  =  1 ;Pos <=  Cpt ; ++Pos){
         if( ( Pos == 8 )) {
           _Px1 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
           _Px2 =  32 ;
           _Px3 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
           _Px4 =  32 ;
           if( Ptseq ( & Vpts , &_Px1, &_Px2) > Ptseq ( & Vpts , &_Px3, &_Px4)) {
             Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 1 ) ;
             }
           else
             {
             _Px5 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
             _Px6 =  32 ;
             _Px7 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
             _Px8 =  32 ;
             if( Ptseq ( & Vpts , &_Px5, &_Px6) < Ptseq ( & Vpts , &_Px7, &_Px8)) {
               Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 2 ) ;
               }
             else
               {
               Al  =  Aleanombre(2 ) + 1 ;
               Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , Al ) ;
             }
           } ;

           for( E  =  1 ;E <=  8 ; ++E){

                (Tapts)[E] = ((Tapts)[E-1] +1) ;
             if( ( Struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & E , & *A ) )  ) == 1 )) {
               Aff_struct1_Tii ( Element_V8Tii ( Tapts , E   )  , Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & E , & *A ) )  ) ) ;
               }
             else
               {
               if( ( Struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & E , & *A ) )  ) == 2 )) {
                 Aff_struct1_Tii ( Element_V8Tii ( Tapts , E   )  , Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & E , & *A ) )  ) ) ;
               }
             }

           } ;
           }
         else
           {
           _Px9 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
           _Px10 =  32 ;
           _Px11 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
           _Px12 =  32 ;
           if( Ptseq ( & Vpts , &_Px9, &_Px10) > Ptseq ( & Vpts , &_Px11, &_Px12)) {
             Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 1 ) ;
             }
           else
             {
             _Px13 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
             _Px14 =  32 ;
             _Px15 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
             _Px16 =  32 ;
             if( Ptseq ( & Vpts , &_Px13, &_Px14) < Ptseq ( & Vpts , &_Px15, &_Px16)) {
               Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 2 ) ;
               }
             else
               {
               _Px17 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
               _Px18 =  8 ;
               _Px19 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
               _Px20 =  8 ;
               if( ( Ptseq1 ( & Tapts , &_Px17, &_Px18) > Ptseq1 ( & Tapts , &_Px19, &_Px20) )) {
                 Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 1 ) ;
                 }
               else
                 {
                 _Px21 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
                 _Px22 =  8 ;
                 _Px23 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
                 _Px24 =  8 ;
                 if( ( Ptseq1 ( & Tapts , &_Px21, &_Px22) < Ptseq1 ( & Tapts , &_Px23, &_Px24) )) {
                   Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 2 ) ;
                   }
                 else
                   {
                   Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , Aleanombre(2 ) + 1 ) ;}}}}
         } ;

       } ;
       Remp_ptsphase2 ( & *A , & Cpt , & Nv , & Tapts ) ;
       while( ( I <= Cpt ) && ( Cpt > 1 )) {
         if( ( Struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & I , & *A ) )  ) == 1 )) {
           _Px25 =  Nv - 1 ;
           Aff_struct1_Tiii ( Info_ATiii ( Acces_niv ( &_Px25, & J , & *A ) )  , Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & I , & *A ) )  ) ) ;
           }
         else
           {
           _Px26 =  Nv - 1 ;
           Aff_struct1_Tiii ( Info_ATiii ( Acces_niv ( &_Px26, & J , & *A ) )  , Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & I , & *A ) )  ) ) ;

         } ;
         _Px27 =  I + 1 ;
         if( ( Struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , &_Px27, & *A ) )  ) == 1 )) {
           _Px28 =  Nv - 1 ;
           _Px29 =  I + 1 ;
           Aff_struct2_Tiii ( Info_ATiii ( Acces_niv ( &_Px28, & J , & *A ) )  , Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , &_Px29, & *A ) )  ) ) ;
           }
         else
           {
           _Px30 =  Nv - 1 ;
           _Px31 =  I + 1 ;
           Aff_struct2_Tiii ( Info_ATiii ( Acces_niv ( &_Px30, & J , & *A ) )  , Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , &_Px31, & *A ) )  ) ) ;

         } ;
         I  =  I + 2 ;
         J  =  J + 1 ;

       } ;
       Cpt  =  Cpt / 2 ;

     } ;

    }
  /****************************************************************************************/
  void Remp_ptsphase2 (Pointeur_ATiii *A , int *Cpt , int *Nv , Typevect_V8Tii *Tapts)
    {
      /** Variables locales **/
      int E;
      int Ind;
      int _Px1;
      int _Px2;
      int _Px3;
      int _Px4;

      /** Corps du module **/
     for( E  =  1 ;E <=  *Cpt ; ++E){
       if( ( Struct3_Tiii ( Info_ATiii ( Acces_niv ( & *Nv , & E , & *A ) )  ) == 1 )) {
         if( ( Struct1_Tiii ( Info_ATiii ( Acces_niv ( & *Nv , & E , & *A ) )  ) < Struct2_Tiii ( Info_ATiii ( Acces_niv ( & *Nv , & E , & *A ) )  ) )) {
           _Px1 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & *Nv , & E , & *A ) )  ) ;
           _Px2 =  8 ;
           Ind  =  Indiceeq1 ( & *Tapts , &_Px1, &_Px2) ;
           Aff_struct2_Tii ( Element_V8Tii ( *Tapts , Ind   )  , Struct2_Tii ( Element_V8Tii ( *Tapts , Ind   )  ) + 1 ) ;

         } ;
         }
       else
         {
         if( ( Struct3_Tiii ( Info_ATiii ( Acces_niv ( & *Nv , & E , & *A ) )  ) == 2 )) {
           if( ( Struct2_Tiii ( Info_ATiii ( Acces_niv ( & *Nv , & E , & *A ) )  ) < Struct1_Tiii ( Info_ATiii ( Acces_niv ( & *Nv , & E , & *A ) )  ) )) {
             _Px3 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & *Nv , & E , & *A ) )  ) ;
             _Px4 =  8 ;
             Ind  =  Indiceeq1 ( & *Tapts , &_Px3, &_Px4) ;
             Aff_struct2_Tii ( Element_V8Tii ( *Tapts , Ind   )  , Struct2_Tii ( Element_V8Tii ( *Tapts , Ind   )  ) + 1 ) ;

           }
         }
       }
     } ;
      (*Tapts)[E] = ((*Tapts)[E-1] +1) ;
    }
  /******************************************************************/
  int  Indiceeq1 (Typevect_V8Tii *Tapts , int *Ne , int *Pte)
    {
      /** Variables locales **/
      int  Indiceeq12 ;
      int I;
      int Bool;
      int R;

      /** Corps du module **/
     I  =  1 ;
     R  =  0 ;
     Bool  =  0 ;
     while( ( ( I < *Pte + 1 ) && ( Bool == 0 ) )) {
       if( ( Struct1_Tii ( Element_V8Tii ( *Tapts , I   )  ) == *Ne )) {
         Bool  =  1 ;
         R  =  I ;

       } ;
       I  =  I + 1 ;

     } ;
     Indiceeq12  =  R ;
     return Indiceeq12 ;
    }
  /*********************************************************************/
  int  Ptseq1 (Typevect_V8Tii *Tapts , int *Ne , int *Pte)
    {
      /** Variables locales **/
      int  Ptseq12 ;
      int I;
      int Bool;
      int R;

      /** Corps du module **/
     I  =  1 ;
     R  =  0 ;
     Bool  =  0 ;
     while( ( ( I < *Pte + 1 ) && ( Bool == 0 ) )) {
       if( ( Struct1_Tii ( Element_V8Tii ( *Tapts , I   )  ) == *Ne )) {
         Bool  =  1 ;
         R  =  Struct2_Tii ( Element_V8Tii ( *Tapts , I   )  ) ;

       } ;
       I  =  I + 1 ;

     } ;
     Ptseq12  =  R ;

     return Ptseq12 ;
    }
  /***********************************************************************/
  void Eqfav_phase1et2 (Pointeur_ATiii *A)
    {
      /** Variables locales **/
      int I;
      int Cpt;
      int J;
      int Nv;
      int Pos;
      int Al;
      int E;
      int Ind;
      int Random;
      Typevect_V8Tii Tapts;
      Typestr_Tii R;
        Typetab_V8Tii T_Tapts;
      int _Px1;
      int _Px2;
      int _Px3;
      int _Px4;
      int _Px5;
      int _Px6;
      int _Px7;
      int _Px8;
      int _Px9;
      int _Px10;
      int _Px11;
      int _Px12;
      int _Px13;
      int _Px14;
      int _Px15;
      int _Px16;
      int _Px17;
      int _Px18;
      int _Px19;
      int _Px20;
      int _Px21;
      int _Px22;
      int _Px23;
      int _Px24;
      int _Px25;
      int _Px26;
      int _Px27;
      int _Px28;
      int _Px29;
      int _Px30;
      int _Px31;
      int _Px32;

      /** Corps du module **/
     Tapts = malloc(8 * sizeof(Typestr_Tii));
     int _Izw2;for (_Izw2=0; _Izw2<8; ++_Izw2)
       Tapts[_Izw2] = malloc( sizeof(Type_Tii ));
     R = malloc(sizeof(Type_Tii));
     int _Izw3;for (_Izw3=0; _Izw3<8; ++_Izw3)
       T_Tapts[_Izw3] = malloc(sizeof(Type_Tii));
     Aff_struct1_Tii ( R  , 0 ) ;
     Aff_struct2_Tii ( R  , 0 ) ;
     T_Tapts [ 0 ] = R ;
     T_Tapts [ 1 ] = R ;
     T_Tapts [ 2 ] = R ;
     T_Tapts [ 3 ] = R ;
     T_Tapts [ 4 ] = R ;
     T_Tapts [ 5 ] = R ;
     T_Tapts [ 6 ] = R ;
     T_Tapts [ 7 ] = R ;
     Init_vect_V8Tii ( Tapts , T_Tapts , 8 )  ;
     Cpt  =  8 ;
     while( ( Cpt > 0 )) {
       I  =  1 ;
       J  =  1 ;
       if( ( Cpt == 8 )) {
         Nv  =  3 ;

       } ;
       if( ( Cpt == 4 )) {
         Nv  =  2 ;

       } ;
       if( ( Cpt == 2 )) {
         Nv  =  1 ;

       } ;
       if( ( Cpt == 1 )) {
         Nv  =  0 ;

       } ;
       for( Pos  =  1 ;Pos <=  Cpt ; ++Pos){
         Random  =  Aleanombre(2 ) + 1 ;
         if( ( Random == 1 )) {
           _Px1 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
           _Px2 =  32 ;
           _Px3 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
           _Px4 =  32 ;
           if( Ptseq ( & Vpts , &_Px1, &_Px2) > Ptseq ( & Vpts , &_Px3, &_Px4)) {
             Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 1 ) ;
             }
           else
             {
             _Px5 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
             _Px6 =  32 ;
             _Px7 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
             _Px8 =  32 ;
             if( Ptseq ( & Vpts , &_Px5, &_Px6) < Ptseq ( & Vpts , &_Px7, &_Px8)) {
               Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 2 ) ;
               }
             else
               {
               Al  =  Aleanombre(2 ) + 1 ;
               Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , Al ) ;

             }
           } ;
           }
        /*-----------------*/
         else
           {
           if( ( Pos == 8 )) {
             _Px9 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
             _Px10 =  32 ;
             _Px11 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
             _Px12 =  32 ;
             if( Ptseq ( & Vpts , &_Px9, &_Px10) > Ptseq ( & Vpts , &_Px11, &_Px12)) {
               Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 1 ) ;
               }
             else
               {
               _Px13 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
               _Px14 =  32 ;
               _Px15 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
               _Px16 =  32 ;
               if( Ptseq ( & Vpts , &_Px13, &_Px14) < Ptseq ( & Vpts , &_Px15, &_Px16)) {
                 Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 2 ) ;
                 }
               else
                 {
                 Al  =  Aleanombre(2 ) + 1 ;
                 Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , Al ) ;

               }
             } ;
             }
           else
             {
             _Px17 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
             _Px18 =  32 ;
             _Px19 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
             _Px20 =  32 ;
             if( Ptseq ( & Vpts , &_Px17, &_Px18) > Ptseq ( & Vpts , &_Px19, &_Px20)) {
               Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 1 ) ;
               }
             else
               {
               _Px21 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
               _Px22 =  32 ;
               _Px23 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
               _Px24 =  32 ;
               if( Ptseq ( & Vpts , &_Px21, &_Px22) < Ptseq ( & Vpts , &_Px23, &_Px24)) {
                 Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 2 ) ;
                 }
               else
                 {
                 _Px25 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
                 _Px26 =  8 ;
                 _Px27 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
                 _Px28 =  8 ;
                 if( ( Ptseq1 ( & Tapts , &_Px25, &_Px26) > Ptseq1 ( & Tapts , &_Px27, &_Px28) )) {
                   Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 1 ) ;
                   }
                 else
                   {
                   _Px29 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
                   _Px30 =  8 ;
                   _Px31 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
                   _Px32 =  8 ;
                   if( ( Ptseq1 ( & Tapts , &_Px29, &_Px30) < Ptseq1 ( & Tapts , &_Px31, &_Px32) )) {
                     Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 2 ) ;
                     }
                   else
                     {
                     Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , Aleanombre(2 ) + 1 ) ;

                   }
                 }
               }
             }
           } ;
          /*-----------------*/
         }
       } ;
       if( ( Cpt == 8 )) {
         for( E  =  1 ;E <=  8 ; ++E){
                                (Tapts)[E] = ((Tapts)[E-1] +1) ;
           if( ( Struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & E , & *A ) )  ) == 1 )) {
             Aff_struct1_Tii ( Element_V8Tii ( Tapts , E   )  , Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & E , & *A ) )  ) ) ;
             }
           else
             {
             if( ( Struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & E , & *A ) )  ) == 2 )) {
               Aff_struct1_Tii ( Element_V8Tii ( Tapts , E   )  , Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & E , & *A ) )  ) ) ;
             }
           }
         } ;
       } ;
       Remp_ptsphase2 ( & *A , & Cpt , & Nv , & Tapts ) ;
       Remperes ( & *A , & Cpt , & J , & Nv , & I ) ;
       Cpt  =  Cpt / 2 ;

     } ;

    }
  /*****************************************************************************/
  void Score_coupe18 (Pointeur_ATiii *A)
    {
      /** Variables locales **/
      int I;
      int Cpt;
      int J;
      int Nv;
      int Pos;
      int Al;
      int _Px1;
      int _Px2;
      int _Px3;
      int _Px4;
      int _Px5;
      int _Px6;
      int _Px7;
      int _Px8;

      /** Corps du module **/
     Cpt  =  8 ;
     while( ( Cpt > 0 )) {
       I  =  1 ;
       J  =  1 ;
       if( ( Cpt == 8 )) {
         Nv  =  3 ;

       } ;
       if( ( Cpt == 4 )) {
         Nv  =  2 ;

       } ;
       if( ( Cpt == 2 )) {
         Nv  =  1 ;

       } ;
       if( ( Cpt == 1 )) {
         Nv  =  0 ;

       } ;
       for( Pos  =  1 ;Pos <=  Cpt ; ++Pos){
         _Px1 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
         _Px2 =  32 ;
         _Px3 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
         _Px4 =  32 ;
         if( Ptseq ( & Vcoupe2018 , &_Px1, &_Px2) < Ptseq ( & Vcoupe2018 , &_Px3, &_Px4)) {
           Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 1 ) ;
           }
         else
           {
           _Px5 =  Struct1_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
           _Px6 =  32 ;
           _Px7 =  Struct2_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  ) ;
           _Px8 =  32 ;
           if( Ptseq ( & Vcoupe2018 , &_Px5, &_Px6) > Ptseq ( & Vcoupe2018 , &_Px7, &_Px8)) {
             Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , 2 ) ;
             }
           else
             {
             Al  =  Aleanombre(2 ) + 1 ;
             Aff_struct3_Tiii ( Info_ATiii ( Acces_niv ( & Nv , & Pos , & *A ) )  , Al ) ;

           }
         } ;

       } ;
       Remperes ( & *A , & Cpt , & J , & Nv , & I ) ;
       Cpt  =  Cpt / 2 ;

     } ;

    }
  /******************************************************************************/
  void Remperes (Pointeur_ATiii *A , int *Cpt , int *J , int *Nv , int *I)
    {
      /** Variables locales **/
      int _Px1;
      int _Px2;
      int _Px3;
      int _Px4;
      int _Px5;
      int _Px6;
      int _Px7;

      /** Corps du module **/
     while( ( *I <= *Cpt ) && ( *Cpt > 1 )) {
       if( ( Struct3_Tiii ( Info_ATiii ( Acces_niv ( & *Nv , & *I , & *A ) )  ) == 1 )) {
         _Px1 =  *Nv - 1 ;
         Aff_struct1_Tiii ( Info_ATiii ( Acces_niv ( &_Px1, & *J , & *A ) )  , Struct1_Tiii ( Info_ATiii ( Acces_niv ( & *Nv , & *I , & *A ) )  ) ) ;
         }
       else
         {
         _Px2 =  *Nv - 1 ;
         Aff_struct1_Tiii ( Info_ATiii ( Acces_niv ( &_Px2, & *J , & *A ) )  , Struct2_Tiii ( Info_ATiii ( Acces_niv ( & *Nv , & *I , & *A ) )  ) ) ;

       } ;
       _Px3 =  *I + 1 ;
       if( ( Struct3_Tiii ( Info_ATiii ( Acces_niv ( & *Nv , &_Px3, & *A ) )  ) == 1 )) {
         _Px4 =  *Nv - 1 ;
         _Px5 =  *I + 1 ;
         Aff_struct2_Tiii ( Info_ATiii ( Acces_niv ( &_Px4, & *J , & *A ) )  , Struct1_Tiii ( Info_ATiii ( Acces_niv ( & *Nv , &_Px5, & *A ) )  ) ) ;
         }
       else
         {
         _Px6 =  *Nv - 1 ;
         _Px7 =  *I + 1 ;
         Aff_struct2_Tiii ( Info_ATiii ( Acces_niv ( &_Px6, & *J , & *A ) )  , Struct2_Tiii ( Info_ATiii ( Acces_niv ( & *Nv , &_Px7, & *A ) )  ) ) ;

       } ;
       *I  =  *I + 2 ;
       *J  =  *J + 1 ;

     } ;

    }
/******************************************************************************************************************************************************************/
void intro()
{

system("color 71");
Color(1,7);
printf("              _");
printf("                                                           \n");
printf("             ");
 Color(1 , 7);
printf("/_/");
printf("                                                             \n");
printf("     ");
Color(0,7);
printf("___  ___ _");
printf("                                                              \n");
printf("    ");
printf("/ _ \\/ __| |");
printf("                                                            \n");
printf("   ");
printf("|  __/\\__ \\ |    Ecole nationale Superieure d'Informatique");
printf("           \n");
printf("    ");
printf("\\___||___/_|    Cycle Preparatoire Integre (CPI) - ALSDD");
printf(" \n");
printf("\n");
printf("\n");
printf(" \n");
printf("                                     Algorithmique et Structures de Donnes Statiques  \n ");
printf("\n");
Color(1 , 7);
printf("                                            _  _  _  _  _   _  _  _  _   \n");
printf("                                           (_)(_)(_)(_)(_) (_)(_)(_)(_) _         \n");
printf("                                                 (_)       (_)         (_)  \n");
printf("                                                 (_)       (_) _  _  _ (_) \n");
printf("                                                 (_)       (_)(_)(_)(_)   \n");
printf("                                                 (_)       (_)            \n");
printf("                                                 (_)       (_)           \n");
printf("                                                 (_)       (_)        \n");
printf("\n");
Color(0 , 7);
printf("                                      Realise par :   TOUATI MOUNIA    -   SAADAOUI KAHINA  \n");
printf("                                      Section     : A                                             \n");
printf("                                      Groupe      : 3 -1                                            \n");
printf("                                      Version     : 10/06/2021      \n");
printf("                                      Encadre par : Dr. ZEGOUR                 \n");
printf("                                                                            \n");
Color(12 , 7);
printf("                                     ******************************************************* \n");
printf("                                     *   APPUYEZ SUR LA TOUCHE ENTREE POUR COMMENCER       * \n");
printf("                                     *******************************************************\n");
getchar() ;
}
/**************************************************************************************************************/
void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}
/*****************************************************************************************************************************************************************************/
  int main(int argc, char *argv[])
    {
      for (int i=0; i<=100; i++)
     {
      Tb[i]=malloc(120*sizeof(char));
       strcpy (Tb[i]," ");
    }
    strcpy(Tb[50],"QTR" ) ;strcpy(Tb[45],"EQR")   ;strcpy(Tb[19],"SNG")   ;
    strcpy(Tb[9],"PBS")   ;strcpy(Tb[4],"ANG")    ;strcpy(Tb[20],"IRN") ;strcpy(Tb[3],"AGT")   ;
    strcpy(Tb[48],"SAB")  ;strcpy(Tb[8],"MEX")  ;strcpy(Tb[25],"PLG") ;
   strcpy(Tb[2],"FRA") ;strcpy(Tb[67],"EMI")   ;strcpy(Tb[10],"DAN")  ;
    strcpy(Tb[34],"TUN")    ;strcpy(Tb[6],"ESG")  ;strcpy(Tb[100],"NID")   ;
    strcpy(Tb[11],"ALM")     ;strcpy(Tb[22],"JPN");strcpy(Tb[1],"BLG") ;
  strcpy(Tb[37],"CND");strcpy(Tb[23],"MAR")    ;strcpy(Tb[15],"CRT")  ;
  strcpy(Tb[0],"BSL")  ;strcpy(Tb[24],"SEB")   ;strcpy(Tb[13],"SUI")     ;strcpy(Tb[36],"CMR")  ;strcpy(Tb[7],"PTG")     ;
   strcpy(Tb[59],"GHA")      ;strcpy(Tb[12],"URU")   ;strcpy(Tb[28],"KOR")      ;
   strcpy(Tb[14],"USA")      ;strcpy(Tb[17],"PGA")  ;
int rep;
   do{
        Tab_g = malloc(8 * sizeof(Typevect_V4i));
     int _Izw3;for (_Izw3=0; _Izw3<8; ++_Izw3)
       Tab_g[_Izw3] = malloc( sizeof(Typevect_V4i ));
     V1 = malloc(4 * sizeof(int));
     V2 = malloc(4 * sizeof(int));
     V3 = malloc(4 * sizeof(int));
     V4 = malloc(4 * sizeof(int));
     V5 = malloc(4 * sizeof(int));
     V6 = malloc(4 * sizeof(int));
     V7 = malloc(4 * sizeof(int));
     V8 = malloc(4 * sizeof(int));
     Vpts = malloc(32 * sizeof(Typestr_Tii));
     int _Izw4;for (_Izw4=0; _Izw4<32; ++_Izw4)
       Vpts[_Izw4] = malloc( sizeof(Type_Tii ));
     Vcoupe2018 = malloc(32 * sizeof(Typestr_Tii));
     int _Izw5;for (_Izw5=0; _Izw5<32; ++_Izw5)
       Vcoupe2018[_Izw5] = malloc( sizeof(Type_Tii ));
     T1 = malloc(8 * sizeof(int));
     T2 = malloc(8 * sizeof(int));
     S = malloc(sizeof(Type_Tii));
     T = malloc(sizeof(Type_Tii));
     Info_noeud = malloc(sizeof(Type_Tiii));
     Tab_liste = malloc(8 * sizeof(Pointeur_LTiii));
     int _Izw6;for (_Izw6=0; _Izw6<8; ++_Izw6)
       Tab_liste[_Izw6] = malloc( sizeof(Pointeur_LTiii ));
       int g;
     for (g=0; g<8; ++g)Tab_liste[g] =NULL;
     Vclsmnt1 = malloc(8 * sizeof(int));
     Vclsmnt2 = malloc(8 * sizeof(int));
     Tapts = malloc(8 * sizeof(int));
     int _Izw7;for (_Izw7=0; _Izw7<32; ++_Izw7)
       T_Vcoupe2018[_Izw7] = malloc(sizeof(Type_Tii));
     T_V1 [ 0 ] = 51 ;
     T_V1 [ 1 ] = 10 ;
     T_V1 [ 2 ] = 20 ;
     T_V1 [ 3 ] = 46 ;
     Init_vect_V4i ( V1 , T_V1 , 4 )  ;
    /*GROUPE:A*/
     T_V2 [ 0 ] = 5 ;
     T_V2 [ 1 ] = 15 ;
     T_V2 [ 2 ] = 21 ;
     T_V2 [ 3 ] = 18 ;
     Init_vect_V4i ( V2 , T_V2 , 4 )  ;
    /*GROUPE:B*/
     T_V3 [ 0 ] = 4 ;
     T_V3 [ 1 ] = 9 ;
     T_V3 [ 2 ] = 26 ;
     T_V3 [ 3 ] = 49 ;
     Init_vect_V4i ( V3 , T_V3 , 4 )  ;
    /*GROUPE:C*/
     T_V4 [ 0 ] = 3 ;
     T_V4 [ 1 ] = 11 ;
     T_V4 [ 2 ] = 35 ;
     T_V4 [ 3 ] = 68 ;
     Init_vect_V4i ( V4 , T_V4 , 4 )  ;
    /*GROUPE:D*/
     T_V5 [ 0 ] = 7 ;
     T_V5 [ 1 ] = 12 ;
     T_V5 [ 2 ] = 23 ;
     T_V5 [ 3 ] = 101 ;
     Init_vect_V4i ( V5 , T_V5 , 4 )  ;
    /*GROUPE:E*/
     T_V6 [ 0 ] = 16 ;
     T_V6 [ 1 ] = 24 ;
     T_V6 [ 2 ] = 2 ;
     T_V6 [ 3 ] = 38 ;
     Init_vect_V4i ( V6 , T_V6 , 4 )  ;
    /*GROUPE:F*/
     T_V7 [ 0 ] = 1 ;
     T_V7 [ 1 ] = 37 ;
     T_V7 [ 2 ] = 25 ;
     T_V7 [ 3 ] = 14 ;
     Init_vect_V4i ( V7 , T_V7 , 4 )  ;
    /*GROUPE:G*/
     T_V8 [ 0 ] = 8 ;
     T_V8 [ 1 ] = 13 ;
     T_V8 [ 2 ] = 29 ;
     T_V8 [ 3 ] = 60 ;
     Init_vect_V4i ( V8 , T_V8 , 4 )  ;
    /*GROUPE:H*/
    /*---------------------------------------------------------------------*/
     T_Tab_g [ 0 ] = V1 ;
     T_Tab_g [ 1 ] = V2 ;
     T_Tab_g [ 2 ] = V3 ;
     T_Tab_g [ 3 ] = V4 ;
     T_Tab_g [ 4 ] = V5 ;
     T_Tab_g [ 5 ] = V6 ;
     T_Tab_g [ 6 ] = V7 ;
     T_Tab_g [ 7 ] = V8 ;
      char* TG[8]={"A","B","C","D","E","F","G","H"};
     intro();
     Init_vect_V8V4i ( Tab_g , T_Tab_g , 8 )  ;
     I  =  1 ;
     for( P  =  1 ;P <=  8 ; ++P){
       for( J  =  1 ;J <=  4 ; ++J){
         Aff_struct1_Tii ( S  , Element_V4i ( Element_V8V4i ( Tab_g , P   ) , J   ) ) ;
         Aff_struct2_Tii ( S  , 0 ) ;
         Aff_element_V32Tii ( Vpts , I   , S ) ;
         I  =  I + 1 ;

       }
     } ;
    /*----Remplissage du tableau de la participation à la coupe du monde 2018----*/
     Aff_struct1_Tii ( T  , 0 ) ;
     Aff_struct2_Tii ( T  , 0 ) ;
     T_Vcoupe2018 [ 0 ] = T ;
     T_Vcoupe2018 [ 1 ] = T ;
     T_Vcoupe2018 [ 2 ] = T ;
     T_Vcoupe2018 [ 3 ] = T ;
     T_Vcoupe2018 [ 4 ] = T ;
     T_Vcoupe2018 [ 5 ] = T ;
     T_Vcoupe2018 [ 6 ] = T ;
     T_Vcoupe2018 [ 7 ] = T ;
     T_Vcoupe2018 [ 8 ] = T ;
     T_Vcoupe2018 [ 9 ] = T ;
     T_Vcoupe2018 [ 10 ] = T ;
     T_Vcoupe2018 [ 11 ] = T ;
     T_Vcoupe2018 [ 12 ] = T ;
     T_Vcoupe2018 [ 13 ] = T ;
     T_Vcoupe2018 [ 14 ] = T ;
     T_Vcoupe2018 [ 15 ] = T ;
     T_Vcoupe2018 [ 16 ] = T ;
     T_Vcoupe2018 [ 17 ] = T ;
     T_Vcoupe2018 [ 18 ] = T ;
     T_Vcoupe2018 [ 19 ] = T ;
     T_Vcoupe2018 [ 20 ] = T ;
     T_Vcoupe2018 [ 21 ] = T ;
     T_Vcoupe2018 [ 22 ] = T ;
     T_Vcoupe2018 [ 23 ] = T ;
     T_Vcoupe2018 [ 24 ] = T ;
     T_Vcoupe2018 [ 25 ] = T ;
     T_Vcoupe2018 [ 26 ] = T ;
     T_Vcoupe2018 [ 27 ] = T ;
     T_Vcoupe2018 [ 28 ] = T ;
     T_Vcoupe2018 [ 29 ] = T ;
     T_Vcoupe2018 [ 30 ] = T ;
     T_Vcoupe2018 [ 31 ] = T ;
     /***************************************************************/
      /*char* Tb[120];
   for (int i=0; i<=100; i++)
     {
      Tb[i]=malloc(120*sizeof(char));
       strcpy (Tb[i]," ");
    }*/
    strcpy(Tb[50],"QTR" ) ;
    strcpy(Tb[45],"EQR")   ;
    strcpy(Tb[19],"SNG")   ;
    strcpy(Tb[9],"PBS")   ;
    strcpy(Tb[4],"ANG")    ;
    strcpy(Tb[20],"IRN") ;
    strcpy(Tb[3],"AGT")   ;
    strcpy(Tb[48],"SAB")  ;
    strcpy(Tb[8],"MEX")  ;
    strcpy(Tb[25],"PLG") ;
    strcpy(Tb[2],"FRA") ;
    strcpy(Tb[67],"EMI")   ;
    strcpy(Tb[10],"DAN")  ;
    strcpy(Tb[34],"TUN")    ;
    strcpy(Tb[6],"ESG")  ;
    strcpy(Tb[100],"NID")   ;
    strcpy(Tb[11],"ALM")     ;
    strcpy(Tb[22],"JPN");
    strcpy(Tb[1],"BLG") ;
     strcpy(Tb[37],"CND");
     strcpy(Tb[23],"MAR")    ;
     strcpy(Tb[15],"CRT")  ;
     strcpy(Tb[0],"BSL")  ;
     strcpy(Tb[24],"SEB")   ;
     strcpy(Tb[13],"SUI")     ;
     strcpy(Tb[36],"CMR")  ;
     strcpy(Tb[7],"PTG")     ;
   strcpy(Tb[59],"GHA")      ;
   strcpy(Tb[12],"URU")   ;
   strcpy(Tb[28],"KOR")      ;
   strcpy(Tb[14],"USA")      ;
   strcpy(Tb[17],"PGA")  ;
     /***************************************************************/
     Init_vect_V32Tii ( Vcoupe2018 , T_Vcoupe2018 , 32 )  ;

     for( I  =  1 ;I <=  32 ; ++I){
       Aff_struct1_Tii ( Element_V32Tii ( Vcoupe2018 , I   )  , Struct1_Tii ( Element_V32Tii ( Vpts , I   )  ) ) ;
       Eq  =  Struct1_Tii ( Element_V32Tii ( Vpts , I   )  ) ;
       Enonparticipe ( & Eq , & Vcoupe2018 ) ;
       Eqptour1 ( & Eq , & Vcoupe2018 ) ;
       Eqp8 ( & Eq , & Vcoupe2018 ) ;
       Eqp4 ( & Eq , & Vcoupe2018 ) ;
       Eqp2 ( & Eq , & Vcoupe2018 ) ;
       Eqp1 ( & Eq , & Vcoupe2018 ) ;

     } ;
     for( P  =  1 ;P <=  8 ; ++P){
       Creatablistes ( & Tab_g , & P , & Tab_liste ) ;

     } ;
     Color(2,7);
       printf ( "\n                                              ~~LA PREMIERE PHASE~~                     \n" ) ;
      Color(0, 7);
     printf("              _________________________________________________________________________________________________\n");
     printf("             |                                                                                                 |\n");
     printf ( "             |                    VEUILLEZ  CHOISIR LE CRITERE QUI FAIT GAGNER LES EQUIPES :                   | \n" ) ;
    printf("             |_________________________________________________________________________________________________|\n");
    printf("             |  >   1- Selon le hasard                                                                         |\n");
    printf("             |  >   2- Selon l'equipe favorite                                                                 |\n");
    printf("             |  >   3- Selon le hasard et l'equipe favorite                                                    |\n");
    printf("             |  >   4- Selon le hasard et l'equipe favorite  par alternance                                    |\n");
    printf("             |_________________________________________________________________________________________________|\n");
     scanf ( " %d", &Choix ) ;
    system("cls");
     if( ( Choix == 1 )) {
       printf ("\n                        VOUS AVEZ CHOISI  : SELON LE HASARD                        \n" ) ;
       Resultathasard ( & Tab_liste ) ;
       }
     else
       {
       if( ( Choix == 2 )) {
         printf ( "\n                    VOUS AVEZ CHOISI  : SELON L'EQUIPE FAVORITE                   \n" ) ;
         Rslt_eqfav ( & Tab_liste ) ;
         }
       else
         {
         if( ( Choix == 3 )) {
           printf ( "\n                    VOUS AVEZ CHOISI  : SELON LE HASARD ET L'EQUIPE FAVORITE                   \n" ) ;
           Rslt_has_efav ( & Tab_liste ) ;

         } ;
         if( ( Choix == 4 )) {
           printf ( "\n                    VOUS AVEZ CHOISI  : SELON LE HASARD ET L'EQUIPE FAVORITE EN ALTERNANCE                  \n" ) ;
           Etc1 ( & Tab_liste ) ;
         } ;
       }
     } ;
    printf ( " \n    *************************************************************************************************************" ) ;
     printf ( "\n                                      AFFICHAGE DES RENCONTRES\n" ) ;
     for( P  =  1 ;P <=  8 ; ++P)
        {
       printf("GROUPE %s :   ",TG[P-1]);
       Afficherencontre ( & P , & Tab_liste ) ;
       printf("\n\n");
       } ;
     Sommepts ( & Tab_liste , & Vpts ) ;
     Eqpclasses ( & Vclsmnt1 , & Vclsmnt2 , & Vpts ) ;
      printf ( " \n    *************************************************************************************************************" ) ;
        printf ( "\n                          LES VECTEURS DES PREMIERS ET SECONDS DE CHAQUE GROUPE\n" ) ;
     printf ( "\n -> VECTEUR DES PREMIERS DE CHAQUE GROUPE: \n" ) ;
     printf("                          [");
     for( I  =  1 ;I <= 8 ;I++)
        {
       printf ( "%2s |", Tb[Element_V8i(Vclsmnt1,I)-1]);
        } ;
        printf("]");
     printf ( "\n -> VECTEUR DES SECONDS DE CHAQUE GROUPE : \n" ) ;
     printf("                            [");
     for(  I  =  1 ;I <=  8 ; I++)
        {
       printf ( "%2s|", Tb[Element_V8i(Vclsmnt2,I)-1] ) ;
        } ;
        printf("]\n");
        Color(4 , 7);
       printf("                                                                               CLIQUEZ  SUR ENTREE POUR CONTINUER ... ");
       getch();
       system("cls");
    /*---------------------------FIN DE PHASE1--------------------------*/
     _Px1 =  3 ;
     Cons_arb ( & A , &_Px1) ;
      Color(2, 7);
      printf("\n  _________________________________________________________________________________________________________________\n");

      Color(2, 7);
     printf ( "\n                                              ~~LA DEUXIEME PHASE~~                     \n\n" ) ;
     Color(4, 7);
     printf("VEUILLEZ AGRANDIR LA CONSOLE POUR UN BON AFFICHAGE DE L'ARBRE.\n");
     Color(0, 7);
     Huit_final ( & A , & Vclsmnt1 , & Vclsmnt2 ) ;
    printf("              _________________________________________________________________________________________________\n");
     printf("             |                                                                                                 |\n");
     printf ( "             |                    VEUILLEZ  CHOISIR LE CRITERE QUI FAIT GAGNER LES EQUIPES :                   | \n" ) ;
    printf("             |_________________________________________________________________________________________________|\n");
    printf("             |  >   1- Selon le hasard                                                                         |\n");
    printf("             |  >   2- Selon l'equipe favorite                                                                 |\n");
    printf("             |  >   3- Selon la phase 01                                                                       |\n");
    printf("             |  >   4- Selon les resultats de la premiere phase et ceux des etapes precedentes de la phase 2   |\n");
    printf("             |  >   5- Selon 2 ET 3                                                                            |\n");
    printf("             |  >   6- Selon 2 ET 4                                                                            |\n");
    printf("             |  >   7- Selon les etapes atteintes dans la coupe du monde 2018                                  |\n");
   printf("             |_________________________________________________________________________________________________|\n");


  scanf ( " %d", &Choix ) ;
  system("cls");
  printf("\n");

     if( ( Choix == 1 )) {
       printf ( "\n ->  VOUS AVEZ CHOISI  :SELON LE HASARD                        \n" ) ;
       Score_hasard ( & A ) ;
       Remp_eqq ( & A ) ;
       }
     else
       {
       if( ( Choix == 2 )) {
         printf ( "\n ->  VOUS AVEZ CHOISI  :SELON L EQUIPE FAVORITE                        \n" ) ;
         Score_eqfav ( & A ) ;
         }
       else
         {
         if( ( Choix == 3 )) {
           printf ( "\n -> VOUS AVEZ CHOISI  :SELON LE RESULTAT DE PHASE1                        \n") ;
           Score_phase1 ( & A ) ;
           }
         else
           {
           if( ( Choix == 4 )) {
             printf ( "\n  -> VOUS AVEZ CHOISI  :SELON RESULTAT PHASE1 ET DES ETAPES LES PHASE 2                        \n") ;
             Score_phase1et2(& A) ;
             }
           else
             {
             if( ( Choix == 5 )) {
               printf ( "\n  -> VOUS AVEZ CHOISI  :SELON (2) ET (3)                        \n" ) ;
               Eqfv_phase1 ( & A ) ;
               }
             else
               {
               if( ( Choix == 6 ))
                {
                  printf ( "\n -> VOUS AVEZ CHOISI  :SELON (2)ET (4)                        \n" ) ;
                 Eqfav_phase1et2 ( & A ) ;
                 }
               else
                 {
                 if( ( Choix == 7 )) {
                  printf ( "\n ->  VOUS AVEZ CHOISI  :SELON LES ETAPES ATTEINTES DANS LA COUPE DU MONDE 2018                       \n" ) ;
                   Score_coupe18 ( & A ) ;
                 }
               }
             }
           }
         }
       }
     } ;

      cpt =0 ;
     Inordre ( & A ) ;
        printf("                                                                   ___________\n") ;
        printf("                                                                  |") ;
       printf ( "%2s ",Tb[E8.Champ1-1] );
       printf ( "%2s ",Tb[E8.Champ2-1] );
       printf ( "%3d", E8.Champ3 );
       printf ( "|\n" ) ;
       printf("                                                                   -----------\n") ;

       printf("                                        ________________________________|___________________________\n");
       printf("                                       |                                                            |\n");
       printf("                                       |                                                            |\n");

       printf("                                 ___________                                                     ___________\n") ;
       printf("                                |") ;
       printf ( "%2s ",Tb[E4.Champ1-1] );
       printf ( "%2s ",Tb[E4.Champ2-1] );
       printf ( "%3d|", E4.Champ3 );
       printf ( "                                                   |" ) ;
       printf ( "%2s ",Tb[E12.Champ1-1] );
       printf ( "%2s ",Tb[E12.Champ2-1] );
       printf ( "%3d|", E12.Champ3 );
       printf("\n") ;
       printf("                                 -----------                                                     -----------\n") ;
       printf("                     _________________|________________                                  ______________|_________________\n") ;
       printf("                    |                                  |                                |                                |\n") ;
       printf("                    |                                  |                                |                                |\n") ;
       printf("               ___________                        ___________                      ___________                      ___________\n");
       printf("              |") ;
       printf ( "%2s ",Tb[E2.Champ1-1] );
       printf ( "%2s ",Tb[E2.Champ2-1] );
       printf ( "%3d|", E2.Champ3 );
       printf ( "                      |" ) ;
       printf ( "%2s ",Tb[E6.Champ1-1] );
       printf ( "%2s ",Tb[E6.Champ2-1] );
       printf ( "%3d|", E6.Champ3 );
       printf(  "                    |") ;
       printf ( "%2s ",Tb[E10.Champ1-1] );
       printf ( "%2s ",Tb[E10.Champ2-1] );
       printf ( "%3d|", E10.Champ3 );
       printf ( "                    |" ) ;
       printf ( "%2s ",Tb[E14.Champ1-1] );
       printf ( "%2s ",Tb[E14.Champ2-1] );
       printf ( "%3d|", E14.Champ3 );
       printf("\n") ;
       printf("               -----------                        -----------                      -----------                      -----------\n");
       printf("                    |                                 |                                 |                                 |\n") ;
       printf("            ________|_______                  ________|_______                  ________|_______                   _______|_________ \n") ;
       printf("           |                |                |                |                |                |                 |                 |\n") ;
       printf("      ___________      ___________      ___________      ___________      ___________      ___________        ___________      ___________\n") ;
        printf("     |");
       printf ( "%2s ",Tb[E1.Champ1-1] );
       printf ( "%2s ",Tb[E1.Champ2-1] );
       printf ( "%3d|", E1.Champ3 );
       printf ( "    |" ) ;
       printf ( "%2s ",Tb[E3.Champ1-1] );
       printf ( "%2s ",Tb[E3.Champ2-1] );
       printf ( "%3d|", E3.Champ3 );
       printf ( "    |") ;
       printf ( "%2s ",Tb[E5.Champ1-1] );
       printf ( "%2s ",Tb[E5.Champ2-1] );
       printf ( "%3d|", E5.Champ3 );
       printf ( "    |" ) ;
       printf ( "%2s ",Tb[E7.Champ1-1] );
       printf ( "%2s ",Tb[E7.Champ2-1] );
       printf ( "%3d|", E7.Champ3 );
        printf( "    |") ;
       printf ( "%2s ",Tb[E9.Champ1-1] );
       printf ( "%2s ",Tb[E9.Champ2-1] );
       printf ( "%3d|", E9.Champ3 );
       printf ( "    |" ) ;
       printf ( "%2s ",Tb[E11.Champ1-1] );
       printf ( "%2s ",Tb[E11.Champ2-1] );
       printf ( "%3d|", E11.Champ3 );
       printf("      |") ;
       printf ( "%2s ",Tb[E13.Champ1-1] );
       printf ( "%2s ",Tb[E13.Champ2-1] );
       printf ( "%3d|", E13.Champ3 );
       printf ( "    |" ) ;
       printf ( "%2s ",Tb[E15.Champ1-1] );
       printf ( "%2s ",Tb[E15.Champ2-1] );
       printf ( "%3d", E15.Champ3 );
       printf("|\n") ;
        printf("      -----------      -----------      -----------      -----------      -----------      -----------        -----------      -----------\n") ;

      Color(4 , 7);
      printf("                                                                               CLIQUEZ SUR ENTREE POUR CONTINUER ... ");
       getch();
       system("cls");
        Color(0 , 7);
     printf("\n");
      printf("\n");
      printf("\n");
      printf(" ______________________________________________________________\n");
      printf("|                                                              |\n");
      printf("|                 Que voulez faire desormais?                  |\n");
      printf("|                                                              |\n");
      printf("|       1- Retourner au menu principal.                        |\n");
      printf("|       2- Quitter le programme.                               |\n");
      printf("|                                                              |\n");
      printf("|______________________________________________________________|\n");
       Color(10 , 7);
        printf("\n");
        Color(4 , 7);
      printf("\n Entrez le numero de votre choix : ");

      scanf("%d", &rep);
       Color(0 , 7);
       system("cls");
}
while(rep!=2);

      system("PAUSE");
      return 0;
    }
