#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void first_sem();
void second_sem();
void third_sem();
void fourth_sem();
void fifth_sem();
void sixth_sem();
void seventh_sem();
void eighth_sem();
void f();
void sec();
void t();
void fo();
void fi();
void si();
void se();
void e();
char ans;
struct code
	{
		char department[5];
		int num;
	}s;

int main()
{
	int year,semester;
	system("color E4");
	printf("**THE ULTIMATE GUIDE TO BACHELOR IN CHEMICAL ENGINEERING**");
	printf("\n****************************************************************");	
	printf("\n\n\t***Welcome to Pulchowck Campus!***");
	printf("\n\nWe are glad to have you in our Chemical Engineering Family");
	printf("\n****************************************************************");
	printf("\n");
	printf("\n");
	printf("Let's have a close look to our course structure, shall we?");
	printf("\nEnter your year: ");			
	scanf("%d",&year);
	printf("\nEnter the part you are pursuing: ");	
	scanf("%d",&semester);
	if(year==1 && semester==1)
	{
	first_sem();
	}
	else if(year==1 && semester==2)
	{
	second_sem();
	}
	else if(year==2 &&semester==1)
	{
	third_sem();
	}
	else if(year==2 &&semester==2)
	{
	fourth_sem();
	}
	else if(year==3 &&semester==1)
	{
	fifth_sem();
	}
	else if(year==3 &&semester==2)
	{
	sixth_sem();
	}
	else if(year==4 &&semester==1)
	{
	seventh_sem();
	}
	else
	{
	eighth_sem();
	}
	getch();
	system("cls");
	printf("\n\n\n\n\n|*|*|*|*| THANKYOU FOR VISITING OUR PAGE!!!|*|*|*|*|");
	printf("\n\n|*|*|*|*| LOTS OF LOVE FROM THE BCH FAMILY!!! |*|*|*|*| ");
	printf("\n\nFor furthur info you may contact: ");
	printf("\n@ishathapait\t\t@this_is_diwash\n@jayanta.acharya\t@kgkamalgrg980");
	return 0;
}

void first_sem()
{
	getch();
	system("cls");
	printf("\n\n\nYou have the following subjects in this semester:\n");
	printf("\n\nBasic Electrical Engineeing(EE 401)\n");
	printf("Basic Electronics Engineering(EX 451)\n");
	printf("C Programming(CT 401)\n");
	printf("Engineering Mathematics-I(SH 401)\n");
	printf("Engineering Chemistry(SH 403)\n");
	printf("Engineering Drawing-I(ME 401)\n");
	printf("\n\nFor reference book suggestions, Enter the suject code provided above: ");
	f();
	do
	{
	 getch();
	 scanf("%c", &ans);
	 printf("\n\n\nDo you want to find reference books for other subjects? If yes press Y or y else press any other key\n");
	 scanf("%c", &ans);
	 if (ans == 'y' || ans == 'Y')
	 {
	 printf("\nEnter next subject code: ");
     }
     else
     {
       break;
	 }
	 f();
    }while(ans == 'y' || ans == 'Y');
	
}

void f()
{
 scanf("%s", s.department);
	scanf("%d", &s.num);
    if ((strcmp(s.department, "EE")==0) && (s.num == 401))
	 {
	 printf("\n\n\nYou may refer to the following textbooks:\ni. Basic Electrical Engineering by Manish and Manisha\nii. A text book of Electrical Technology by A.K. Theraja & B.L. Theraja\niii. ABC of Electrical Engineering by Jain & Jain");
	 }
	 else if((strcmp(s.department, "EX")==0) && (s.num == 451))
	 {
	 	printf("\n\nYou may refer to the following textbooks:\ni. Basic Electronicas by Bikal Adhikari\nii. Microelectronics Circuit by Sedra and Snit\niii. Electronic device and circuit by Boylestead");
	 }
	 else if((strcmp(s.department, "CT")==0) && (s.num == 401))
	 {
	 	printf("\n\nYou may refer to the following textbooks: \ni. C-Programming and Fortran by Er. Sarita Khanal\nii. The Secrets of C Programming Language by Daya Sagar Paudel ");
	 }
	 else if((strcmp(s.department, "SH")==0) && (s.num == 401))
	 {
	 	printf("\n\nYou may refer to the following textbooks:\ni. A textbook on Engineering Mathematics-I by S.P. Shrestha");
	 }
	 else if((strcmp(s.department, "SH")==0) && (s.num == 403))
	 {
	 	printf("\n\nYou may refer to the following textbooks:\ni. A textbook on Engineering Chemistry by Ram Kumar Sharma ");
	 }
	 else if((strcmp(s.department, "ME")==0) && (s.num == 401))
	 {
	 	printf("\n\nYou may refer to the following textbooks:\ni. Engineering Drawing-I by Mahesh Chandra Luitel ");
	 }	
}

void second_sem()
{
	getch();
	system("cls");
	printf("You have the following subjects in this semester:\n");
	printf("\n\nWorkshop Technology(MH 452)\n");
	printf("Applied Mechanics(CE 451)\n");
	printf("Basic Organic Chemistry(EC 451)\n");
	printf("Computer Aided Drafting CAD(MH 451)\n");
	printf("Engineering Physics(SH 452)\n");
	printf("Engineering Mathematics-II(SH 451)\n");
	printf("\n\nFor reference book suggestions, Enter the suject code provided above: ");
	sec();
	do
	{
	 getch();
	 scanf("%c", &ans);
	 printf("\n\n\nDo you want to find reference books for other subjects? If yes press Y or y else press any other key\n");
	 scanf("%c", &ans);
	 if (ans == 'y' || ans == 'Y')
	 {
	 printf("\nEnter next subject code: ");
     }
     else
     {
     	break;
	 }
	 sec();
    }while(ans == 'y' || ans == 'Y');
}

void sec()
{
 	scanf("%s%d",s.department,&s.num);
	if ((strcmp(s.department, "MH")==0) && (s.num == 452))
	{
	 printf("\n\nKindly consult with your teacher.");	
	}
	else if ((strcmp(s.department, "CE")==0) && (s.num == 451))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. Applied Mechanics for Engineers by Dr. Hari Ram Parajuli");	
	}
	else if((strcmp(s.department, "EC")==0) && (s.num == 451))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. Basic Organic Chemistry by Shaina Dahal");	
	}
	else if((strcmp(s.department, "MH")==0) && (s.num == 451))
	{
	 printf("\n\nKindly consult with your teacher.");
	}
	else if ((strcmp(s.department, "SH")==0) && (s.num == 452))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. Engineering Physics by Binod Kumar Bhattarai\nii. Engineering Physics by Bhadra Pokharel");	
	}
	else if ((strcmp(s.department, "SH")==0) && (s.num == 451))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. A textbook on Engineering Mathematics-II by S.P. Shrestha");
	}		
}

void third_sem()
{
	printf("You have the following subjects in this semester:\n");
	printf("\n\nCommunication English(SH 502)\n");
	printf("Engineering Mathematics III(SH 501)\n");
	printf("Bio-Chemistry(EC 501)\n");
	printf("Basic Physical Chemistry(EC 502)\n");
	printf("Fluid Mechanics(EC 503)\n");
	printf("Chemical Process Calculation(EC 504)\n");
	printf("\n\nFor reference book suggestions, Enter the suject code provided above: ");
	t();
	do
	{
	 getch();
	 scanf("%c", &ans);
	 printf("\n\n\nDo you want to find reference books for other subjects? If yes press Y or y else press any other key\n");
	 scanf("%c", &ans);
	 if (ans == 'y' || ans == 'Y')
	 {
	 printf("\nEnter next subject code: ");
     }
     else
     {
       break;
	 }
	 t();
    }while(ans == 'y' || ans == 'Y');
}

void t()
{
	scanf("%s%d",s.department,&s.num);
	if ((strcmp(s.department, "SH")==0) && (s.num == 502))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. A textbook of Communication English by Vijay Kumar Yadav ");	
	}
	else if ((strcmp(s.department, "SH")==0) && (s.num == 501))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. A textbook on Engineering Mathematics-III by S.P. Shrestha ");	
	}
	else if((strcmp(s.department, "EC")==0) && (s.num == 501))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. Biochemistry for Engineering by R.K. Shah");	
	}
	else if((strcmp(s.department, "EC")==0) && (s.num == 503))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. Fluid Mechanics Fundamentals and Applications by John Cimbala\n ii. Unit Operations of Chemical Engineering by W. L. McCabe, J. C. Smith, P. Harriott");
	}
	else if ((strcmp(s.department, "EC")==0) && (s.num == 502))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. Basic Principles and Calculations in Chemical Engineering by James Riggs");	
	}
	else if ((strcmp(s.department, "EC")==0) && (s.num == 504))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. Basic Principles and Calculations in Chemical Engineering by D. M. Himmelblau, J. B. Riggs");
	}		
}

void fourth_sem()
{
	printf("You have the following subjects in this semester:\n");
	printf("\n\nNumerical Methods(SH 553)\n");
	printf("Thermodynamics-I(EC 551)\n");
	printf("Chemical Process Industries-I(EC 552)\n");;
	printf("Heat Transfer(EC 553)\n");
	printf("Engineering Materials(EC 554)\n");
	printf("Environmental Science And Pollution Control(EC 555)\n");
	printf("\n\nFor reference book suggestions, Enter the suject code provided above: ");
	fo();
	do
	{
	 getch();
	 scanf("%c", &ans);
	 printf("\n\n\nDo you want to find reference books for other subjects? If yes press Y or y else press any other key\n");
	 scanf("%c", &ans);
	 if (ans == 'y' || ans == 'Y')
	 {
	 printf("\nEnter next subject code: ");
     }
     else
     {
       break;
	 }
	 fo();
    }while(ans == 'y' || ans == 'Y');
}

void fo()
{
	scanf("%s%d",s.department,&s.num);
	if ((strcmp(s.department, "SH")==0) && (s.num == 553))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. Numerical Methods for Engineering by Er. Sanjit Kumar Shah ");	
	}
	else if ((strcmp(s.department, "EC")==0) && (s.num == 551))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. Chemical Engineering Thermodynamics-I by J. M. Smith, H. C. Van Ness, M. M. Abbott");	
	}
	else if((strcmp(s.department, "EC")==0) && (s.num == 552))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. Shreve’s Chemical Process Industries-I by G. T. Austin");	
	}
	else if((strcmp(s.department, "EC")==0) && (s.num == 553))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. Incropera’s Principles of Heat and Mass Transfer by F. P. Incropera, D. P. DeWitt, T. L. Bergman, A. S. Lavine");
	}
	else if ((strcmp(s.department, "EC")==0) && (s.num == 554))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. Engineering Materials by Hem Raj Pant");	
	}
	else if ((strcmp(s.department, "EC")==0) && (s.num == 555))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. Environmental Science And Pollution Control by Ram Kumar Sharma");
	}		
}

void fifth_sem()
{
	printf("You have the following subjects in this semester:\n");
	printf("\n\nProbability and Statistics(SH 602)\n");
	printf("Thermodynamics II(EC 601)\n");
	printf("Mass Transfer I(EC 602)\n");
	printf("Chemical Process Industries II(EC 603)\n");
	printf("Mechanical Operation(EC 604)\n");
	printf("Chemical Reaction Engineering I(EC 605)\n");
	printf("\n\nFor reference book suggestions, Enter the suject code provided above: ");
	fi();
	do
	{
	 getch();
	 scanf("%c", &ans);
	 printf("\n\n\nDo you want to find reference books for other subjects? If yes press Y or y else press any other key\n");
	 scanf("%c", &ans);
	 if (ans == 'y' || ans == 'Y')
	 {
	 printf("\nEnter next subject code: ");
     }
     else
     {
       break;
	 }
	 fi();
    }while(ans == 'y' || ans == 'Y');
}

void fi()
{
	scanf("%s%d",s.department,&s.num);
	if ((strcmp(s.department, "SH")==0) && (s.num == 602))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. A textbook of Probability and Statistics by Tek Bahadur Budhathoki ");	
	}
	else if ((strcmp(s.department, "EC")==0) && (s.num == 601))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. Chemical Engineering Thermodynamics-II by J. M. Smith, H. C. Van Ness, M. M. Abbott ");	
	}
	else if((strcmp(s.department, "EC")==0) && (s.num == 602))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. Mass Transfer Operations by Robert E. Treybal");	
	}
	else if((strcmp(s.department, "EC")==0) && (s.num == 603))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. Shreve’s Chemical Process Industries-II by G. T. Austin ");
	}
	else if ((strcmp(s.department, "EC")==0) && (s.num == 604))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. Mechanical Operation for Engineering Practice by John and John");	
	}
	else if ((strcmp(s.department, "EC")==0) && (s.num == 605))
	{
	 printf("\n\nYou may refer to the following textbooks:\ni. Elements of Chemical Reaction Engineering by H. Scott Fogler ");
	}		
}

void sixth_sem()
{
	printf("You have the following subjects in this semester:\n");
	printf("\n\nChemical Engineering Design I(EC 651)\n");
	printf("Instrumentation and Process Control(EC 652)\n");
	printf("Elective I(EC 653)\n");  						
	printf("Mass Transfer II(EC 654)\n");
	printf("Chemical Reaction Engineering II(EC 655)\n");
	printf("Food and Beverage(EC 656)\n");
	printf("\n\nFor elective I you have following options: \ni. Nano Terchnology\nii. Construction Materials\niii. Electro Chemical & Renewable Energy");
	printf("\n\nFor reference book suggestions, Enter the suject code provided above: ");
	si();
	do
	{
	 getch();
	 scanf("%c", &ans);
	 printf("\n\n\nDo you want to find reference books for other subjects? If yes press Y or y else press any other key\n");
	 scanf("%c", &ans);
	 if (ans == 'y' || ans == 'Y')
	 {
	 printf("\nEnter next subject code: ");
     }
     else
     {
       break;
	 }
	 si();
    }while(ans == 'y' || ans == 'Y');
}

void si()
{
	scanf("%s%d",s.department,&s.num);
	if ((strcmp(s.department, "EC")==0) && (s.num == 651))
	{
	 printf("\n\nError 401: System is in progress. Kindly refer back another time.");	
	}
	else if ((strcmp(s.department, "EC")==0) && (s.num == 652))
	{
	 printf("\n\nError 401: System is in progress. Kindly refer back another time.");	
	}
	else if((strcmp(s.department, "EC")==0) && (s.num == 653))
	{
	 printf("\n\nError 401: System is in progress. Kindly refer back another time.");	
	}
	else if((strcmp(s.department, "EC")==0) && (s.num == 654))
	{
	 printf("\n\nError 401: System is in progress. Kindly refer back another time.");
	}
	else if ((strcmp(s.department, "EC")==0) && (s.num == 655))
	{
	 printf("\n\nError 401: System is in progress. Kindly refer back another time.");	
	}
	else if ((strcmp(s.department, "EC")==0) && (s.num == 656))
	{
	 printf("\n\nError 401: System is in progress. Kindly refer back another time.");
	}		
}

void seventh_sem()
{
	printf("You have the following subjects in this semester:\n");
	printf("\n\nEngineering Economics(SH 701))\n");
	printf("Chemical Engineering Design II(EC 701))\n");
	printf("Transport Phenomena(EC 702)\n");
	printf("Explosive, Hazard Analysis & Safety(EC 703)\n");
	printf("Elective II(EC 704)\n");					
    printf("Plant Design & Design Lab(EC 705)\n");
    printf("\n\nFor elective II you have following options: \ni. Pharmaceuticals Engineering\nii. Mining Engineering\niii. Biomaterials\n");
	printf("\n\nFor reference book suggestions, Enter the suject code provided above: ");
	se();
	do
	{
	 getch();
	 scanf("%c", &ans);
	 printf("\n\n\nDo you want to find reference books for other subjects? If yes press Y or y else press any other key\n");
	 scanf("%c", &ans);
	 if (ans == 'y' || ans == 'Y')
	 {
	 printf("\nEnter next subject code: ");
     }
     else
     {
       break;
	 }
	 se();
    }while(ans == 'y' || ans == 'Y');
}

void se()
{
	scanf("%s%d",s.department,&s.num);
	if ((strcmp(s.department, "SH")==0) && (s.num == 701))
	{
	 printf("\n\nError 401: System is in progress. Kindly refer back another time.");	
	}
	else if ((strcmp(s.department, "EC")==0) && (s.num == 701))
	{
	 printf("\n\nError 401: System is in progress. Kindly refer back another time.");	
	}
	else if((strcmp(s.department, "EC")==0) && (s.num == 702))
	{
	 printf("\n\nError 401: System is in progress. Kindly refer back another time.");	
	}
	else if((strcmp(s.department, "EC")==0) && (s.num == 703))
	{
	 printf("\n\nError 401: System is in progress. Kindly refer back another time.");
	}
	else if ((strcmp(s.department, "EC")==0) && (s.num == 704))
	{
	 printf("\n\nError 401: System is in progress. Kindly refer back another time.");	
	}
	else if ((strcmp(s.department, "EC")==0) && (s.num == 705))
	{
	 printf("\n\nError 401: System is in progress. Kindly refer back another time.");
	}		
}

void eighth_sem()
{
	printf("You have the following subjects in this semester:\n");
	printf("\n\nEngineering Professional Practice(CE 752)\n");
	printf("Modeling & Simulation in Chemical Engineering(EC 751)\n");
	printf("Biochemical Engineering(EC 752)\n");
	printf("Elective III(EC 753)\n");						
    printf("Project(EC 754)\n");
	printf("Mines, Fuels & Energy(EC 755)\n");
	printf("\n\nFor elective III you have following options: \ni. Polymer Engineering\nii. Corrosion Science and Engineering\niii. Explosive and Blasting Technology\n");
	printf("\n\nFor reference book suggestions, Enter the suject code provided above: ");
	e();
	do
	{
	 getch();
	 scanf("%c", &ans);
	 printf("\n\n\nDo you want to find reference books for other subjects? If yes press Y or y else press any other key\n");
	 scanf("%c", &ans);
	 if (ans == 'y' || ans == 'Y')
	 {
	 printf("\nEnter next subject code: ");
     }
     else
     {
       break;
	 }
	 e();
    }while(ans == 'y' || ans == 'Y');
}

void e()
{
	scanf("%s%d",s.department,&s.num);
	if ((strcmp(s.department, "CE")==0) && (s.num == 752))
	{
	 printf("\n\nError 401: System is in progress. Kindly refer back another time.");	
	}
	else if ((strcmp(s.department, "EC")==0) && (s.num == 751))
	{
	 printf("\n\nError 401: System is in progress. Kindly refer back another time.");	
	}
	else if((strcmp(s.department, "EC")==0) && (s.num == 752))
	{
	 printf("\n\nErroe 401: System is in progress. Kindly refer back another time.");	
	}
	else if((strcmp(s.department, "EC")==0) && (s.num == 753))
	{
	 printf("\n\nError 401: System is in progress. Kindly refer back another time. ");
	}
	else if ((strcmp(s.department, "EC")==0) && (s.num == 754))
	{
	 printf("\n\nError 401: System is in progress. Kindly refer back another time.");	
	}
	else if ((strcmp(s.department, "EC")==0) && (s.num == 755))
	{
	 printf("\n\nError 401: System is in progress. Kindly refer back another time.");
	}		
}

