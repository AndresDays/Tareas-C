#include <stdio.h>
#include <conio.h>
#include <iostream>

main()
	{
	int nd =0,nm = 0,da = 0;
	
	do
	{
	printf("Introduzca el n%cmero del d%ca:\n",163,161);
	scanf("%i",&nd);
	
	printf("Introduzca el n%cmero del mes:\n",163);
	scanf("%i",&nm);
	
	}while( nd > 31  or nm > 12);

	switch (nm){
		case 1:
			da = nd;
			printf("El %i del %i es el d%ca %i del a%co.", nd,nm,161,da,164);
		break;
		
		case 2:
			da = nd + 31;
			printf("El %i del %i es el d%ca %i del a%co.", nd,nm,161,da,164);
		break;
		
		case 3:
			da = nd + 59;
			printf("El %i del %i es el d%ca %i del a%co.", nd,nm,161,da,164);
		break;
		
		case 4:
			da = nd + 90;
			printf("El %i del %i es el d%ca %i del a%co.", nd,nm,161,da,164);
		break;
		
		case 5:
			da = nd + 120;
			printf("El %i del %i es el d%ca %i del a%co.", nd,nm,161,da,164);
		break;
		
		case 6:
			da = nd + 151;
			printf("El %i del %i es el d%ca %i del a%co.", nd,nm,161,da,164);
		break;
		
		case 7:
			da = nd + 181;
			printf("El %i del %i es el d%ca %i del a%co.", nd,nm,161,da,164);
		break;
		
		case 8:
			da = nd + 212;
			printf("El %i del %i es el d%ca %i del a%co.", nd,nm,161,da,164);
		break;
		
		case 9:
			da = nd + 243;
			printf("El %i del %i es el d%ca %i del a%co.", nd,nm,161,da,164);
		break;
		
		case 10:
			da = nd + 273;
			printf("El %i del %i es el d%ca %i del a%co.", nd,nm,161,da,164);
		break;
		
		case 11:
			da = nd + 304;
			printf("El %i del %i es el d%ca %i del a%co.", nd,nm,161,da,164);
		break;
		
		case 12:
			da = nd + 334;
			printf("El %i del %i es el d%ca %i del a%co.", nd,nm,161,da,164);
		break;
	}
	
	
}
