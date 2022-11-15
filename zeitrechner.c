#include <stdio.h>

int main()
{
	int anzahlTage;

	printf("Anzahl Tage: ");
	scanf("%d", &anzahlTage);


	printf("Anzahl Stunden: %d\n", anzahlTage * 24 );
	printf("Anzahl Minuten: %d\n", anzahlTage * 24 * 60);
	printf("Anzahl Sekunden: %d\n ", anzahlTage * 24 * 60 * 60 );

	return 0;
}
