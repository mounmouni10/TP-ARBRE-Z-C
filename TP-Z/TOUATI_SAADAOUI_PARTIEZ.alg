    SOIENT
      TAB_G UN VECTEUR (8) DE VECTEUR (4) DE ENTIER   ;
      V1,V2,V3,V4,V5,V6,V7,V8 DES VECTEURS (4) DE ENTIER ;
      VPTS UN VECTEUR (32) DE (ENTIER,ENTIER) ; /* (NE,P)*/
      VCOUPE2018 UN VECTEUR (32) DE (ENTIER,ENTIER) ;
      T1 UN VECTEUR (8) DE ENTIER;
      T2 UN VECTEUR (8) DE ENTIER ;
      S:(ENTIER,ENTIER );
      T:(ENTIER,ENTIER );
      I ,J,P ,N, CHOIX,EQ UN ENTIER;
      A,R,AG,AD UN ARB DE (ENTIER,ENTIER,ENTIER);
      info_noeud :(ENTIER,ENTIER,ENTIER);
      MATCH UNE LISTE DE ( ENTIER, ENTIER, ENTIER);
      TAB_Liste UN VECTEUR (8) DE  LISTE DE (ENTIER,ENTIER,ENTIER);
      L,Q UN POINTEUR VERS UNE LISTE DE (ENTIER,ENTIER,ENTIER);
      VCLSMNT1 UN  VECTEUR (8) DE ENTIER ;
      VCLSMNT2 UN  VECTEUR (8) DE ENTIER ;
      TAPTS UN VECTEUR (8) DE ENTIER ;
/**************************************************************************/

    EQPCLASSES , PERMUT , RSLT_EQFAV , RSLT_HAS_EFAV, EQUPE1_2 ,ETC1:ACTION;
    CreaTabListes,AFFICHERENCONTRE,RESULTATHASARD,SOMMEPTS,REMPERES :ACTION ;
    ENONPARTICIPE, EQPTOUR1, EQP8 ,EQP4, EQP2, EQP1, SCORE_COUPE18  :ACTION;
    FEUILLE_POS :FONCTION( POINTEUR VERS UN ARB DE (ENTIER,ENTIER,ENTIER));
    ACCES_NIV   :FONCTION ( ARB DE (ENTIER,ENTIER,ENTIER)) ;
    INDICEEQ    :FONCTION (ENTIER) ;
    INDICEEQ1   :FONCTION (ENTIER) ;
    PTSEQ,PTSEQ1:FONCTION (ENTIER) ;
    CONS_ARB    :ACTION;
    Inordre     :ACTION;
    INSERT_ARB  :ACTION;
    Huit_Final  :ACTION;
    SCORE_HASARD:ACTION;
    REMP_EQQ    :ACTION;
    SCORE_EQFAV :ACTION;
    SCORE_PHASE1:ACTION;
    EQFV_PHASE1 :ACTION;
    SCORE_PHASE1ET2:ACTION;
    REMP_PTSPHASE2 :ACTION;
    EQFAV_PHASE1ET2:ACTION;




/**************************************************************************/
  DEBUT
  {---------------INITIALISATION DES TABLEAUX DE GROUPES-----------------}
      INIT_VECT(V1 ,[51,10,20,46]) ;  {GROUPE:A}
      INIT_VECT(V2, [5,15,21,18]) ;   {GROUPE:B}
      INIT_VECT(V3, [4,9,26,49]) ;    {GROUPE:C}
      INIT_VECT(V4, [3,11,35,68]) ;   {GROUPE:D}
      INIT_VECT(V5, [7,12,23,101]) ;  {GROUPE:E}
      INIT_VECT(V6, [16,24,2,38]) ;   {GROUPE:F}
      INIT_VECT(V7, [1,37,25,14]) ;   {GROUPE:G}
      INIT_VECT(V8, [8,13,29,60]) ;   {GROUPE:H}
  {---------------------------------------------------------------------}
      INIT_VECT(TAB_G , [V1,V2,V3,V4,V5,V6,V7,V8]) ;
         I:= 1 ;
         POUR P:=1 ,8
           POUR J:=1 , 4
          AFF_STRUCT(S,1,ELEMENT (ELEMENT(TAB_G[P])[ J] ) );
            AFF_STRUCT(S,2,0);
            AFF_ELEMENT ( VPTS[I],S);
            I := I +1 ;
            FINPOUR
        FINPOUR;

{----Remplissage du tableau de la participation à la coupe du monde 2018----}
   AFF_STRUCT(T , 1, 0 ) ;
   AFF_STRUCT(T , 2, 0 ) ;
INIT_VECT(VCOUPE2018,[T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T]);
POUR I:=1 ,32
  AFF_STRUCT(ELEMENT(VCOUPE2018[I] ),1,STRUCT(ELEMENT(VPTS[I]),1));
  EQ:=STRUCT(ELEMENT(VPTS[I]),1);
    APPEL  ENONPARTICIPE(EQ ,VCOUPE2018 );
    APPEL  EQPTOUR1 (EQ , VCOUPE2018);
    APPEL  EQP8 (EQ , VCOUPE2018);
    APPEL  EQP4 (EQ , VCOUPE2018);
    APPEL  EQP2(EQ , VCOUPE2018);
    APPEL  EQP1(EQ , VCOUPE2018);
FINPOUR ;


POUR P:=1 , 8
    APPEL CreaTabListes(TAB_G ,P ,TAB_Liste)  ;
FINPOUR;

    ECRIRE('Veuillez choisir le critére qui fait gagner les équipes:') ;
    ECRIRE('-1- Selon le hasard' ) ;
    ECRIRE('-2- Selon l équipe favorite ') ;
    ECRIRE('-3- Selon le hasard et l equipe favorite ') ;
    ECRIRE('-4- ETC') ;
    LIRE( CHOIX ) ;

    SI (CHOIX = 1 )
         ECRIRE('-------------------SELON LE HASARD--------------------');
         APPEL  RESULTATHASARD(TAB_Liste);
    SINON
      SI (CHOIX = 2 )
         ECRIRE('------------------SELON LEQUIPE FAVORITE--------------------');
         APPEL  RSLT_EQFAV(TAB_Liste) ;
      SINON
        SI (CHOIX = 3 )
         ECRIRE('-------------------SELON LE HASARD ET L EQUIPE FAVORITE--------------------');
         APPEL  RSLT_HAS_EFAV(TAB_Liste) ;
        FINSI ;
         SI (CHOIX = 4)
          ECRIRE('-------------------ECT--------------------');
          APPEL   ETC1(TAB_Liste) ;
        FINSI ;
      FINSI
     FINSI  ;

 ECRIRE('_________________________________________________________________');
 ECRIRE ('-AFFICHAGE DES RENCONTRES');

POUR P:=1 , 8
    APPEL AFFICHERENCONTRE(P ,TAB_Liste) ;
    ECRIRE('------------------------------------');
FINPOUR;
APPEL SOMMEPTS (TAB_Liste,VPTS);
APPEL    EQPCLASSES  ( VCLSMNT1 ,  VCLSMNT2 , VPTS  ) ;

ECRIRE('_________________________________________________________________');
 ECRIRE('VECTEUR DES PREMIERS DE CHAQUE GROUPE:');
POUR I:=1 ,8
     ECRIRE( ELEMENT (VCLSMNT1[I])) ;
     ECRIRE('---------------');
FINPOUR ;

ECRIRE('_________________________________________________________________');
ECRIRE('VECTEUR DES SECONDS DE CHAQUE GROUPE');
POUR I:=1 ,8
     ECRIRE( ELEMENT (VCLSMNT2[I])) ;
     ECRIRE('---------------');
FINPOUR ;

ECRIRE('_________________________________________________________________');
{---------------------------FIN DE PHASE1--------------------------}


    APPEL CONS_ARB(A,3);
    ECRIRE ('------------------------------------');
    APPEL Huit_Final(A,VCLSMNT1,VCLSMNT2);

    ECRIRE('Veuillez choisir le critére qui fait gagner les équipes:') ;
    ECRIRE('-1- Selon le hasard' ) ;
    ECRIRE('-2- Selon l équipe favorite ') ;
    ECRIRE('-3- Selon la phase 01') ;
    ECRIRE('-4- Selon les résultats de la première phase et ceux des étapes précédentes de la phase 2 ') ;
    ECRIRE('-5- Selon 2 ET 3 ') ;
    ECRIRE('-6- Selon 2 ET 4') ;
    ECRIRE('-7- ETC') ;

    LIRE( CHOIX ) ;
    ECRIRE ('LAFFICHAGE EST SELON LE PARCOURS INORDRE');

SI (CHOIX = 1 )
            ECRIRE('-------------------SELON LE HASARD--------------------');
            APPEL  SCORE_HASARD(A);
            APPEL REMP_EQQ (A);
SINON
 SI (CHOIX = 2 )
            ECRIRE('------------------SELON L EQUIPE FAVORITE--------------------');
            APPEL  SCORE_EQFAV (A) ;
 SINON
    SI (CHOIX = 3 )
            ECRIRE('-------------------SELON LE RESULTAT DE PHASE1--------------------');
            APPEL SCORE_PHASE1 (A) ;
    SINON
      SI (CHOIX = 4)
            ECRIRE('--------------SELON RESULTAT PHASE1 ET DES ETAPES LES PHASE 2------------');
            APPEL SCORE_PHASE1ET2(A) ;
      SINON
        SI (CHOIX = 5 )
            ECRIRE('------------------SELON (2) ET (3)--------------------');
            APPEL  EQFV_PHASE1 (A) ;
        SINON
          SI (CHOIX = 6 )
            ECRIRE('-------------------SELON (2)ET (4)--------------------');
            APPEL EQFAV_PHASE1ET2(A) ;
          SINON
           SI (CHOIX=7)
            ECRIRE('-------------------ECT2--------------------');
            APPEL SCORE_COUPE18(A) ;
           FINSI
          FINSI
        FINSI
      FINSI
    FINSI
   FINSI
 FINSI ;
 APPEL INORDRE(A);
 FIN

/************************************************************************/
ACTION ENONPARTICIPE(EQ ,VCOUPE2018 )
SOIENT
EQ UN ENTIER  ;
VCOUPE2018 UN VECTEUR (32) DE (ENTIER,ENTIER) ;
DEBUT
  SI(EQ=51)OU(EQ=46)OU(EQ=10)
    AFF_STRUCT(ELEMENT(VCOUPE2018[I]),2,32);
    FINSI ;
    SI(EQ=15)OU(EQ=18)OU(EQ=68)
    AFF_STRUCT(ELEMENT(VCOUPE2018[I]),2,32);
    FINSI ;
   SI(EQ=101)OU(EQ=38)OU(EQ=37)OU(EQ=60)
    AFF_STRUCT(ELEMENT(VCOUPE2018[I]),2,32);
    FINSI ;
FIN
/**********************************************************************/
  ACTION   EQPTOUR1 (EQ , VCOUPE2018)
  SOIENT
    EQ UN ENTIER  ;
VCOUPE2018 UN VECTEUR (32) DE (ENTIER,ENTIER) ;
DEBUT
    SI (EQ=20)OU(EQ=21)OU(EQ=49)
     AFF_STRUCT(ELEMENT(VCOUPE2018[I]),2,16);
     FINSI ;
     SI (EQ=26)OU(EQ=35)OU(EQ=12)
     AFF_STRUCT(ELEMENT(VCOUPE2018[I]),2,16);
     FINSI ;
    SI (EQ=24)OU(EQ=25)OU(EQ=29)
     AFF_STRUCT(ELEMENT(VCOUPE2018[I]),2,16);
    FINSI ;
 FIN
 /**********************************************************************/
 ACTION EQP8 (EQ , VCOUPE2018)
    SOIENT
    EQ UN ENTIER  ;
    VCOUPE2018 UN VECTEUR (32) DE (ENTIER,ENTIER) ;
DEBUT
  SI (EQ=4)OU(EQ=9)OU(EQ=11)OU(EQ=7)
    AFF_STRUCT(ELEMENT(VCOUPE2018[I]),2,8);
  FINSI ;
  SI(EQ=23)OU(EQ=14)OU(EQ=8)
    AFF_STRUCT(ELEMENT(VCOUPE2018[I]),2,8);
  FINSI ;
FIN
/*************************************************************************/
 ACTION EQP4 (EQ , VCOUPE2018)
    SOIENT
    EQ UN ENTIER  ;
    VCOUPE2018 UN VECTEUR (32) DE (ENTIER,ENTIER) ;
DEBUT
  SI ( EQ=1)OU(EQ=13)
      AFF_STRUCT(ELEMENT(VCOUPE2018[I]),2,4);
  FINSI ;
FIN
/*****************************************************************/
ACTION EQP2 (EQ , VCOUPE2018)
SOIENT
    EQ UN ENTIER  ;
    VCOUPE2018 UN VECTEUR (32) DE (ENTIER,ENTIER) ;
DEBUT
  SI (EQ=5)OU(EQ=2)
    AFF_STRUCT(ELEMENT(VCOUPE2018[I]),2,2);
  FINSI ;
FIN
/*************************************************/
ACTION EQP1(EQ , VCOUPE2018)
SOIENT
    EQ UN ENTIER  ;
    VCOUPE2018 UN VECTEUR (32) DE (ENTIER,ENTIER) ;
DEBUT
    SI (EQ=3)OU(EQ=16)
    AFF_STRUCT(ELEMENT(VCOUPE2018[I]),2,2);
    FINSI ;
FIN
 /**********************************************************************/
ACTION CreaTabListes (TAB_G ,N ,TAB_Liste)
SOIENT
    TAB_G UN VECTEUR (8) DE VECTEUR (4) DE ENTIER   ;
    MATCH UNE LISTE DE ( ENTIER, ENTIER, ENTIER);
    TAB_Liste UN VECTEUR (8) DE LISTE DE (ENTIER,ENTIER,ENTIER)   ;
    L,Q UN POINTEUR VERS UNE LISTE DE (ENTIER,ENTIER,ENTIER);
    N,I,J UN ENTIER;
    M:(ENTIER,ENTIER,ENTIER);
DEBUT
       J:=1 ;
       TANTQUE (J<4);
            POUR I:=J+1 ,4
            ALLOUER( Q );
            AFF_ADR(Q,ELEMENT(TAB_Liste[N]));
            AFF_ELEMENT( TAB_Liste[N],Q);
            AFF_STRUCT(M,1,ELEMENT(ELEMENT(TAB_G[N])[J]));
            AFF_STRUCT(M,2,ELEMENT(ELEMENT(TAB_G[N])[I]));
            AFF_STRUCT(M,3,-1);
            AFF_VAL(Q,M);
            FINPOUR ;
         J:=J+1;
       FINTANTQUE ;
FIN
/*****************************************************************************************/
ACTION AFFICHERENCONTRE(N ,TAB_Liste)
SOIENT
    TAB_Liste UN VECTEUR (8) DE LISTE DE (ENTIER,ENTIER,ENTIER)   ;
    L,Q UN POINTEUR VERS UNE LISTE DE (ENTIER,ENTIER,ENTIER);
    N,I,J UN ENTIER;
DEBUT
    L:= ELEMENT (TAB_Liste[N]);
    TANTQUE (L#NIL)
     ECRIRE(VALEUR(L));
     L:=SUIVANT(L);
    FINTANTQUE;
FIN
/*****************************************************************************************/
ACTION RESULTATHASARD ( TAB_Liste )
SOIENT
    TAB_Liste UN VECTEUR (8) DE LISTE DE (ENTIER,ENTIER,ENTIER)   ;
    L UN POINTEUR VERS UNE LISTE DE (ENTIER,ENTIER,ENTIER);
    I , T UN ENTIER ;
DEBUT
    POUR I:=1 , 8
      L:= ELEMENT (TAB_Liste[I]);
    TANTQUE (L#NIL)
      T:= ALEANOMBRE(3) ;
      AFF_STRUCT (VALEUR(L), 3 , T);
      L:=SUIVANT(L);
    FINTANTQUE
    FINPOUR;
FIN
/*****************************************************************************************/
     FONCTION INDICEEQ(VPTS,NE,PTE):ENTIER
        SOIENT
          I ,NE ,BOOL,R,PTE UN ENTIER ;
        VPTS UN VECTEUR (32) DE (ENTIER,ENTIER) ; /* (NE,P)*/
         DEBUT
          I:=1;
          R:=0;
          BOOL:=0;
          TANTQUE ((I<PTE+1 ) ET (BOOL=0))
              SI (STRUCT (ELEMENT(VPTS[I]),1)=NE)
                 BOOL:=1;
                 R:=I;
               FINSI ;
               I:=I+1;
          FINTANTQUE;
          INDICEEQ:=R;
     FIN
/*****************************************************************************************/
     ACTION SOMMEPTS(TAB_Liste,VPTS)
       SOIENT
        TAB_Liste UN VECTEUR (8) DE LISTE DE (ENTIER,ENTIER,ENTIER)   ;
        L UN POINTEUR VERS UNE LISTE DE (ENTIER,ENTIER,ENTIER);
        I , T,NE UN ENTIER ;
        VPTS UN VECTEUR (32) DE (ENTIER,ENTIER) ;
     DEBUT
        POUR I:=1 , 8
           L:=ELEMENT(TAB_Liste[I]);
           TANTQUE (L#NIL)
              SI (STRUCT (VALEUR(L),3)=1)
                 NE:= STRUCT (VALEUR(L),1) ;
                 T:=INDICEEQ(VPTS,NE,32);
                 AFF_STRUCT(ELEMENT(VPTS[T]),2,STRUCT(ELEMENT(VPTS[T]),2)+3);
                SINON
                  SI (STRUCT (VALEUR(L),3)=2)
                      NE:= STRUCT (VALEUR(L),2) ;
                    T:=INDICEEQ(VPTS,NE,32);
                    AFF_STRUCT(ELEMENT(VPTS[T]),2,STRUCT(ELEMENT(VPTS[T]),2)+3);
                   SINON
                     SI (STRUCT(VALEUR(L),3)=0)
                        NE:= STRUCT (VALEUR(L),2) ;
                         T:=INDICEEQ(VPTS,NE,32);
                    AFF_STRUCT(ELEMENT(VPTS[T]),2,STRUCT(ELEMENT(VPTS[T]),2)+1);
                       NE:= STRUCT (VALEUR(L),1) ;
                        T:=INDICEEQ(VPTS,NE,32);
                    AFF_STRUCT(ELEMENT(VPTS[T]),2,STRUCT(ELEMENT(VPTS[T]),2)+1);
                     FINSI
                  FINSI
              FINSI;
              L:=SUIVANT(L);
           FINTANTQUE
        FINPOUR;
     FIN
/*****************************************************************************************/
     ACTION  EQPCLASSES  ( VCLSMNT1 ,  VCLSMNT2 , VPTS  ) ;
     SOIENT
         VPTS UN VECTEUR (32) DE (ENTIER,ENTIER) ;
         VCLSMNT1 UN  VECTEUR (8) DE ENTIER ;
         VCLSMNT2 UN  VECTEUR (8) DE ENTIER ;
         TVAL UN VECTEUR (4) DE (ENTIER,ENTIER) ;
         I , J , NM UN ENTIER ;
     DEBUT
        I:= 1 ;
        J:=1 ;
         INIT_VECT( VCLSMNT1 , [0,0,0,0,0,0,0,0]);
         INIT_VECT( VCLSMNT2, [0,0,0,0,0,0,0,0]);
       TANTQUE (I<33)
          APPEL EQUPE1_2(VPTS  , I , I+3, TVAL )  ;
           NM := STRUCT(ELEMENT(TVAL[1]),1) ;
           AFF_ELEMENT( VCLSMNT1[J] ,NM ) ;
           NM := STRUCT(ELEMENT(TVAL[2]),1) ;
           AFF_ELEMENT(VCLSMNT2[J],NM) ;
          J:= J+1 ;
          I:= I+4 ;
       FINTANTQUE ;
     FIN
/*****************************************************************************************/
ACTION EQUPE1_2 (VPTS , I1 , I2 ,TVAL )
SOIENT
           I , I1 , I2, T,J ,N1,N2,M, PTSEQ1 , PTSEQ2,PTSEQ3 ,CPT DES ENTIERS ;
           VPTS UN VECTEUR (32) DE (ENTIER,ENTIER) ;
           TVAL UN VECTEUR (4) DE (ENTIER,ENTIER) ;
           P :(ENTIER, ENTIER)  ;
DEBUT
             T:=1;
             INIT_STRUCT(P , [0,0]) ;
             INIT_VECT(TVAL , [P,P,P,P]);
           POUR I:=I1, I2
                 AFF_STRUCT(ELEMENT(TVAL[T]),1, STRUCT(ELEMENT (VPTS[I]),1) );
                 AFF_STRUCT(ELEMENT(TVAL[T]),2, STRUCT(ELEMENT (VPTS[I]),2) );
                 T:=T+1;
           FINPOUR  ;

            POUR J:=1 , 4
            POUR I:=1 ,3
            SI ( STRUCT(ELEMENT(TVAL[I]),2)<STRUCT(ELEMENT(TVAL[I+1]),2) )

                   N1 :=  STRUCT(ELEMENT(TVAL[I+1]),1) ;
                   N2 :=   STRUCT(ELEMENT(TVAL[I+1]),2) ;

            AFF_STRUCT(ELEMENT(TVAL[I+1]),1, STRUCT(ELEMENT(TVAL[I]),1) );
            AFF_STRUCT(ELEMENT(TVAL[I+1]),2, STRUCT(ELEMENT (TVAL [I]),2) );

            AFF_STRUCT(ELEMENT(TVAL[I]),1, N1 );
            AFF_STRUCT(ELEMENT(TVAL[I]),2, N2 );
              FINSI
            FINPOUR
            FINPOUR ;

         /*  reclasser les equipes en cas d egalite */
         PTSEQ1 := STRUCT(ELEMENT(TVAL[1]),2) ;
         PTSEQ2 := STRUCT(ELEMENT(TVAL[2]),2) ;
         PTSEQ3:= STRUCT(ELEMENT(TVAL[3]),2) ;
  SI(PTSEQ1=PTSEQ2)OU(PTSEQ2=PTSEQ3)
   SI (PTSEQ1=PTSEQ2)
      CPT:= 0 ;
      I:=1 ;
     TANTQUE ( STRUCT(ELEMENT(TVAL[I]),2)=PTSEQ2)ET(I<4)
                  CPT:=CPT+1 ;
                  I :=I+1 ;
     FINTANTQUE ;
     M := ALEANOMBRE(CPT)+1 ;
     APPEL PERMUT(ELEMENT(TVAL[M]),ELEMENT(TVAL[1]) ) ;

     SI (CPT>2 )
        M:= ALEANOMBRE(CPT-1)+2 ;
        APPEL PERMUT(ELEMENT(TVAL[M]),ELEMENT(TVAL[2]) ) ;
      FINSI ;
   SINON
     SI (PTSEQ2=PTSEQ3)
       CPT:= 0 ;
      I:=2 ;
     TANTQUE ( STRUCT(ELEMENT(TVAL[I]),2)=PTSEQ2) ET(I<4)
                  CPT:= CPT+1 ;
                  I :=I+1 ;
     FINTANTQUE  ;
     M := ALEANOMBRE(CPT)+2 ;
     APPEL PERMUT(ELEMENT(TVAL[M]),ELEMENT(TVAL[2]) ) ;

      FINSI
   FINSI
FINSI ;
 FIN
/*****************************************************************************************/
      ACTION PERMUT ( VAL1 , VAL2 )
       SOIENT
           VAL1 , VAL2 : (ENTIER, ENTIER) ;
            N1 ,N2  UN ENTIER ;
       DEBUT
            N1 :=  STRUCT(VAL1,1) ;
            N2 :=   STRUCT(VAL1,2) ;
            AFF_STRUCT(VAL1,1, STRUCT(VAL2,1) );
            AFF_STRUCT(VAL1,2, STRUCT(VAL2,2) );
            AFF_STRUCT(VAL2,1, N1 );
            AFF_STRUCT(VAL2,2, N2 );
       FIN
/*****************************************************************************************/
  ACTION RSLT_EQFAV  (  TAB_Liste )
   SOIENT
        TAB_Liste UN VECTEUR (8) DE LISTE DE (ENTIER,ENTIER,ENTIER)   ;
        L UN POINTEUR VERS UNE LISTE DE (ENTIER,ENTIER,ENTIER);
        I , T UN ENTIER ;
     DEBUT
        POUR I:=1 , 8
        L:= ELEMENT (TAB_Liste[I]);
       TANTQUE (L#NIL)
       SI ( STRUCT( VALEUR(L),1)< STRUCT( VALEUR(L),2)  )
          T:= 1 ;
       SINON
          T:= 2 ;
       FINSI ;
          AFF_STRUCT (VALEUR(L), 3 , T);
          L:=SUIVANT(L);
       FINTANTQUE
        FINPOUR;
     FIN
/*****************************************************************************************/
      ACTION  RSLT_HAS_EFAV  (  TAB_Liste )
   SOIENT
        TAB_Liste UN VECTEUR (8) DE LISTE DE (ENTIER,ENTIER,ENTIER)   ;
        L UN POINTEUR VERS UNE LISTE DE (ENTIER,ENTIER,ENTIER);
        I , T , ALEA UN ENTIER ;
     DEBUT
        POUR I:=1 , 8
        L:= ELEMENT (TAB_Liste[I]);

       TANTQUE (L#NIL)
       /* choisir si l'hasard ou leqp fav qui designera le gagnant du match*/
           ALEA := ALEANOMBRE(2) +1 ;

    SI (ALEA = 1 )  /* on choisis selon le hasard */
          T:= ALEANOMBRE(3) ;
          AFF_STRUCT (VALEUR(L), 3 , T);

    SINON  /* on choisis selon l eqp fav */
       SI ( STRUCT( VALEUR(L),1)< STRUCT( VALEUR(L),2)  )
          T:= 1 ;
       SINON
          T:= 2 ;
       FINSI ;
       AFF_STRUCT (VALEUR(L), 3 , T);
    FINSI ;

       L:=SUIVANT(L);
       FINTANTQUE
        FINPOUR;
     FIN
/*****************************************************************************************/
   ACTION  INSERT_ARB(A)
   soient
         N,i UN ENTIER;
         A UN ARB DE (ENTIER,ENTIER,ENTIER);
         G,D UN POINTEUR VERS UN ARB DE (ENTIER,ENTIER,ENTIER);
         info_noeud :(ENTIER,ENTIER,ENTIER);
   DEBUT
    SI (A=NIL)
         CREERNOEUD(A);
          AFF_STRUCT ( info_noeud , 1 , 0) ;
              AFF_STRUCT ( info_noeud , 2 , 0) ;
              AFF_STRUCT ( info_noeud , 3 , 0 ) ;
              AFF_INFO ( A , info_noeud ) ;
    SINON
      G := FG ( A ) ;
      APPEL INSERT_ARB (G) ;
      AFF_FG ( A , G ) ;
       D := FD ( A ) ;
         APPEL INSERT_ARB ( D) ;
         AFF_FD ( A , D) ;
     FINSI;
   FIN
/*****************************************************************************************/
 ACTION CONS_ARB (A,N)
   SOIT
       A UN ARB DE (ENTIER,ENTIER,ENTIER);
       Ag UN ARB DE (ENTIER,ENTIER,ENTIER);
       Ad UN ARB DE (ENTIER,ENTIER,ENTIER);
       info_noeud :(ENTIER,ENTIER,ENTIER);
       I,N UN ENTIER;
   DEBUT
       POUR I := 1 , N

               APPEL INSERT_ARB ( Ag)  ;
               APPEL INSERT_ARB ( Ad ) ;
       FINPOUR ;
       CREERNOEUD ( A ) ;
       AFF_STRUCT ( info_noeud  , 1 , 0 ) ;
       AFF_STRUCT ( info_noeud  , 2 , 0 ) ;
       AFF_STRUCT ( info_noeud  , 3, 0 ) ;

       AFF_INFO ( A , info_noeud ) ;
       AFF_FG ( A , Ag ) ;
       AFF_FD ( A , Ad ) ;

   FIN

/*****************************************************************************************/
   ACTION Inordre ( A )
   SOIENT
       A UN ARB DE ( ENTIER, ENTIER , ENTIER  ) ;

   DEBUT
       SI ( A <> NIL )
           APPEL Inordre ( FG ( A ) ) ;
           ECRIRE ( INFO ( A ) , '|' ) ;
           APPEL Inordre ( FD ( A ) ) ;
       FINSI ;
   FIN
/*****************************************************************************************/
  FONCTION FEUILLE_POS(Pos,A): ARB DE (ENTIER,ENTIER,ENTIER)
  SOIENT
        A UN ARB DE ( ENTIER, ENTIER , ENTIER  ) ;
       /* F: UN POINTEUR VERS ARB DE (ENTIER,ENTIER,ENTIER);*/
        Pos,NUMF, FOUND UN ENTIER;
        P: PILE  DE ARB DE ( ENTIER, ENTIER , ENTIER  );
        Pi : POINTEUR VERS ARB DE (ENTIER,ENTIER,ENTIER) ;
       DEBUT
         NUMF:= 0 ;
          FOUND := 0 ;
          CREERPILE(P);
          Pi:=A   ;
         TANTQUE (((Pi#NIL)OU ( NON PILEVIDE(P)))ET(FOUND=0))
           TANTQUE(Pi#NIL)ET ( (FG(Pi)#NIL) OU(FD(Pi)#NIL) )
               EMPILER(P,Pi);
               Pi:= FG(Pi) ;
           FINTANTQUE ;
            SI(Pi#NIL) ET (FG(Pi)=NIL)ET (FD(Pi)=NIL)
              NUMF := NUMF+1 ;
                     SI (NUMF= POS)

                           FEUILLE_POS := Pi;
                           FOUND := 1 ;
                     FINSI         ;
              FINSI     ;
              SI(NUMF#Pos)
            DEPILER(P,Pi) ;
              Pi:= FD(Pi) ;
              FINSI ;
         FINTANTQUE;
        FIN
/*****************************************************************************************/
 ACTION Huit_Final (A, VCLSMNT1, VCLSMNT2)
 SOIENT
      A UN ARB DE ( ENTIER, ENTIER , ENTIER  ) ;
       VCLSMNT1 UN  VECTEUR (8) DE ENTIER ;
       VCLSMNT2 UN  VECTEUR (8) DE ENTIER ;
       info_noeud :(ENTIER,ENTIER,ENTIER);
       I:ENTIER;
       DEBUT
         POUR I:=1 , 8
               SI MOD(I,2)= 0

                  AFF_STRUCT(info_noeud ,1,ELEMENT(VCLSMNT1[I]));
                   AFF_STRUCT(info_noeud ,2,ELEMENT(VCLSMNT2[I-1]));
                   AFF_STRUCT(info_noeud ,3,-1);

               SINON
                    AFF_STRUCT(info_noeud ,1,ELEMENT(VCLSMNT1[I]));
                   AFF_STRUCT(info_noeud ,2,ELEMENT(VCLSMNT2[I+1]));
                    AFF_STRUCT(info_noeud ,3,-1);
               FINSI;
               AFF_INFO ( FEUILLE_POS(I,A) , info_noeud ) ;
         FINPOUR;
       FIN
/*****************************************************************************************/
  ACTION SCORE_HASARD(A) /*HASARD*/
  SOIENT
      A UN ARB DE ( ENTIER, ENTIER , ENTIER  ) ;
       S,I,J,NV:ENTIER;
  DEBUT
  S:=8 ;
  TANTQUE(S>0)
   SI (S=8)
    NV:=3 ;
    FINSI;
     SI (S=4)
    NV:=2 ;
    FINSI;
     SI (S=2)
    NV:=1 ;
    FINSI;
     SI (S=1)
    NV:=0 ;
    FINSI;
   POUR I:=1,S
   J:= ALEANOMBRE(3 ) ;
       SI( J=0)
         J:=   ALEANOMBRE(2 )+1 ;
         FINSI;
      AFF_STRUCT( INFO(ACCES_NIV(NV,I,A)),3,J);
   FINPOUR;
     S:=S/2;
   FINTANTQUE;
  FIN
/*****************************************************************************************/
FONCTION  ACCES_NIV(NV,POS,A) : ARB DE (ENTIER,ENTIER,ENTIER)
SOIENT
   A UN ARB DE ( ENTIER, ENTIER , ENTIER  ) ;
   NV,POS,CPT,VAL ,FOUND,PUISS :ENTIER;
   F: FILE DE ARB DE ( ENTIER, ENTIER , ENTIER  );
   noeud: POINTEUR VERS ARB DE (ENTIER,ENTIER,ENTIER) ;
   DEBUT
        CPT:=0;
        FOUND:=0;
        VAL:=POS ;
        PUISS:=1;
        noeud:=A;
        POUR I:=1, NV
          VAL:=VAL+PUISS;
          PUISS:=2*PUISS;
        FINPOUR ;
            CREERFILE(F)  ;
            SI (noeud#NIL)
               ENFILER(F,noeud);
            FSI;
            TANTQUE ((NON FILEVIDE(F)) ET (FOUND=0))
                CPT:=CPT+1;
               DEFILER (F,noeud);
              SI (CPT=VAL)
                  ACCES_NIV:=noeud;
                  FOUND:=1;
              FSI ;
  SI(FOUND=  0)
   SI (FG( noeud ) # NIL)
   ENFILER( F,FG( noeud ) );
    FSI ;
     SI (FD( noeud ) # NIL)
   ENFILER(  F,FD( noeud ) ) ;
    FSI ;
  FINSI ;
  FINTANTQUE;
   FIN
/*****************************************************************************************/
ACTION REMP_EQQ (A)
 SOIENT
  A UN ARB DE (ENTIER,ENTIER,ENTIER) ;
  I,J,NV,CPT :ENTIER;
  DEBUT
    CPT:=8;
    TANTQUE (CPT>0)
      I:=1;
       J:=1;
    SI (CPT=8)
    NV:=3 ;
    FINSI;
     SI (CPT=4)
    NV:=2 ;
    FINSI;
     SI (CPT=2)
    NV:=1 ;
    FINSI;
     SI (CPT=1)
    NV:=0 ;
    FINSI;
       TANTQUE ( I<=CPT) ET (CPT>1 )
           SI(STRUCT(INFO(ACCES_NIV(NV,I,A)),3) = 1)
         AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),1,STRUCT( INFO(ACCES_NIV(NV,I,A)),1));
         SINON
         AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),1,STRUCT(INFO(ACCES_NIV(NV,I,A)),2));
         FINSI;
          SI(STRUCT(INFO(ACCES_NIV(NV,I+1,A)),3) = 1)
         AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),2,STRUCT( INFO(ACCES_NIV(NV,I+1,A)),1));
         SINON
         AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),2,STRUCT( INFO (ACCES_NIV(NV,I+1,A)),2));
          FINSI;
          I:=I+2;
          J:= J+1 ;
        FINTANTQUE  ;
         CPT:= CPT/2;
     FINTANTQUE;
    FIN
/*****************************************************************************/
  ACTION SCORE_EQFAV (A)
  SOIENT
  A UN ARB DE (ENTIER,ENTIER,ENTIER) ;
  I,CPT,J,NV,pos:ENTIER;
  DEBUT
      CPT:=8;
    TANTQUE (CPT>0)
      I:=1;
       J:=1;
    SI (CPT=8)
    NV:=3 ;
    FINSI;
     SI (CPT=4)
    NV:=2 ;
    FINSI;
     SI (CPT=2)
    NV:=1 ;
    FINSI;
     SI (CPT=1)
    NV:=0 ;
    FINSI;
      POUR pos:=1 ,CPT
       SI STRUCT(INFO(ACCES_NIV(NV,pos,A)),1)>STRUCT(INFO(ACCES_NIV(NV,pos,A)),2)
               AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,1);
         SINON
             AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,2) ;
         FINSI;
         FINPOUR;
         TANTQUE ( I<=CPT) ET (CPT>1 )
               SI(STRUCT(INFO(ACCES_NIV(NV,I,A)),3) = 1)
              AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),1,STRUCT( INFO(ACCES_NIV(NV,I,A)),1));
              SINON
              AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),1,STRUCT(INFO(ACCES_NIV(NV,I,A)),2));
              FINSI;
               SI(STRUCT(INFO(ACCES_NIV(NV,I+1,A)),3) = 1)
               AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),2,STRUCT( INFO(ACCES_NIV(NV,I+1,A)),1));
              SINON
             AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),2,STRUCT( INFO (ACCES_NIV(NV,I+1,A)),2));
             FINSI;
          I:=I+2;
          J:= J+1 ;
        FINTANTQUE  ;
    CPT:=CPT/2 ;
    FINTANTQUE
  FIN
/*****************************************************************************/
   FONCTION PTSEQ (VPTS,NE,PTE):ENTIER
        SOIENT
          I ,NE ,BOOL,R ,PTE UN ENTIER ;
        VPTS UN VECTEUR (32) DE (ENTIER,ENTIER) ; /* (NE,P)*/
         DEBUT
          I:=1;
          R:=0;
          BOOL:=0;
          TANTQUE ((I<PTE+1) ET (BOOL=0))
              SI (STRUCT (ELEMENT(VPTS[I]),1)=NE)
                 BOOL:=1;
                 R:=STRUCT (ELEMENT(VPTS[I]),2);
               FINSI ;
               I:=I+1;
          FINTANTQUE;
         PTSEQ:=R;
         FIN
 /**************************************************************************/
  ACTION SCORE_PHASE1 (A)
  SOIENT
  A UN ARB DE (ENTIER,ENTIER,ENTIER) ;
  I,CPT,J,NV,pos,al:ENTIER;
  DEBUT
      CPT:=8;
    TANTQUE (CPT>0)
      I:=1;
       J:=1;
    SI (CPT=8)
    NV:=3 ;
    FINSI;
     SI (CPT=4)
    NV:=2 ;
    FINSI;
     SI (CPT=2)
    NV:=1 ;
    FINSI;
     SI (CPT=1)
    NV:=0 ;
    FINSI;
      POUR pos:=1 ,CPT
 SI PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1))> PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2))
               AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,1);
         SINON
             SI PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1))< PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2))
             AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,2) ;
             SINON
              al := ALEANOMBRE(2)+1;
               AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,al) ;
              FINSI
         FINSI;
         FINPOUR;
         TANTQUE ( I<=CPT) ET (CPT>1 )
               SI(STRUCT(INFO(ACCES_NIV(NV,I,A)),3) = 1)
              AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),1,STRUCT( INFO(ACCES_NIV(NV,I,A)),1));
              SINON
              AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),1,STRUCT(INFO(ACCES_NIV(NV,I,A)),2));
              FINSI;
               SI(STRUCT(INFO(ACCES_NIV(NV,I+1,A)),3) = 1)
               AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),2,STRUCT( INFO(ACCES_NIV(NV,I+1,A)),1));
              SINON
             AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),2,STRUCT( INFO (ACCES_NIV(NV,I+1,A)),2));
             FINSI;
          I:=I+2;
          J:= J+1;
        FINTANTQUE ;
    CPT:=CPT/2 ;
    FINTANTQUE  ;
  FIN
 /*****************************************************************************************/
 ACTION EQFV_PHASE1 (A)
 SOIENT
  A UN ARB DE (ENTIER,ENTIER,ENTIER) ;

  I,CPT,J,NV,pos,ALEA:ENTIER;
  DEBUT
      CPT:=8;
    TANTQUE (CPT>0)
      I:=1;
       J:=1;
    SI (CPT=8)
    NV:=3 ;
    FINSI;
     SI (CPT=4)
    NV:=2 ;
    FINSI;
     SI (CPT=2)
    NV:=1 ;
    FINSI;
     SI (CPT=1)
    NV:=0 ;
    FINSI;
 POUR pos:=1 ,CPT
 SI STRUCT(INFO(ACCES_NIV(NV,pos,A)),1)>STRUCT(INFO(ACCES_NIV(NV,pos,A)),2)
    SI PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1),32)<PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2),32)
               ALEA := ALEANOMBRE(2)+1 ;
                ECRIRE(ALEA) ;
    SINON
               ALEA := 1 ;
    FINSI;

            AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,ALEA);

 SINON
 SI STRUCT(INFO(ACCES_NIV(NV,pos,A)),1)<STRUCT(INFO(ACCES_NIV(NV,pos,A)),2)
      SI PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2),32)<PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1),32)
               ALEA := ALEANOMBRE(2)+1 ;
               ECRIRE(ALEA) ;
    SINON
               ALEA := 2 ;
    FINSI;

            AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,ALEA);
 FINSI ;
 FINSI ;
 FINPOUR;
       TANTQUE ( I<=CPT) ET (CPT>1 )
               SI(STRUCT(INFO(ACCES_NIV(NV,I,A)),3) = 1)
              AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),1,STRUCT( INFO(ACCES_NIV(NV,I,A)),1));
              SINON
              AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),1,STRUCT(INFO(ACCES_NIV(NV,I,A)),2));
              FINSI;
               SI(STRUCT(INFO(ACCES_NIV(NV,I+1,A)),3) = 1)
               AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),2,STRUCT( INFO(ACCES_NIV(NV,I+1,A)),1));
              SINON
             AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),2,STRUCT( INFO (ACCES_NIV(NV,I+1,A)),2));
             FINSI;
          I:=I+2;
          J:= J+1 ;
        FINTANTQUE  ;
    CPT:=CPT/2 ;
    FINTANTQUE
  FIN
/**************************************************************************************************************/
ACTION ETC1(TAB_Liste)
SOIENT
        TAB_Liste UN VECTEUR (8) DE LISTE DE (ENTIER,ENTIER,ENTIER)   ;
        L UN POINTEUR VERS UNE LISTE DE (ENTIER,ENTIER,ENTIER);
        I , T , ALEA UN ENTIER ;
     DEBUT
        POUR I:=1 , 8
        L:= ELEMENT (TAB_Liste[I]);
          SI (MOD(I,2)=1)
           ALEA:=1 ;
          SINON
           ALEA:=2 ;
          FINSI  ;
       TANTQUE (L#NIL)
    SI (ALEA = 1 )  /* on choisis selon le hasard */
          T:= ALEANOMBRE(3) ;
          AFF_STRUCT (VALEUR(L), 3 , T);
    SINON  /* on choisis selon l eqp fav */
       SI ( STRUCT( VALEUR(L),1)< STRUCT( VALEUR(L),2)  )
          T:= 1 ;
       SINON
          T:= 2 ;
       FINSI ;
       AFF_STRUCT (VALEUR(L), 3 , T);
    FINSI ;

       L:=SUIVANT(L);
       FINTANTQUE
        FINPOUR;
     FIN
/*****************************************************************************************/
  ACTION SCORE_PHASE1ET2(A)
 SOIENT
  A UN ARB DE (ENTIER,ENTIER,ENTIER) ;
  I,CPT,J,NV,pos,al,E ,ind:ENTIER;
  TAPTS UN VECTEUR (8) DE (ENTIER,ENTIER) ;
  R: (ENTIER,ENTIER) ;
DEBUT
    AFF_STRUCT(R,1,0);
    AFF_STRUCT(R,2,0);
    INIT_VECT(TAPTS,[R,R,R,R,R,R,R,R]) ;
    CPT:=8;
    TANTQUE (CPT>0)
      I:=1;
       J:=1;
    SI (CPT=8)
    NV:=3 ;
    FINSI;
     SI (CPT=4)
    NV:=2 ;
    FINSI;
     SI (CPT=2)
    NV:=1 ;
    FINSI;
     SI (CPT=1)
    NV:=0 ;
    FINSI;
      POUR pos:=1 ,CPT
       SI(pos=8)
         SI PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1),32)> PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2),32)
               AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,1);
         SINON
             SI PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1),32)< PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2),32)
             AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,2) ;
             SINON
              al := ALEANOMBRE(2)+1;
               AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,al) ;
             FINSI
          FINSI;

     POUR E:=1, 8
     SI (STRUCT(INFO(ACCES_NIV(NV,E,A)),3)=1 )
        AFF_STRUCT (ELEMENT(TAPTS[E]),1,STRUCT(INFO(ACCES_NIV(NV,E,A)),1))   ;
     SINON
        SI (STRUCT(INFO(ACCES_NIV(NV,E,A)),3)=2)
        AFF_STRUCT (ELEMENT(TAPTS[E]),1,STRUCT(INFO(ACCES_NIV(NV,E,A)),2))   ;
        FINSI
       FINSI
     FINPOUR;

  SINON
      SI PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1),32)> PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2),32)
               AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,1);
      SINON
        SI PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1),32)<PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2),32)
          AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,2) ;
        SINON
          SI(PTSEQ1(TAPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1),8)>PTSEQ1(TAPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2),8))
                 AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,1);
          SINON
            SI(PTSEQ1(TAPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1),8)<PTSEQ1(TAPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2),8))
               AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,2);
            SINON
               AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,ALEANOMBRE(2)+1) ;
            FINSI
          FINSI
        FINSI
      FINSI
  FINSI;
  FINPOUR;
   APPEL REMP_PTSPHASE2(A,CPT,NV,TAPTS) ;

       TANTQUE ( I<=CPT) ET (CPT>1 )
               SI(STRUCT(INFO(ACCES_NIV(NV,I,A)),3) = 1)
              AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),1,STRUCT( INFO(ACCES_NIV(NV,I,A)),1));
              SINON
              AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),1,STRUCT(INFO(ACCES_NIV(NV,I,A)),2));
              FINSI;
               SI(STRUCT(INFO(ACCES_NIV(NV,I+1,A)),3) = 1)
               AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),2,STRUCT( INFO(ACCES_NIV(NV,I+1,A)),1));
              SINON
             AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),2,STRUCT( INFO (ACCES_NIV(NV,I+1,A)),2));
             FINSI;
          I:=I+2;
          J:= J+1 ;
        FINTANTQUE  ;

    CPT:=CPT/2;
  FINTANTQUE ;
  FIN
/****************************************************************************************/
 ACTION REMP_PTSPHASE2(A,CPT,NV,TAPTS)
 SOIT
   A UN ARB DE (ENTIER,ENTIER,ENTIER) ;
   E,CPT,ind,NV UN ENTIER ;
    TAPTS UN VECTEUR (8) DE (ENTIER,ENTIER) ;
 DEBUT
  POUR E:=1, CPT
     SI (STRUCT(INFO(ACCES_NIV(NV,E,A)),3)=1 )
       SI (STRUCT(INFO(ACCES_NIV(NV,E,A)),1)<STRUCT(INFO(ACCES_NIV(NV,E,A)),2))
       ind:= INDICEEQ1(TAPTS,STRUCT(INFO(ACCES_NIV(NV,E,A)),1),8);
       AFF_STRUCT(ELEMENT(TAPTS[ind]),2,STRUCT(ELEMENT(TAPTS[ind]),2)+1 );
       FINSI;
     SINON
        SI (STRUCT(INFO(ACCES_NIV(NV,E,A)),3)=2)
         SI (STRUCT(INFO(ACCES_NIV(NV,E,A)),2)<STRUCT(INFO(ACCES_NIV(NV,E,A)),1))
         ind:=  INDICEEQ1(TAPTS,STRUCT(INFO(ACCES_NIV(NV,E,A)),2),8);
         AFF_STRUCT (ELEMENT(TAPTS[ind]),2,STRUCT(ELEMENT(TAPTS[ind]),2)+1);
         FINSI
        FINSI
     FINSI
    FINPOUR ;
   FIN
   /******************************************************************/
      FONCTION INDICEEQ1(TAPTS,NE,PTE):ENTIER
        SOIENT
          I ,NE ,BOOL,R,PTE UN ENTIER ;
        TAPTS UN VECTEUR (8) DE (ENTIER,ENTIER) ; /* (NE,P)*/
         DEBUT
          I:=1;
          R:=0;
          BOOL:=0;

          TANTQUE ((I<PTE+1 ) ET (BOOL=0))
              SI (STRUCT (ELEMENT(TAPTS[I]),1)=NE)
                 BOOL:=1;
                 R:=I;
               FINSI ;
               I:=I+1;
          FINTANTQUE;

          INDICEEQ1:=R;
         FIN
  /*********************************************************************/
         FONCTION PTSEQ1(TAPTS,NE,PTE):ENTIER
        SOIENT
          I ,NE ,BOOL,R ,PTE UN ENTIER ;
          TAPTS UN VECTEUR (8) DE (ENTIER,ENTIER) ; /* (NE,P)*/
         DEBUT
          I:=1;
          R:=0;
          BOOL:=0;
          TANTQUE ((I<PTE+1) ET (BOOL=0))
              SI (STRUCT (ELEMENT(TAPTS[I]),1)=NE)
                 BOOL:=1;
                 R:=STRUCT (ELEMENT(TAPTS[I]),2);
               FINSI ;
               I:=I+1;
          FINTANTQUE;
         PTSEQ1:=R;
         FIN
 /***********************************************************************/
  ACTION EQFAV_PHASE1ET2 (A)
 SOIENT
  A UN ARB DE (ENTIER,ENTIER,ENTIER) ;
  I,CPT,J,NV,pos,al,E ,ind,random:ENTIER;
  TAPTS UN VECTEUR (8) DE (ENTIER,ENTIER) ;
  R: (ENTIER,ENTIER) ;
DEBUT
    AFF_STRUCT(R,1,0);
    AFF_STRUCT(R,2,0);
    INIT_VECT(TAPTS,[R,R,R,R,R,R,R,R]) ;
    CPT:=8;
    TANTQUE (CPT>0)
      I:=1;
       J:=1;
    SI (CPT=8)
    NV:=3 ;
    FINSI;
     SI (CPT=4)
    NV:=2 ;
    FINSI;
     SI (CPT=2)
    NV:=1 ;
    FINSI;
     SI (CPT=1)
    NV:=0 ;
    FINSI;
     POUR pos:=1 ,CPT
      random := ALEANOMBRE(2)+1;
      SI (random=1)
      SI PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1),32)> PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2),32)
               AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,1);
         SINON
      SI PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1),32)< PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2),32)
             AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,2) ;
             SINON
               al := ALEANOMBRE(2)+1;
               AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,al) ;
             FINSI
         FINSI;
      SINON
/*-----------------*/
 SI(pos=8)
         SI PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1),32)> PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2),32)
               AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,1);
         SINON
             SI PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1),32)< PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2),32)
             AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,2) ;
             SINON
              al := ALEANOMBRE(2)+1;
               AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,al) ;
             FINSI
          FINSI;


  SINON
      SI PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1),32)> PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2),32)
               AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,1);
      SINON
        SI PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1),32)<PTSEQ(VPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2),32)
          AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,2) ;
        SINON
          SI(PTSEQ1(TAPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1),8)>PTSEQ1(TAPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2),8))
                 AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,1);
          SINON
            SI(PTSEQ1(TAPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1),8)<PTSEQ1(TAPTS,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2),8))
               AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,2);
            SINON
               AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,ALEANOMBRE(2)+1) ;
            FINSI
          FINSI
        FINSI
      FINSI
  FINSI;
 /*-----------------*/
      FINSI
     FINPOUR;
 SI( CPT=8)
 POUR E:=1, 8
     SI (STRUCT(INFO(ACCES_NIV(NV,E,A)),3)=1 )
        AFF_STRUCT (ELEMENT(TAPTS[E]),1,STRUCT(INFO(ACCES_NIV(NV,E,A)),1))   ;
     SINON
        SI (STRUCT(INFO(ACCES_NIV(NV,E,A)),3)=2)
        AFF_STRUCT (ELEMENT(TAPTS[E]),1,STRUCT(INFO(ACCES_NIV(NV,E,A)),2))   ;
        FINSI
       FINSI
     FINPOUR;
 FINSI ;
      APPEL REMP_PTSPHASE2(A,CPT,NV,TAPTS) ;

     APPEL    REMPERES (A,CPT,J,NV,I)  ;
    CPT:=CPT/2;
  FINTANTQUE ;
  FIN

 /*****************************************************************************/
 ACTION SCORE_COUPE18 (A)
  SOIENT
  A UN ARB DE (ENTIER,ENTIER,ENTIER) ;
  I,CPT,J,NV,pos,al:ENTIER;
  DEBUT
      CPT:=8;
    TANTQUE (CPT>0)
      I:=1;
       J:=1;
    SI (CPT=8)
    NV:=3 ;
    FINSI;
     SI (CPT=4)
    NV:=2 ;
    FINSI;
     SI (CPT=2)
    NV:=1 ;
    FINSI;
     SI (CPT=1)
    NV:=0 ;
    FINSI;
      POUR pos:=1 ,CPT
 SI PTSEQ(VCOUPE2018,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1),32)< PTSEQ(VCOUPE2018,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2),32)
 AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,1);
 SINON
SI PTSEQ(VCOUPE2018,STRUCT(INFO(ACCES_NIV(NV,pos,A)),1),32)> PTSEQ(VCOUPE2018,STRUCT(INFO(ACCES_NIV(NV,pos,A)),2),32)
             AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,2) ;
             SINON
              al := ALEANOMBRE(2)+1;
               AFF_STRUCT(INFO(ACCES_NIV(NV,pos,A)),3,al) ;
              FINSI
         FINSI;
         FINPOUR;

            APPEL REMPERES (A,CPT,J,NV,I) ;
    CPT:=CPT/2 ;
    FINTANTQUE  ;
  FIN
 /******************************************************************************/
 ACTION REMPERES (A,CPT,J,NV,I)
 SOIENT
  A UN ARB DE (ENTIER,ENTIER,ENTIER) ;
  I,CPT,J,NV:ENTIER;
 DEBUT

   TANTQUE ( I<=CPT) ET (CPT>1 )
               SI(STRUCT(INFO(ACCES_NIV(NV,I,A)),3) = 1)
              AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),1,STRUCT( INFO(ACCES_NIV(NV,I,A)),1));
              SINON
              AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),1,STRUCT(INFO(ACCES_NIV(NV,I,A)),2));
              FINSI;
               SI(STRUCT(INFO(ACCES_NIV(NV,I+1,A)),3) = 1)
               AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),2,STRUCT( INFO(ACCES_NIV(NV,I+1,A)),1));
              SINON
             AFF_STRUCT(INFO(ACCES_NIV(NV-1,J,A)),2,STRUCT( INFO (ACCES_NIV(NV,I+1,A)),2));
             FINSI;
          I:=I+2;
          J:= J+1 ;
        FINTANTQUE  ;
   FIN



