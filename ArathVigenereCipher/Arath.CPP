#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>
/*Himanshu Attri Class XII Kendriya Vidyalaya AFS Tughlakabad 
                  
#include<dir.h>
#include<dirent.h>
#include<time.h>

const char * string="D:\\Arath\\Messages\\";char * format=".txt";char* string1="D:\\Arath\\Messages\\";

char *string2="D:\\Arath\\Messages\\";
int s=0;

select(int);




int bgc=1;//background colour BLUE



void timer(int x=50, int y=2) //shows time at any position.
{


	textcolor(15) ;
	textbackground(bgc);
	time_t tim;
	time(&tim);
	gotoxy(x,y);
	cout<<ctime(&tim);
	clrscr();
	cout<<ctime(&tim);
	gotoxy(1,25); //curser at corner
}




void prepresent(int k=5) //colour pattern and loading
{
	timer();
	textbackground(bgc);
	clrscr();
	textcolor(15);
	int j,l=0;

	for(int i1=0;i1<k;i1++)
	{
		int x=30,y=10;
		gotoxy(x,y);

		for(int i=0;i<99;++i)
		{


			j=rand()%10;
			textcolor(j);
			cprintf("л") ;
			if((i+1)%20==0)
			{
				y++;
				gotoxy(x,y);
			}


		}
		textcolor(15);
		gotoxy(35,18);
		cprintf("Loading..");
		gotoxy(70+i1,25);
		cprintf("ллллл");
		gotoxy(1,1);
		l++;
		delay(400);



  }
  textcolor(15);
  clrscr();
}

void margin(int lines,int m1=40, int x=20 )//creates a window box
{                                          // with random letters
	textbackground(bgc);
	clrscr();
	timer();
	int y,i,j;
	char chr='z';

	int px,py;

	y=(25-lines)/2-1;

	px=x;
	py=y;

	textbackground(bgc);


	for( i=0;i<lines+4;++i)
	{

		j=rand()%10;

		if(j==bgc||j==0)
		j=rand()%10;

		chr=j+65;
		gotoxy(x,y);
		textcolor(j);
		cprintf("%c",chr);

		chr=j+70;
		gotoxy(x+m1,y);
		textcolor(j);
		cprintf("%c",chr);

		y++;
	}
	for(i=0;i<m1;++i)
	{

		j=rand()%10;
		if(j==bgc||j==0)   //avoid black colour and bg colour
		j=rand()%10;

		chr=j+80;
		gotoxy(x,py-4);
		textcolor(j);
		cprintf("%c",chr);

		chr=j+65;

		if(i==m1-1)
		cprintf("%c",chr);

		chr=j+75;
		textcolor(j);

		gotoxy(x,py);
		cprintf("%c",chr);

		chr=j+80;

		textcolor(j);
		gotoxy(x,py+3+lines);
		cprintf("%c",chr);

		x++;
	}

	for( i=py-3;i<py;i++)
	{


		j=rand()%10;
		if(j==bgc||j==0)
		j=rand()%10;

		chr=j+70;
		textcolor(j);
		gotoxy(px,i) ;
		cprintf("%c",chr);

		chr=j+80;
		textcolor(j);
		gotoxy(px+m1,i);
		cprintf("%c",chr);
	}

	gotoxy(px+m1-6,py-2) ;
	cout<<"_ № X";

}

void exitwin() //creates options for exit window
{

	textcolor(10);
	gotoxy(26,10);
	cout<<"Do you really want to EXIT ?" ;

	gotoxy(20,15);
	cout<<"YES";

	gotoxy(61,15);
	cout<<"NO";
}



void menu() // create menu with tile look
{



	textbackground(bgc);
	clrscr();

	timer();

	int ascii=0,opt=1;
	int x,y;
	gotoxy(30,4);
	textcolor(7);
	cprintf(" ARATH SECRET MESSAGING ") ;
	textcolor(4);
	textbackground(7);
	gotoxy(31,21);
	cprintf(" Press Esc To EXIT ");


	do
	{
		if(ascii==72)
		{
			if(opt==1)
			opt=3;
			else if(opt==3)
			opt=1;

			if(opt==2)
			opt=4;
			else if(opt==4)
			opt=2;

		}

		if(ascii==80)
		{
			if(opt==1)
			opt=3;
			else if(opt==3)
			opt=1;

			if(opt==4)
			opt=2;
			else if(opt==2)
			opt=4;

		}
		if(ascii==77)
		{
			if(opt<4)
			opt++;
			else
			opt=1;
		}

		if(ascii==75)
		{
			if(opt>1)
			opt--;
			else
			opt=4;
		}

		if(ascii==13)
			break;

		if(ascii==27)
		{
			clrscr();
			timer();
			char ch;
			int op =1;     //moving options for fun exitwin()

			while(ch!=13)
			{
				clrscr();
				timer();

				if(op==1)
				{

					margin(8,64,8);
					textcolor(14);
					gotoxy(16,15);
					cprintf("|В______В|");
					exitwin();

					gotoxy(1,25);

				}

				if(op==2)

				{

					margin(8,64,8);
					textcolor(14);
					gotoxy(57,15);
					cprintf("|В______В|");
					exitwin();

					gotoxy(1,25);


				}


				ch=getch();
				if(ch==80||ch==75||ch==72||ch==77)
				{

					if(op==1)
					op=2;
					else if (op==2)
					op=1;
				}


			}

			if (op==1)
			exit(0);

			if(op==2)
			menu();


		}


		int oc=3,gc=2 ;
		int x=17,y=7;

		for(int j=0;j<5;j++)
		{
			 gotoxy(x,y+j);
			for(int i=0;i<20;++i)
			{
				if(opt==1)
				{
					textcolor(oc);
					textbackground(oc);
				}

				else
				{
					textcolor(gc);
					textbackground(gc);
				}


				if(i==19||j==4)
				textcolor(0);

				if(i==17&&j==2&&opt==1)
				textcolor(12);

				cprintf("л");

			}

		}

		gotoxy(x+5,y+2);
		textcolor(14) ;
		cprintf("Encryption");





		for(j=0;j<5;j++)
		{
			gotoxy(x+22,y+j);

			for(int i=0;i<20;++i)
			{
				if(opt==2)
				{
					textcolor(oc);
					textbackground(oc);
				}

				else
				{
					textcolor(gc);
					textbackground(gc);
				}

				if(i==19||j==4)
				textcolor(0);

				if(i==17&&j==2&&opt==2)
				textcolor(12);

				cprintf("л");
			}


		}


		gotoxy(x+27,y+2);
		textcolor(14) ;
		cprintf("Decryption");




		for( j=0;j<5;j++)
		{
			gotoxy(x,y+j+6);
			for(int i=0;i<20;++i)
			{
				if(opt==3)
				{
					textcolor(oc);
					textbackground(oc);
				}

				else
				{
					textcolor(gc);
					textbackground(gc);
				}

				if(i==19||j==4)
				textcolor(0);

				if(i==17&&j==2&&opt==3)
				textcolor(12);

				cprintf("л");

			}
		}

		gotoxy(x+3,y+8);
		textcolor(14) ;
		cprintf("Open A Letter");



		for( j=0;j<5;j++)
		{
			gotoxy(x+22,y+j+6);

			for(int i=0;i<20;++i)
			{

				if(opt==4)
				{
					textcolor(oc);
					textbackground(oc);
				}

				else
				{
					textcolor(gc);
					textbackground(gc);
				}

				if(i==19||j==4)
				textcolor(0);

				if(i==17&&j==2&&opt==4)
				textcolor(12);

				cprintf("л");

			}
		}



		gotoxy(x+30,y+8);
		textcolor(14) ;
		cprintf("About");
		ascii=getch();

     } while(ascii!=13);

     select(opt);



}

class vigenere //class for operations for vigenere cipher
{
	private:

	int status;
	char msg[210],key[25],trunk[210];


	void cipher(int inc,char &ch);
	void kryptographer(char key[],char msg[]);


	public:
	void savedata();
	void readfile();
	void file_cryption();
	void getdata();



	void encryption()
	{

		status =1;
		kryptographer(key,msg);
	}

	void decryption()
	{

		status =-1;
		kryptographer(key,msg);
	}


};

void vigenere:: getdata()
{
	prepresent(6);

	char ch;

	margin(3,72,3);
	textcolor(14);
	gotoxy(5,8) ;
	cprintf("Enter Message:");

	gotoxy(5,11);
	textcolor(15);

	for(int i=0;i<209;i++)
	{
		ch=getche();

		if(i==69)
		gotoxy(5,12);

		if(i==139)
		gotoxy(5,13);

		if(ch==8)
		{

			if(i>=1)
			{
			i=i-2;
			cout<<" \b";

			}

			continue;
		}

		if(ch==27)
		menu();

		if(ch==13)
		break;

		msg[i]=ch;


	}
	msg[i]='\0';


	if(i==209)
	{
		textcolor(13);
		gotoxy(2,25);
		cprintf("Info: Message is filled to maximum limit. PRESS ENTER");
		i=0;
		while(i!=13)
		i=getche();

		gotoxy(2,25);

		for(i=0;i<70;++i)
		cout<<" ";
	}



	textcolor(10);
	gotoxy(3,18);
	cprintf("Enter Key: ");
	textcolor(15);

	for( i=0;i<24;i++)
	{
		ch=getche();

		if(ch==8)
		{
			if(i>=0)
			{
				i=i-2;
				cout<<" \b";
			}

			continue;
		}






		if(ch==13)
		break;

		key[i]=ch;

	}

	key[i]='\0';

	if(i==24)
	{
		textcolor(13);
		gotoxy(2,25);
		cprintf("Info: Key is filled to maximum limit. PRESS ENTER");
		i=0;

		while(i!=13)
		i=getch();

		gotoxy(2,25);

		for(i=0;i<70;++i)
		cout<<" ";
	}


}


void vigenere:: readfile() // reads a message from a list of files .
{

	strcpy(string2,string);
	timer();
	textcolor(7);
	textbackground(0);

	clrscr();
	timer();

	DIR *dir;
	gotoxy(4,4);

	int n=1;
	char file_name[20];

	struct dirent *ent;
	if ((dir = opendir ("D:\\arath\\messages\\")) != NULL)
	{
  /* print all the files and directories within directory */

		int x=2, y=2;
		while ((ent = readdir (dir)) != NULL)
		{      if(wherey()>20)
			{
				x=x+20;
				y=4;
			}


			if(n!=2&&n!=1)
			{

				gotoxy(x,y+2);
				cout<<n-2<<" ." ;
				printf (ent->d_name);
			}
		 n++;
		 y++;

		}
	}

	 closedir (dir);
	 gotoxy(28,3);
	 cprintf("(c)Arath Database System");


	 if(n==3)
	 {
		gotoxy(30,12);
		cout<<"(The Folder is empty)" ;gotoxy(1,25);
		getch();
		menu();
	 }

	 gotoxy(60,25);
	 cout<<"All rights reserved";

	 gotoxy(1,25);
	 cprintf(string2);

	 gets(file_name); //file to be opened.
	 strcat(file_name,format) ; //adds .txt at file_name end
	 strcat(string2,file_name); //creates a complete path of file.

	 ifstream fi2(string2,ios::in);  //creates a stream to take in data.

	 if(!fi2) //if file does not exists.
	 {

		clrscr();
		timer();
		fi2.close();
		margin(2,64,8);
		textcolor(12);
		gotoxy(37,8);
		cout<<"ERROR !";
		gotoxy(30,12);
		cout<<file_name<<" Does Not Exists!";

		getch();
		menu();
	 }

	else
	{

		int k, flag=0;
		clrscr();
		gotoxy(30,12);
		cprintf("1. Decrypt Letter ");
		gotoxy(30,13);
		cprintf("2. Delete Letter");
		gotoxy(39,15);
		cin>>k;

		if (k==2)
		{

			clrscr();
			timer();
			remove(string2);
			gotoxy(30,12);
			cout<<"File Has been removed";
			getch();
			timer();
			fi2.close();
			menu();



		}

		else if(k==1);
		{

			clrscr();
			timer();
			margin(3,40,20);
			textcolor(10);
			gotoxy(36,8);
			cprintf("ENTER KEY");

			gotoxy(22,11);

			char ch;

			for(int i=0;i<24;i++)
			{
				ch=getche();
				if(ch==8)
				{
					if(i>=0)
					{
						i=i-2;
						cout<<" \b";
					}

					continue;
				}

				if(ch==13)
				break;

				key[i]=ch;
			}

			key[i]='\0';

			if(i==24)
			{
				textcolor(13);
				gotoxy(2,25);
				cprintf("Info: Key is filled to maximum limit. PRESS ENTER");
				i=0;
				while(i!=13)
				i=getch();

				gotoxy(2,25);
				for(i=0;i<70;++i)
				cout<<" "; //to remove info message
			}





			i =0;
			for(i=0;(!fi2.eof())&&i<209;++i) //untill eof has not come and msg lenth<210
			fi2.get(msg[i]);

			msg[i-1]='\0';//null at end

			decryption(); //decryption from file it negetes the status.


			clrscr();
			timer();

			margin(3,72,3);
			textcolor(15);
			gotoxy(5,8) ;
			cprintf("Output Message: ");


			gotoxy(5,11);
			cout<<msg;


			getch();

		}






	 fi2.close();
	 strcpy(string2,string);
  }

	menu();
}

void vigenere::cipher(int inc, char &ch)// performs operation char by char
{


	if(isupper(ch))
	{

		if(ch+inc>90)
		ch=ch+inc-90+64;

		else if(ch+inc<65)
		ch=90+((ch+inc)-64);

		else
		ch+=inc;
	}

	if(islower(ch))
	{
		if(ch+inc>122)
		ch=ch+inc-122+96;

		else if(ch+inc<97)
		ch=122+((ch+inc)-96);

		else
		ch+=inc;
	}






}

void vigenere::kryptographer(char key[],char msg[])
{
/*it checks the validity of the entered content and calls cipher() char by char*/

	for(int j=0;j<strlen(key);++j)
	{

		if(!isalpha(key[j]))
		{
			clrscr();
			timer();
			margin(2,64,8);
			textcolor(12);
			gotoxy(37,8);
			cout<<"ERROR !";
			gotoxy(24,12);
			cout<<"Key Contains Non-Alphabetic Content!";
			getch();
			menu();
		}
	}

	for(j=2;j<strlen(msg);++j)   //checks repeation of letter more than twice.
	{
	       if(msg[j-1] ==msg[j-2]&&msg[j-1]==msg[j])
	       {
			prepresent(3);
			clrscr();
			timer();
			margin(2,64,8);
			textcolor(12);
			gotoxy(37,8);
			cout<<"WARNNING !";
			gotoxy(24,12);
			cout<<"Message Violated Code of Conduct !";
			getch();
			prepresent(4);
			menu();
		}
	}

	int kno=0;

	strcpy(trunk,msg); // to save orginal message






	for(int i=0;i<strlen(msg);++i)
	{
		if(!isalpha(msg[i]))
		continue;

		if(isupper(msg[i]))
		cipher( status * (key[kno] % 65), msg[i] );

		if(islower(msg[i]))
		cipher( status * (key[kno] % 97), msg[i] );
		kno++;

		if((kno == strlen(key)))
		kno= 0;


	}
}

void vigenere:: savedata()
{

	char choice;
	textcolor(7);
	textbackground(bgc);
	clrscr();

	timer();
	margin(3,72,3);
	textcolor(15);
	gotoxy(5,8) ;
	cprintf("Output Message: ");
	gotoxy(5,11);
	textcolor(15);

	for(int i=0;i<strlen(msg);i++)
	{
		if(i==69)
		gotoxy(5,12);

		if(i==139)
		gotoxy(5,13);

		cout<<msg[i] ;
	}

	gotoxy(3,18);
	cprintf("Do you want to save this msg?y/n ___\b\b");
	cin>>choice;
	gotoxy(3,18);

	if(choice=='Y'||choice=='y')
	{
		for(int i=0;i<36;++i)
		cout<<" ";

		gotoxy(3,18);
		cout<<"save to "<<string<<">";

		textcolor(15);
		textbackground(4);

		char file_name[50];
		gets(file_name);
		strcat(file_name,format) ;
		strcat(string1,file_name);


		ifstream fi1(string1,ios::in);
		if(fi1)
		{
			gotoxy(32,22);
			cprintf("File Already Exists");
			fi1.close();




		}


		if(!fi1)
		{
			fi1.close();
			ofstream fo(string1,ios::out);

			if(fo.fail())
			{       gotoxy(35,22);

				gotoxy(32,22);
				cprintf("Operation Failed")	;
				fo.close() ;

			}

			else
			{

				fo<<msg;
				fo.close();
				gotoxy(35,22);
				cprintf("File Saved") ;
				getch();
				gotoxy(25,24);
				cout<<string1;

			}



		}

	strcpy(string1,string);

	s=1;
	menu();

}






}






select(int opt) // performs task by option decided by menu()
{
	vigenere c1;

	if(opt==1||opt==2)
	c1.getdata();

	switch(opt)
	{
	case 1:c1.encryption();
	       c1.savedata();
	       break;

	case 2:c1.decryption();
	       c1.savedata();
	       break;

	case 3:c1.readfile();
		s=0;

	       break;

	case 4 :
		textcolor(15);
		textbackground(bgc);
		clrscr();
		gotoxy(30,8);
		cprintf("ARATH SECURE MESSAGING");gotoxy(28,11);
		cprintf("Software to encrypt messages");gotoxy(26,12);
		cprintf("A CS C++ project for 12th board");gotoxy(23,13);
		cprintf("Coded by Himanshu Attri and Anurag");gotoxy(26,14);
		cprintf("Roll No. 9197247 and 9197242");gotoxy(27,15);
		cprintf("Download it from: www.arath.tk");gotoxy(1,25);
		getch();

	       break;

	}


	menu();
}




void main()
{

	char user_name[20];
	textbackground(4);
	clrscr();
	textcolor(7);
	gotoxy(26,12);
	textcolor(15);
	cprintf("Himanshu And Anurag Presents"); gotoxy(1,25);
	delay(2000);
	clrscr();
	gotoxy(28,12);
	cprintf("Arath Secret Messaging" );gotoxy(1,25);
	delay(3000);

	if(mkdir("D:\\Arath\\"))  ; //if Arath is not installed
	{
		mkdir("D:\\Ararth"); //make Arath in D:\
		mkdir("D:\\arath\\Messages"); // makes dir Messages in  Arath
	}

	ifstream igs("D:\\arath\\info.txt",ios::in);// info contains username.
	if(!igs)//if info not found
	{


		ofstream ogs("D:\\arath\\info.txt",ios::out);//amke info
		clrscr();
		gotoxy(31,2);
		cprintf("First Installation");// show installation

		gotoxy(23,12);
		cprintf("Enter Username: " ); //asks for name.
		gets(user_name);
		ogs<<user_name;



	}

	else
	{
		clrscr();

		gotoxy(39,12);
		cprintf("Hii ");  // greets user
		int i=0;

		while(!igs.eof())  // reads username and prints at center
		{
			 char ch;
			igs.get(ch);
			user_name[i]=ch;
			++i; // counts char in user name

		}
		user_name[i]='\0';
		gotoxy(41-(i/2),14); // align to print in center

		cprintf(user_name);
		gotoxy(1,25);
		delay(2000);

	}








	textbackground(bgc);
	clrscr();
	prepresent();
	timer();
	menu();


	getch();
}
/*--------------------------------Thank You---------------------------------*/
