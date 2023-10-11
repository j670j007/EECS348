#include <stdio.h>


int main(){



int score;
int end = 2;


while (end > 1){
printf("Enter 0 or 1 to STOP: \n");
scanf("%d", &end);

if (end == 0 || end == 1)
{
	break;
}

printf("Enter a score:\n");
scanf("%d", &score);

for (int safety = 0; safety <= score/2; safety++){
	for(int field = 0; field <= score/3; field++){
		for(int td = 0; td <=score/6; td++){
			for(int td_1 = 0; td_1 <= score/7; td_1++){
				for(int td_2 = 0; td_2 <= score/8; td_2++){
			
				if (safety * 2 + field * 3 + td * 6 + td_1 * 7 + td_2 * 8 == score){
	 			printf("%d Touchdowns plus 2 points,", td_2);
	 			printf("%d Touchdowns plus 1 point, ", td_1);
	 			printf("%d Touchdowns, ", td);
	 			printf("%d Field Goals, ", field);
	 			printf("%d Safety \n", safety);
	 			}
	 		
		}
		}

}
}
}	
}













return 0;
}
