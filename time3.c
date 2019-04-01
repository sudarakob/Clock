#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <time.h> /* fuer time() */
#include <unistd.h> /* fuer sleep() */

int main (void){
	static const char wochentage[7][3] = { "Fr", "Sa", "So", "Mo", "Di", "Mi", "Do" };
	static const char monate[12][4] = { "Jan", "Feb", "Mar", "Apr", "Mai", "Jun", "Jul", "Aug", "Sep", "Okt", "Nov", "Dez" };
	static const int offsets[13] = { 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366 };

	while (1){
		int seconds = time(NULL);
		int minutes = (seconds - (seconds % 60)) / 60;
		int hours = (minutes - (minutes % 60)) / 60;
		int days = (hours - ((hours % 24) + 1)) / 24;
		int wochentag = days % 7;
		int jahr = 1970;
		bool notschalt = (jahr % 4 == 0 && (jahr % 100 != 0 || jahr % 400 == 0));
		int jahrtag = notschalt ? 366 : 365;
		int b = seconds % 60;
		int c = minutes % 60;
		int d = hours % 24 +1;
		for (int days2 = days; days2 >= jahrtag; jahr++){
			bool notschalt = (jahr % 4 == 0 && (jahr % 100 != 0 || jahr % 400 == 0));
			int jahrtag = notschalt ? 366 : 365;
			days2 -= jahrtag;
			days -= jahrtag;
		}

		/* adj. Tag nach Schaltjahr */
		int days2 = days + 2;
		int days3 = !notschalt && days2 >= 59 ? days + 3 : days2 + 2;

		/* bestimme Monat */
		int monat;
		for (monat = 0; days3 > offsets[monat + 1]; monat++)
			;

		/* Ausgabe in deinem Format bzw. im Format von date(1) */
//		printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, wochentage[wochentag], jahr, days3 - offsets[monat], monate[monat]);
		printf("%2s %2d. %s %4d %02d:%02d:%02d\n", wochentage[wochentag], days3 - offsets[monat], monate[monat], jahr, d, c, b);

		sleep(1);
	}
	return 0;
}

