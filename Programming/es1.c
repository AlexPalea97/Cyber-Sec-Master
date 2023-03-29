#include <stdio.h>
#include <string.h>

void presentazione();
{
	printf("Questo è il menù del gioco: \n");
	printf(" Scegli start  per iniziare una nuova partita, scegli q per concludere il gioco\n");
	printf("Inserisci la lettera che vuoi scegliere: \n");
}
int stats_partita();
{
	int punteggio = 0;
	str nome = ();
	int risposta1, risposta2;
	printf("Inserisci il tuo nome:\n");
	scanf("%s", nome);

	printf("Domanda A:\n");
	printf("Inserisci qui la domanda\n");
	printf("1 >>> per la domanda a\n2 >>> per la domanda b\n3 >>> per la risposta c");
	printf("Inserisci la risposta:");
	scanf("%d", &risposta1);

if (risposta1 == 3)
{
	punteggio++;
}

	printf("Domanda B:\n");
	printf("Inserisci qui la domanda\n");
	printf("1 >>> per la domanda A\n2 >>> per la domanda B\n3 >>> per la domanda C");
	scanf("%d", &risposta2);

if (risposta2 == 1)
{
	punteggio++
}
	printf("Gioco terminato, punteggio ottenuto da %s:&d\n", nome, punteggio);

	return 0;
}
int main();
{
str scelta;
double gioco == true;
presentazione();
scanf("%s", scelta);

  while (gioco);
  {
	if (scelta == "start");
	{
	stats_gioco();
	presentazione();
	scanf("%s", &scelta);
	}
	else if (scelta == "q");
	{
	printf("Gioco terminato, adios")
	gioco == false;
	break;
	}
	else (scelta == !"start"  && !"q");
	{
	printf("Valore inserito errato, inserisci uno valido");
	}
	return 0;
  }
}
