#include<conio.h>
#include<string.h>
#include<dos.h>
#include<stdio.h>
#include<iomanip.h>
#include<fstream.h>
#include<process.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>

void error()
{
  sound(400); delay(100);
  nosound();  delay(50);
  sound(600); delay(100);
  nosound();  delay(50);
}

void scram()
{
  cout << setw(36);
 cout<<"S"; sound(400); delay(100); nosound(); delay(100);
 cout<<"C"; sound(500); delay(100); nosound(); delay(100);
 cout<<"R"; sound(450); delay(100); nosound(); delay(100);
 cout<<"A"; sound(400); delay(100); nosound(); delay(100);
 cout<<"M"; sound(600); delay(100); nosound(); delay(100);
 cout<<"B"; sound(540); delay(100); nosound(); delay(100);
 cout<<"L"; sound(500); delay(100); nosound(); delay(100);
 cout<<"E"; sound(450); delay(100); nosound(); delay(100);
 cout<<"R"; sound(400); delay(100); nosound(); delay(1000);
}

void mword()
{
  sound(400); delay(75);
  nosound();  delay(50);
  sound(500); delay(100);
  nosound();  delay(100);
  sound(400); delay(200);
  nosound();  delay(50);
  sound(600); delay(150);
  nosound();  delay(50);
}

void word()
{
  sound(400); delay(200);
  nosound();  delay(95);
  sound(500); delay(150);
  nosound();  delay(50);
  sound(400); delay(200);
  nosound();  delay(50);
  sound(600); delay(320);
  nosound();  delay(100);
  sound(400); delay(200);
  nosound();  delay(350);
}

void game()
{
  sound(200); delay(50);
  nosound();  delay(50);
  sound(200); delay(50);
  nosound();  delay(50);
  sound(400); delay(50);
  nosound();  delay(50);
  sound(400); delay(50);
  nosound();  delay(300);

  sound(200); delay(100);
  nosound();  delay(100);
  sound(200); delay(100);
  nosound();  delay(200);
  sound(400); delay(100);
  nosound();  delay(100);
  sound(400); delay(100);
  nosound();  delay(400);

  sound(600); delay(300);
  nosound();  delay(200);
  sound(600); delay(300);
  nosound();  delay(200);
}

void qgame();
void complete();
void gexit();
void display();
void load();
int instruct();
void ngame();
int menu(int);
void word(char [], char [], char[]);
void level1(int);
void level2(int);
void level3(int);

class rec

{
  char name[50];
  char nname[50];
  int stat;
  char rank[20];

  public:

  char nick[50];
  void enter()
  {
    cout << "\n\n\nEnter your name : ";
    gets(name);
    cout << "\nEnter your nick name : ";
    gets(nname);
  }

  void calc(int a)
  {
    stat=a;
    if (stat>=1 && stat <3)
      strcpy(rank, "Beginner");
    else if (stat>=3 && stat<6)
      strcpy(rank, "Blazer");
    else
      strcpy(rank, "Veteran");
  }

  int cmp (char a[], int i)
  {
    if (i==0)
    {
      if (strcmp(a, name)==0)
	return 0;
      else
	return 1;
    }
    else
    {
      if (strcmp(a, nname)==0)
	return 0;
      else
	return 1;
    }
  }

  void display()
  {
    clrscr();
    gotoxy(35,1);
    cout << "Player Details";
    cout << "\n\n\nName : ";
    puts(name);
    cout << "\n\nNick name : ";
    puts(nname);
    cout << "\n\nRank : ";
    puts(rank);
  }

  void shownname()
  {
    strcpy(nick, nname);
  }

  int showscore()
  {
    return stat;
  }

};

rec p;

void level1(int score)
{
 clrscr();
 int c=0,j=score,ret=0;
 unsigned int seedval;
 time_t t;
 char g[20], k[20], clue[100], ch, r;
 clrscr();
 scram();
 gotoxy(33,12);
 cout<<"LE"; delay(100);
 cout<<"VEL "; delay(100);
 cout<<"1 "; delay(100);
 cout<<"BEG"; delay(100);
 cout<<"INS"; delay(1000);

 clrscr();

 while(j<4)
 {
  seedval=(unsigned)time(&t);
  srand(seedval);
  c=((rand()%6)+1);
  switch(c)
  {
   case 1 : strcpy(g, "cash");
	    strcpy(k, "_a__");
	    strcpy(clue, "Money which is immediately available.");
	    break;

   case 2 : strcpy(g, "code");
	    strcpy(k, "_o_e");
	    strcpy(clue, "Any system of signs and symbols that has a meaning.");
	    break;

   case 3 : strcpy(k, "_e_u");
	    strcpy(g, "menu");
	    strcpy(clue, "A list of choices.");
	    break;

   case 4 : strcpy(g, "help");
	    strcpy(k, "_e__");
	    strcpy(clue, "Doing this for people makes it easier for them to do something.");
	    break;

   case 5 : strcpy(g, "king");
	    strcpy(k, "_i__");
	    strcpy(clue, "Most important member of the royal family of his country.");
	    break;

   case 6 : strcpy(g, "test");
	    strcpy(k, "_e__");
	    strcpy(clue, "A deliberate action or experiment to find out how well something works.");
	    break;

   case 7 : strcpy(g, "hell");
	    strcpy(k, "_e__");
	    strcpy(clue, "A noun used as a description of a place that is extremely unpleasant.");
	    break;

   default : cout << "\n\nBah";
	     break;
  }
  word(g,k,clue);
  ret=menu(j);
  if(ret==0)
  {
    j++;
    continue;
  }
  else
  {
    gexit();
  }
  j++;
 }
 cout << "Level 1 cracked!";
 level2(j);
}
void level2 (int score)
{
 int c=0,j=score,ret=0;
 unsigned int seedval;
 time_t t;
 char g[20], k[20], clue[100], ch, r;
 clrscr();
 scram();
 gotoxy(33,13);
 cout<<"LE"; delay(100);
 cout<<"VEL "; delay(100);
 cout<<"2 "; delay(100);
 cout<<"BEG"; delay(100);
 cout<<"INS"; delay(1000);

 clrscr();

 while(j<7)
 {
   seedval=(unsigned)time(&t);
   srand(seedval);
   c=((rand()%6)+1);
   switch(c)
   {
    case 1 : strcpy(g, "abandon");
	     strcpy(k, "a_a__o_");
	     strcpy(clue, "Stop doing an activity or piece of work before it is finished.");
	     break;
    case 2 : strcpy(g, "avenger");
	     strcpy(k, "a_e__e_");
	     strcpy(clue, "The one who punishes the person responsible for a wrong or harmful act.");
	     break;
    case 3 : strcpy(g, "ayurveda");
	     strcpy(k, "a_u__e_a");
	     strcpy(clue, "An ancient medical science.");
	     break;
    case 4 : strcpy(g, "bacteria");
	     strcpy(k, "_a__e_ia");
	     strcpy(clue, "Causative agent for curding of milk.");
	     break;
    case 5 : strcpy(g, "squash");
	     strcpy(k, "__ua__");
	     strcpy(clue, "A game played with a racquet and a ball.");
	     break;
    case 6 : strcpy(g, "baffle");
	     strcpy(k, "_a___e");
	     strcpy(clue, "If something does this to you, you cannot understand or explain it.");
	     break;
    case 7 : strcpy(g, "bakelite");
	     strcpy(k, "_a_e_i_e");
	     strcpy(clue, "A polymer made from the condensation of benzene and formaldehyde.");
	     break;

   }
  word(g,k,clue);
  ret=menu(j);
  if(ret==0)
  {
    j++;
    continue;
  }
  else
  {
    gexit();
  }
 }
 level3(j);
}
void level3 (int score)
{
 int c=0,j=score,ret=0;
 unsigned int seedval;
 time_t t;
 char g[20], k[20], clue[100], ch, r;
 clrscr();
 scram();
 gotoxy(33,13);
 cout<<"LE"; delay(100);
 cout<<"VEL "; delay(100);
 cout<<"3 "; delay(100);
 cout<<"BEG"; delay(100);
 cout<<"INS"; delay(1000);

 clrscr();

 while(j<10)                         //level 3 loop
  {
   seedval=(unsigned)time(&t);
   srand(seedval);
   c=((rand()%6)+1);
   switch(c)
  {
    case 1 : strcpy(g, "monotonous");
	     strcpy(k, "_o_o_o_ou_");
	     strcpy(clue, "Not intresting because of lack of change or variety");
	     break;
    case 2 : strcpy(g, "mantelpiece");
	     strcpy(k, "_a__e__ie_e");
	     strcpy(clue, "A structure surrounding a fireplace");
	     break;                      //babble, noetics
    case 3 : strcpy(g, "heartache");
	     strcpy(k, "_ea__a__e");
	     strcpy(clue, "worry or grief");
	     break;
    case 4 : strcpy(g, "gendarme");
	     strcpy(k, "_e__a__e");
	     strcpy(clue, "A police officer in french-speaking countries");
	     break;
    case 5 : strcpy(g, "dermatology");
	     strcpy(k, "_e__a_o_o__");
	     strcpy(clue, "The branch of medicines concerned with skin disorders");
	     break;
    case 6 : strcpy(g, "backtrack");
	     strcpy(k, "_a____a__");
	     strcpy(clue, "Retrace your steps");
	     break;
    case 7 : strcpy(g, "aerodrome");
	     strcpy(k, "ae_o__o_e");
	     strcpy(clue, "A small airport or airfield");
	     break;
    default : cout << "\n\nBah";
		break;
   }
  word(g,k,clue);
  ret=menu(j);
  if(ret==0)
  {
    j++;
    continue;
  }
  else
  {
   gexit();
  }
 }
 complete();
}

void word(char g[], char k[], char clue[])
					//Function to control word operations
{
 char a, pos;
 int l=6, f=0, count=0, s, i;
 p.shownname();
 clrscr();
 cout<<"Okay " << p.nick << ", the code to be unlocked is : ";
 gotoxy(38, 4);
 puts(k);
 cout << "\n\nThe clue for this code is : ";
 puts(clue);
 while(f==0)
 {
  count=0;
  for(int i=0; k[i]!='\0'; i++)
  {
   if (k[i]=='_')
   count++;
  }

  if(count!=0)
  {
   cout<<"\n\n\nEnter the position at which you want to try : ";
   g:
   cin>>pos;
   if (isdigit(pos)==0)
   {
     cout << "\nEnter the position correctly : ";
     error();
     goto g;
   }
   s=pos;
   s=s-48;
   if(k[s-1]!='_')
   {
     error();
     cout<<"\nEnter the position correctly : ";
     error();
     goto g;
   }
   cout<<"\nEnter the letter with which you want to try : ";
   p:
   cin>>a;
   if(k[s-1]=='_')
   {
   if(g[s-1]==a || g[s-1]==tolower(a))
   {
    clrscr();
    gotoxy(35, 4);
    cout<<"Correct!";
    mword();
    k[s-1]=g[s-1];
    gotoxy(1, 7);
    cout << "Now the code becomes as : ";
    gotoxy(36, 11);
    for(i=0; k[i]!='\0'; i++)
    {
      cout<< k[i];
      delay(300);
    }
    cout << "\n\n\nThe clue was : ";
    puts(clue);
    continue;
   }

   else
   {
    if(l!=0)
    {
     cout<<setw(35)<<"\n\nWrong letter!" << setw(35)<<"\nLives left : " << l-- << "\n\n\nTry again : ";
     error();
     goto p;
    }
    else
    {

     clrscr();
     gotoxy(35, 9);
     cout << "GAME OVER!!!";
     gotoxy(28, 14);
     cout << "BETTER LUCK NEXT TIME!!!";
     gotoxy(1, 24);
     cout << "Press Enter to exit..";
     game();
     getch();
     clrscr();
     cout << "Try Again (y/n)";
     char z;
     cin>>z;
     if (z=='y' || z=='Y')
	display();
     else if (z=='n' || z=='N')
	gexit();
    }
   }
  }
}
	else
	{
	 cout<<"\n\n\n\n\t\t\tYou discovered the word!!!!!!!!!!!\n\n";
	 cout << "\n\nPress Enter to continue...";
	 word();
	 getch();
	 clrscr();
	}
	 break;
  }

 }



int menu(int pr)                //Function to display in-game menu
{
 char q, ch;
 cout << "\n\nIn-game menu : ";
 cout << "\n\n1. Continue\n\n2. Exit\n\nEnter the serial number for further continuation : ";
 x:
 cin>>q;

 if(q=='1')
 {
   return (0);
 }

 else if (q=='2')
 {
   clrscr();
   cout << "Exit menu : \n\n" << "1. Save and exit\n\n2. Exit";
   cout << "\n\nEnter the serial number : ";
   y:
   cin>>ch;
   if(ch=='1')
   {
     p.calc(pr);
     fstream f;
     f.open("record.txt", ios::app|ios::out);
     f.write((char*)&p, sizeof(p));
     f.close();
     cout << "\n\nWorking"; delay(100);
     cout << "."; delay(100);
     cout << "."; delay(100);
     cout << "."; delay(100);
     cout << "\n\nSaving process has been successfully completed.";
     cout << "\nPress enter to continue...";
     getch();
     return (-1);
   }
   else if(ch=='2')
   {
     gexit();
   }

   else
   {
     cout << "\n\nPlease enter a valid choice : ";
     error();
     goto y;
   }
 }
 else
 {
   cout << "\n\nPlease enter a valid choice : ";
   error();
   goto x;
 }
}

void gexit()
{
  clrscr();
     gotoxy(35, 12);
     cout<<"T"; delay(100);
     cout<<"H"; delay(100);
     cout<<"A"; delay(100);
     cout<<"N"; delay(100);
     cout<<"K"; delay(100);
     cout<<" "; delay(100);
     cout<<"Y"; delay(100);
     cout<<"O"; delay(100);
     cout<<"U"; delay(100);
     cout<<"!"; delay(1000);
     gotoxy(35,18);
     cout << "PROGRAMMERS"; delay(500);
     gotoxy(20, 22);
     cout << "Concept and framework : "; delay(200);
     cout << "KUSHAGRA"; delay(100);
     cout << " AHUJA"; delay(300);
     gotoxy(26, 24);
     cout << "Design and data : "; delay(200);
     cout << "GAGAN"; delay(100);
     cout << " JINDAL";
     game(); delay(1000);
     exit(0);
}

void display()
{
  long double ch;
int r;
char c;
z:
clrscr();
gotoxy (19,1);
cout << "Welcome to the ultimate code-breaker program\n\n\n";
scram();
cout << "\n\n\n\nHere is a list of the options you can select : \n\n";
gotoxy (35, 11);
cout << "1. New Game\n" << setw(47) << "2. Load Game\n"<< setw(50) << "3. Instructions\n" << setw (48) << "4. Quick Game\n"<< setw (41) << "5. Exit";
cout << "\n\nEnter the correct serial number of the option you want to perform : ";
a:
cin>>ch;
if (ch==1)
{
  ngame();
}
else if (ch==2)
{
  load();
}
else if (ch==3)
{
  r=instruct();
  if(r==0)
  goto z;
}
else if (ch==4)
{
  qgame();
}
else if (ch==5)
{
  gexit();
}
else
{
 cout << "\nEnter correctly : ";
 error();
 goto a;
}
}

int instruct()
{
 clrscr();
 gotoxy(35,1);
 cout << "I";delay(100);cout<<"n";delay(100);cout<<"s";delay(100);cout<<"t";delay(100);cout<<"r";delay(100);cout<<"u";delay(100);cout<<"c";delay(100);cout<<"t";delay(100);cout<<"i";delay(100);cout<<"o";delay(100);cout<<"n";delay(100);cout<<"s \n \n \n \n";
 cout << "1.";delay(200);cout<<" The";delay(200);cout<<" game";delay(200);cout<<" involves";delay(200);cout<<" guessing";delay(200);cout<<" an";delay(200);cout<<" unknown";delay(200);cout<<" code";delay(200);cout<<" with";delay(200);cout<<" the";delay(200);cout<<" help";delay(200);cout<<" of";delay(200);cout<<" clues. \n \n" ;
 cout << "2.";delay(200);cout<<" There";delay(200);cout<<" are";delay(200);cout<<" 3";delay(200);cout<<" levels";delay(200);cout<<" in";delay(200);cout<<" the";delay(200);cout<<" game,";delay(200);cout<<" each";delay(200);cout<<" containing";delay(200);cout<<" 3";delay(200);cout<<" codes.\n\n";
 cout << "3.";delay(200);cout<<" You";delay(200);cout<<" will";delay(200);cout<<" be";delay(200);cout<<" provided";delay(200);cout<<" with";delay(200);cout<<" a";delay(200);cout<<" certain";delay(200);cout<<" number";delay(200);cout<<" of";delay(200);cout<<" lives";delay(200);cout<<" for";delay(200);cout<<" each";delay(200);cout<<" code.";
 cout << "";delay(200);cout<<" Each";delay(200);cout<<" incorrect";delay(200);cout<<" guess";delay(200);cout<<" will";delay(200);cout<<" cost";delay(200);cout<<" you";delay(200);cout<<" one";delay(200);cout<<" life.\n \n";
 cout << "4.";delay(200);cout<<" To";delay(200);cout<<" make";delay(200);cout<<" a";delay(200);cout<<" guess,";delay(200);cout<<" type";delay(200);cout<<" the";delay(200);cout<<" required";delay(200);cout<<" position,";delay(200);cout<<" press";delay(200);cout<<" Enter,";delay(200);cout<<" then";delay(200);cout<<" type";delay(200);cout<<" the";delay(200);cout<<" guessed ";delay(200);cout<<"letter.";
 cout << "\n \n5.";delay(200);cout<<" Each";delay(200);cout<<" level";delay(200);cout<<" consists";delay(200);cout<<" of";delay(200);cout<<" 7";delay(200);cout<<" lives";delay(200);cout<<" for";delay(200);cout<<" each";delay(200);cout<<" word.";
 cout << "\n \n6.";delay(200);cout<<" You";delay(200);cout<<" will";delay(200);cout<<" be";delay(200);cout<<" given";delay(200);cout<<" only";delay(200);cout<<" one";delay(200);cout<<" code ";delay(200);cout<<"at";delay(200);cout<<" a";delay(200);cout<<" time.";delay(200);cout<<" You";delay(200);cout<<" cannot";delay(200);cout<<" skip";delay(200);cout<<" a";delay(200);cout<<" code.";
 cout << "\n \n \n \n";delay(200);cout<<" Press ";delay(200);cout<<"Enter";delay(200);cout<<" to";delay(200);cout<<" continue....";
 getch();
 return 0;
}

void load()
{
  clrscr();
  int i, f=0, ret;
  char name[50], nname[50];
 gotoxy(35, 1);
 cout << "Load Game \n\n\n\n";
 cout << "Load options : \n\n";
 cout << "1.Load using Name\n2.Load using nick name\n\n";
 cout << "Enter the correct serial number : ";
 d:
 cin>>i;
 int score;
 switch (i)
 {
	case 1 : clrscr();
		 cout << "\n\nEnter name : ";
		 gets(name);
		 fstream fo;
		 fo.open("record.txt", ios::in);
		 while (!fo.eof())
		 {
			fo.read((char*)&p, sizeof(p));
			ret=p.cmp(name, 0);
			if (ret==0)
			{
				p.display();
				f=1;
				break;
			}
		 }
		 fo.close();
		 if(f==0)
		 {
			cout << "\n\nRecord not found!";
			error();
			getch();
		 }
		 else
		 {
			cout << "\n\nPress Enter to continue...";
			getch();
			score=p.showscore();
			if (score>=1 && score<=3)
				level1(++score);
			else if (score>3 && score<7)
				level2(++score);
			else
				level3(++score);
		 }
		 break;
	case 2 : clrscr();
		 cout << "\n\nEnter nick name : ";
		 gets(nname);
		 fstream foo;
		 foo.open("record.txt", ios::in);
		 while (!foo.eof())
		 {
			foo.read((char*)&p, sizeof(p));
			ret=p.cmp(nname, 1);
			if (ret==0)
			{
				p.display();
				f=1;
				getch();
				break;
			}
		 }
		 foo.close();
		 if(f==0)
		 {
			cout << "\n\nRecord not found!";
			error();
			getch();
		 }
		 else
		 {
			cout << "\n\nPress Enter to continue...";
			getch();
			score=p.showscore();
			if (score>=1 && score<=3)
				level1(++score);
			else if (score>3 && score<7)
				level2(++score);
			else
				level3(++score);
		 }
		 break;
	default : cout << "\n\nEnter a valid choice : ";
		  error();
		  goto d;
 }
}

void ngame()
{
	char c;
	clrscr ();
	cout << "\n\nThe Scrambler is ready to cast its spell of codes upon you. Do you wish to continue? (Y/N) (Press Enter after typing your choice) : ";
	b:
	cin >> c;
	if (c=='y' || c=='Y')
	{
		clrscr();
		gotoxy (40,1);
		cout << "ALIAS";
		cout << "\n\n\nThe game requires an alias to be created.";
		p.enter();
		clrscr();
		level1(1);

	}
	else if (c=='n' || c=='N')
	{
	  gexit();
	}
	else
	{
	  cout << "\n\nPlease enter a valid choice : ";
	  error();
	  goto b;
	}
}
void qgame()
{
   unsigned int seedval;
   time_t t;
   char g[20], k[20], clue[100], ch, r, c;
   clrscr();
   scram();
   gotoxy(35, 9);
   cout << "QUICK GAME";
   clrscr();
   seedval=(unsigned)time(&t);
   srand(seedval);
   c=((rand()%6)+1);
   switch(c)
   {
    case 1 : strcpy(g, "puppy");
	     strcpy(k, "_u___");
	     strcpy(clue, "A young dog");
	     break;
    case 2 : strcpy(g, "pundit");
	     strcpy(k, "_u__i_");
	     strcpy(clue, "An expert who frequently gives opinions about a subject in public.");
	     break;
    case 3 : strcpy(g, "reactionary");
	     strcpy(k, "_ea__io_a__");
	     strcpy(clue, "Opposing political or social progress or reform");
	     break;
    case 4 : strcpy(g, "repulsion");
	     strcpy(k, "_e_u__io_");
	     strcpy(clue, "A feeling of intense dislike or disgust");
	     break;
    case 5 : strcpy(g, "synergy");
	     strcpy(k, "___e___");
	     strcpy(clue, "Corporation of two or more things to produce a combined effect greater then the sum of their separate effects");
	     break;
    case 6 : strcpy(g, "weedkiller");
	     strcpy(k, "_ee__i__e_");
	     strcpy(clue, "A substance used to destroy a weed");
	     break;
    case 7 : strcpy(g, "candid");
	     strcpy(k, "_a__i_");
	     strcpy(clue, "Truthful and straightorward");
	     break;

   }
   word(g,k,clue);
   display();
}
void complete()
{
       scram();
       gotoxy(33,11);
       cout << "CONGRATULATIONS!";
       gotoxy(32,14);
       cout << "ALL CODES CRACKED!!";
       delay(2000);
       gexit();
}
void main()
{
  display();
}
