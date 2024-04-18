#include <stdio.h>


int main() 
{
    char nome[100];
    int scelta;
    char invio;
    int dado;
    printf("Benvenut* Boss, è pront* ad iniziare? Solo una domanda, se posso, come dobbiamo chiamarla?\n");
    scanf("%s", nome);
    printf("Allora salve %s, e benvenuto nel gioco!\n", nome);
    printf("Purtroppo però non possiamo ancora iniziare, deve scegliere il suo personaggio!\n");
    scanf("%c", &invio);
    printf("Scelga uno dei seguenti personaggi:\n");
    printf("1. Bill Gates Punteggio: Carisma=10/ Gestione economica=8/ Visione=6. \n");
    printf("2. Elon Musk Punteggio: Carisma=8/ Gestione economica=6/ Visione=10.\n");
    printf("3. Warren Buffet Punteggio: Carisma=8/ Gestione economica= 10/ Visione=6.\n");
    scanf("%d", &scelta);
    if(scelta==1)
    {
        printf("Hai scelto Bill Gates!\n");
        printf("INIZIAMO!\n");
        printf("Lancia il dado per iniziare!\n");
        scanf("%c", &invio);
        printf(".....\n");
        scanf("%c", &invio);
        printf("Il dado ha dato come risultato: 4\n");
        scanf("%c", &invio);
        scanf("Ti è uscita come azienda: StellarTechSolution: VM:8mld/ Budget:250mln/ Morale dipendenti: medio//
        OBBIETTIVI: ammodernamento della società, VM:10mld ");
        printf("Ecco a lei i diversi piani di sviluppo, sclega lei quello più consono per la nostra azienda:");
    }
    else if(scelta==2)
    {
        printf("Hai scelto Elon Musk!\n");
        printf("INIZIAMO!\n");
        printf("Lancia il dado per iniziare!\n");
        scanf("%c", &invio);
        printf(".....\n");
        scanf("%c", &invio);
        printf("Il dado ha dato come risultato: 5\n");
        scanf("%c", &invio);
        scanf("Ti è uscita come azienda: InfinityInnovations Inc: VM:22mld/ Budget:700mln/ Morale dipendenti: basso//
                OBBIETTIVI: lancio del nuovo prodotto/ morale dipendenti: alto");
         printf("Ecco a lei i diversi piani di sviluppo, sclega lei quello più consono per la nostra azienda:");
    }
    else if(scelta==3)
    {
        printf("Hai scelto Warren Buffet!\n");
        printf("INIZIAMO!\n");
        printf("Lancia il dado per iniziare!\n");
        scanf("%c", &invio);
        printf(".....\n");
        scanf("%c", &invio);
        printf("Il dado ha dato come risultato: 3\n");
        scanf("%c", &invio);
        scanf("Ti è uscita come azienda: QuantumEnterprises Ltd: VM:2mld/ Budget: 100mln/ Morale dipendenti: alto//
                 OBBIETTIVI: acquisizione della società rivale, lasciare 7 mln di budget per le campagne publicitarie");
        printf("Ecco a lei i diversi piani di sviluppo, sclega lei quello più consono per la nostra azienda:");
    }
    else
    {
        printf("Scelta non valida. Riprova.\n");
    }
}