#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main (void){
	while (1){
		char mo[] = "Mo",di[] = "Di",mi[] = "Mi",qo[] = "Do",fr[] = "Fr",sa[] = "Sa",so[] = "So";
		char ja[] = "Jan",fe[] = "Feb",me[] = "Mä",ap[] = "Apr",ma[] = "Mai",ju[] = "Jun",jo[] = "Jul",au[] = "Aug",se[] = "Sep",ok[] = "Okt",no[] = "Nov", de[] = "Dez";
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
		int days2 = days + 2;
		if (days2 <= 31){
			int days3 = days2;
			switch (wochentag){
				case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, ja); break;
				case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, ja); break;
				case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, ja); break;
				case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, ja); break;
				case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, ja); break;
				case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, ja); break;
				case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, ja); break;
			}
		}		
		if (notschalt == 1){
			if (days2 >= 32 && days2 <= 60){
				int days3 = days2 - 31;
				switch (wochentag){
					case (0): printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, fe); break;
					case (1): printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, fe); break;
					case (2): printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, fe); break;
					case (3): printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, fe); break;
					case (4): printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, fe); break;
					case (5): printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, fe); break;
					case (6): printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, fe); break;
				}		
			}
			if (days2 >= 61 && days2 <= 91){
				int days3 = days2 - 60;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, me); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, me); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, me); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, me); break;
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, me); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, me); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, me); break;
				}		
			}
			if (days2 >= 92 && days2 <= 121){
				int days3 = days2 - 91;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, ap); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, ap); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, ap); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, ap); break;
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, ap); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, ap); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, ap); break;
				}
			}
			if (days2 >= 122 && days2 <= 152){
				int days3 = days2 - 121;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, ma); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, ma); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, ma); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, ma); break;
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, ma); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, ma); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, ma); break;
				}
			}
			if (days2 >= 153 && days2 <= 182){
				int days3 = days2 - 152;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, ju); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, ju); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, ju); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, ju); break;
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, ju); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, ju); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, ju); break;
				}		
			}
			if (days2 >= 183 && days2 <= 213){
				int days3 = days2 - 182;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, jo); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, jo); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, jo); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, jo); break;
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, jo); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, jo); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, jo); break;
				}
			}
			if (days2 >= 213 && days2 <= 244){
				int days3 = days2 - 213;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, au); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, au); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, au); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, au); break;
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, au); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, au); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, au); break;
				}		
			}
			if (days2 >= 245 && days2 <= 274){
				int days3 = days2 - 244;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, se); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, se); break; 
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, se); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, se); break;
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, se); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, se); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, se); break; 
				}
			}
			if (days2 >= 275 && days2 <= 305){
				int days3 = days2 - 274;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, ok); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, ok); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, ok); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, ok); break; 
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, ok); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, ok); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, ok); break;
				}		
			}
			if (days2 >= 306 && days2 <= 335){
				int days3 = days2 - 305;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, no); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, no); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, no); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, no); break; 
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, no); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, no); break; 
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, no); break;
				} 
			}
			if (days2 >= 336 && days2 <= 366){
				int days3 = days2 - 335;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, de); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, de); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, de); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, de); break;
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, de); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, de); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, de); break;
				}
			}

		} else {
			if (days2 >= 32 && days2 <= 59){
				int days3 = days2 - 31;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, fe); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, fe); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, fe); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, fe); break;
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, fe); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, fe); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, fe); break;
				}
			}
			if (days2 >= 60 && days2 <= 90){
				int days3 = days2 - 59;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, me); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, me); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, me); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, me); break;
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, me); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, me); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, me); break;
				}		
			}
			if (days2 >= 91 && days2 <= 120){
				int days3 = days2 - 90;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, ap); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, ap); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, ap); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, ap); break;
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, ap); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, ap); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, ap); break;
				}		
			}
			if (days2 >= 121 && days2 <= 151){
				int days3 = days2 - 120;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, ma); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, ma); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, ma); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, ma); break;
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, ma); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, ma); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, ma); break;
				}		
			}
			if (days2 >= 152 && days2 <= 181){
				int days3 = days2 - 151;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, ju); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, ju); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, ju); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, ju); break;
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, ju); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, ju); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, ju); break;
				}
			}
			if (days2 >= 182 && days2 <= 212){
				int days3 = days2 - 181;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, jo); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, jo); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, jo); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, jo); break;
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, jo); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, jo); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, jo); break;
				}
			}
			if (days2 >= 213 && days2 <= 243){
				int days3 = days2 - 212;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, au); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, au); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, au); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, au); break;
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, au); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, au); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, au); break;
				}		
			}
			if (days2 >= 244 && days2 <= 273){
				int days3 = days2 - 243;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, se); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, se); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, se); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, se); break;
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, se); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, se); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, se); break;
				}
			}
			if (days2 >= 274 && days2 <= 304){
				int days3 = days2 - 273;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, ok); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, ok); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, ok); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, ok); break;
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, ok); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, ok); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, ok); break;
				}		
			}
			if (days2 >= 305 && days2 <= 334){
				int days3 = days2 - 304;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, no); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, no); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, no); break;
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, no); break;
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, no); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, no); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, no); break;
				}
			}
			if (days >= 335 && days <= 365){
				int days3 = days - 334;
				switch (wochentag){
					case 0: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, fr, jahr, days3, de); break;
					case 1: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, sa, jahr, days3, de); break;
					case 2: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, so, jahr, days3, de); break; 
					case 3: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mo, jahr, days3, de); break;
					case 4: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, di, jahr, days3, de); break;
					case 5: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, mi, jahr, days3, de); break;
					case 6: printf("%d Sekunden %d Minuten %d Stunden %s %d %d %s\n", b, c, d, qo, jahr, days3, de); break;
				}
			}
		}
		sleep(1);
	}
	return 0;
}