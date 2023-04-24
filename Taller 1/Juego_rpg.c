#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
char heroe [20];
int HP, arma,situaciones, daño, opcion, gorgona, ataque, dragon, Golem, uno;
int main () {
setlocale(LC_ALL,"");
HP=200;
printf ("Ingrese el nombre del heroe o heroina\n");
scanf ("%s",&heroe);
printf ("%s que arma desea usar\n 1.hacha\n 2.espada\n 3.arco\n",heroe);
scanf ("%d",&arma);
switch (arma) {
	case 1: 
		printf ("%s ha elegido hacha tiene un daño de 100 y su velocidad de ataque es baja\n",heroe);
		daño=100;
	break;
	case 2:
		printf ("%s ha elegido espada tiene un daño de 80 y su velocidad de ataque es media\n",heroe);
		daño = 80;
	break;
	case 3:
		printf ("%s ha elegido arco tiene un daño de 60 y su velocidad de ataque es rapida\n",heroe);
		daño = 60;
	break;
}
	 for(int x = 0; x < 2; x++){
    srand(time(NULL)); 
	  situaciones = rand() % 5 + 1;
    if(x==0){      
      uno=situaciones;
    }
    else{
      if(situaciones==uno){
        situaciones++;
      }
    }
 if(HP>0){
    switch(situaciones){
      case 1:
        printf("Estas viajando por diferentes mundo hasta que una deidad desconocida te ataca y pierdes todos tu poderes, caes en un pueblo y ves que en este mundo la tecnologia convive con la gente en ese momento toda la gente del pueblo va a ver si estas bien, en ese momento llega un dragon que haras? \n 1-ayudar al pueblo  \n 2-Ignorarlos y centrarte en la busqueda de la deidad desconocida  \n");
        scanf("%d", &opcion);
        switch(opcion){
          case 1:
          printf("Sacas tu arma y decides enfrentarlo logrando ahuyentarlo pero recibes un golpe con su cola.\n -20 HP \n");
          HP-=20;
          printf("Como gratitud del pueblo por haber decidido ayudarlos encantan tu arma con runas para que haga mas daño\n Daño + 25 \n");
          daño+=25;
          break;
          
          case 2:
          printf("Decides abandonar el pueblo en el camino te topas con el jefe del pueblo el cual logra hacerte un daño considerable y bajando la fuerza de tu arma.\n -45 HP\n -20 Daño \n");
          daño-=20;
		  HP-=45;
          break;
        }
      break;
      case 2:
        gorgona=300;
        printf("Vas avanzando en tu travesia cuando empiezas a escuchar un siseo miras detras de ti y ves una gorgona a punto de atacar debes decidir rapido que haras:\n 1-Esquivar a la gorgona \n 2-atacar \n");
        scanf("%d", &opcion);
        switch(opcion){
          case 1: 
            printf("Logras rodar hacia un lado evitando ser convertido en piedra por la gorgona y sacas tu arma para empezar el combate\n");
          break;
          case 2:
          printf("Sacas tu arma y logras refejar la mirida de piedra de la gorgona y te alista para tu batalla\n");
          break;
        }
        while(gorgona>0){

	        ataque = rand() %  20+1;
          if(ataque<20){
            gorgona-=daño;
            printf("Has golpeado al troll! \n Daño-> %d\n", daño);
          }
          printf("El troll te golpeó! \n HP - %d\n", ataque);
          HP-=ataque;
          if(HP<=0){
            break;
          }
        }
        printf("Finalmente, logras derrotar a la gorgona decapitandola decides continuar tu camino pero con mas cuidado de ataques sileciosos\n");
        
      break;
      case 3:
        printf("Investigando unas atiguas piramides te topas con un tipo de mecanismo que te propone un reto decifrar su arcertijo si lo logras te dejara pasar y si no lo logras te intentara matar.\n Su pregunta es: Si me tumbas soy todo, si me cortas no soy nada ¿Que soy?\n 1.El numero 8\n 2.El infinito\n 3.No lo se");
        scanf("%d",&opcion);
        switch(opcion){
          case 1: 
          printf("Respondes que el numero 8 y el mecanismo dice que es correcto si tumbas el 8 tiene la forma del infinito y si lo cortas tiene la forma del 0 que es nada y te deja pasar.\n");
          break;
          case 2:
          printf("Al responder, escuchas al mecanismo hacer unos sonidos sacando varios laser para acabar con tu vida, logras escapar, pero el mecanismo logró hacerte mucho daño \n HP - 100\n");
          HP-=80;
          break;
          case 3:
          printf("El mecanismo decide no atacarte y agradece tu honestidad, te deja pasar pero te garantiza que no todo en la vida va a ser tan facil.\n Daño - 5 \n");
          daño-=5;
          break;
          
        }
      break;
      case 4:
       dragon=250;

        printf("Te aventuras a una cueva oscura y húmeda en busca de un tesoro legendario cuando de repente te encuentras con un enorme dragón. El dragón te mira con ojos brillantes y empieza a mover su enorme cuerpo escamoso, listo para atacarte. Pero antes de que puedas hacer algo, el dragón habla con una voz profunda y amenazante:\n");
        printf("¿Qué haces aquí, humano? ¿Vienes a robar mi tesoro?\n Tienes que decidir qué hacer:\n 1- Mentir \n 2- Confesar\n");
        scanf("%d", &opcion);
        switch(opcion){
          case 1:
          printf("El dragón te deja explorar su cueva, pero tu sabes que si se llega a enterar que robaste algo, se acaba todo, vas con cuidado, recolectando cosas pequeñas que te van a servir en tu aventura, y te dispones a salir de la cueva\n ");
          break;

          case 2:
          printf("el dragon te amenaza esta es su cueva, y nadie va a robarle y salir con vida, panico entra en ti, sabes que llega el momento de pelear\n");
          while(dragon>0){

	        ataque = rand() %  20+1;
          if(ataque<20){
            dragon-=daño;
            printf("Has golpeado al dragón \n Daño-> %d\n", daño);
          }
          printf("El dragón te golpeó! \n HP - %d\n", ataque);
          HP-=ataque;
            if(HP<=0){
            break;
          }
          }
          break;
        }
        
      break;
      case 5:
        Golem=300;
      printf("Tu viaje ha sido largo, y te preocupa que  el camino sea mas dificil de lo que has encontrado, mientras piensas en todo esto, te acercas a una piedra para descansar, sin embargo, sientes una vibración y un gran golem se levanta de donde pensabas que solo habia una roca\n observas al golem y te das cuenta que tiene la mirada perdida en lo que parece ser una mariposa, levanta sus enormes manos, intentando atraparla\n Qué decides hacer?\n 1-atacar a la bestia\n 2-observar y ver que pasa\n");
      scanf("%d",&opcion);
      switch(opcion){
        case 1:
        printf("El golem es demasiado fuerte, su coraza de piedra destruye tu arma de forma muy rapida. Ves el final acercandose, pero decides seguir fuerte y continuar peleando \n");
        while(Golem>0){
	        ataque = rand() %  100+1;
          if(ataque<90){
            Golem-=daño;
            printf("Has golpeado al golem \n Daño-> %d\n", daño);
          }
          printf("El golem te golpeó! \n HP - %d\n", ataque);
          HP-=ataque;
          if(HP<=0){
            break;
          }
          }
        break;
        case 2:
        printf("Ves al golem finalmente atrapar a la mariposa, se contenta y a ti te causa gracia su alegria, lo aplaudes y el golem lo nota, se acerca a ti lentamente, y te entrega la mariposa, que de repente te hace sentir mucho mas fuerte \n HP + 50\n");
        HP+=50;
        break;
        
      }

      
      
      
    }
    }
    else{
      printf("Has muerto, GAME OVER\n");
      printf("Intenta de nuevo %s", heroe);
    }
    
    
  }
  if(HP>0){
      printf("Felicidades %s has ganado!\n", heroe);
    printf("HP: %d", HP);
    }
    else{
      printf("Has muerto, GAME OVER\n");
      printf("Intenta de nuevo %s", heroe);
    }
  
return 0;
}
