#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;
char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

void box();                                                     //displays box with numbers
char questions();                                               //for displaying random questions
int  towin();                                                   //holds win criteria
int  main()
{
	int i,choice;
	char c;
    do
    {
        box();
        cout<<endl;
        cout<<endl;

        cout <<"Enter a number:  ";
        cin >> choice;
        
        if (choice == 1 && square[1] == '1')
        {
        	c =questions();
        	if (c=='y'){
			square[1] = 'T';
			}
		    else square[1] = 'F';
		}
        else if (choice == 2 && square[2] == '2')
		{
        	c =questions();
        	if (c=='y'){
			square[2] = 'T';
			}
		    else square[2] = 'F';
		}   
        else if (choice == 3 && square[3] == '3')
        {
        	c= questions();
        	if (c=='y'){
			square[3] = 'T';
			}
		    else square[3] = 'F';
		}
        else if (choice == 4 && square[4] == '4')
        {
        	c =questions();
        	if (c=='y'){
			square[4] = 'T';
			}
		    else square[4] = 'F';
		}
        else if (choice == 5 && square[5] == '5')
        {
        	c=questions();
        	if (c=='y'){
			square[5] = 'T';
			}
		    else square[5] = 'F';
		}
        else if (choice == 6 && square[6] == '6')
        {
        	c =questions();
        	if (c=='y'){
			square[6] = 'T';
			}
		    else square[6] = 'F';
		}
        else if (choice == 7 && square[7] == '7')
        {
        	c =questions();
        	if (c=='y'){
			square[7] = 'T';
			}
		    else square[7] = 'F';
		}
        else if (choice == 8 && square[8] == '8')
        {
        	c= questions();
        	if (c=='y'){
			square[8] = 'T';
			}
		    else square[8] = 'F';
		}
        else if (choice == 9 && square[9] == '9')
        {
        	c=questions();
        	if (c=='y'){
			square[9] = 'T';
			}
		    else square[9] = 'F';
		}
        else
        {
            cout<<"Invalid Number Entered";   
        }
        i=towin();                     
    }
	while(i==-1);
    box();
    if(i==1)
        cout<<"==>\aYou win";
    else if(i==2)
    	cout<<"==>\aYou loose";
    else
        cout<<"==>\aGame draw";
        
    return 0;
}



                        /*********************************************************/
                        /*                        FUNCTIONS                      */
                        /*********************************************************/
void box()
{
    system("cls");
    cout << "\n\n\t    Tic Tac Toe\n\n";

    cout << " 	 ___________________" << endl;
    cout << "  	|     ||     ||     |" << endl;
    cout << "	|  " << square[1] << "  ||  " << square[2] << "  ||  " << square[3] <<"  |"<< endl;
    cout << "	|=====||=====||=====|" << endl;
    cout << "	|     ||     ||     |" << endl;
    cout << "	|  " << square[4] << "  ||  " << square[5] << "  ||  " << square[6] <<"  |"<< endl;
    cout << "	|=====||=====||=====|" << endl;
    cout << "	|     ||     ||     |" << endl;
    cout << "	|  " << square[7] << "  ||  " << square[8] << "  ||  " << square[9] <<"  |"<< endl;
    cout << "	|_____||_____||_____|" << endl;
}

char questions()                                            //Function for declaring random questions
{
	int j;
	string names;
	srand(time(0));
	j=rand()%12;
	{
		if(j==0){
			cout<<"What has to be broken before you can use it?"<<endl;
			cin>>names;
			if(names == "egg"){
			 return 'y';}
			else
			return 'n';
		}
		else if(j==1){
			cout<<"What comes once in a minute, twice in a moment, but not in a thousand years?"<<endl;
			cin>>names;
			if(names=="m"){
			return 'y';}
			else 
			return 'n';
		}
		else if(j==2){
			cout<<"John's mother had three children. The first child was named April. The second child was named May.\nWhat was the third child's name?"<<endl;
			cin>>names;
			if(names=="john"){
			return 'y';}
			else 
			return 'n';
		}
		else if(j==3){
			cout<<"If you have one, you want to share it. But once you share it, you do not have it. What is it?"<<endl;
			cin>>names;
			if(names=="secret"){
			return 'y';}
			else 
			return 'n';
		}
		else if(j==4){
			cout<<"When the day after tomorrow becomes yesterday, then today will be as far from sunday as the day it\nwas today hen the day before yesterday as tomorrow\nWhat day is it?\na)Sunday\nb)Monday\nSelect'a'or'b'"<<endl;
			cin>>names;
			if(names=="a"){
			return 'y';}
			else 
			return 'n';
		}
		else if(j==5){
			cout<<"Which one is input device?\na)Keyboard\nb)printer\nc)speaker"<<endl;
			cin>>names;
			if(names=="c"){
			return 'y';}
			else 
			return 'n';
		}
		else if(j==6){
			cout<<"I follow you all the time and copy your every move, but you can’t touch me or catch me. What am I?"<<endl;
			cin>>names;
			if(names=="shadow"){
			return 'y';}
			else 
			return 'n';
		}
		else if(j==7){
			cout<<"Mr. Smith has 4 daughters. Each of his daughters has a brother. How many children does Mr. Smith have?"<<endl;
			cin>>names;
			if(names=="5"){
			return 'y';}
			else 
			return 'n';
		}
		else if(j==8){
			cout<<"The lakes there are always empty, the mountains here are always flat and the rivers always still.\nWhat is it?"<<endl;
			cin>>names;
			if(names=="map"){
			return 'y';}
			else 
			return 'n';
		}
		else if(j==9){
			cout<<"You have a dime and a dollar, you buy a dog and a collar, the dog is a dollar more than the collar\nhow much is the collar?\na)0.10\nb)0.05\nc)1.00\nSelect'a','b'or'c'"<<endl;
			cin>>names;
			if(names=="b"){
			return 'y';}
			else 
			return 'n';
		}
		else if(j==10){
			cout<<"The last muhgal king was:\na)Shah Jahan\nb)Aurangzeb\nc)Shah Zafar\nSelect'a','b'or'c'"<<endl;
			cin>>names;
			if(names=="c"){
			return 'y';}
			else 
			return 'n';
		}
		else if(j==11){
			cout<<"How many times martial laws were imposed on Pakistan?"<<endl;
			cin>>names;
			if(names=="4"){
			return 'y';}
			else 
			return 'n';
		}
	}
}

int towin()
{                                                                                //winning conition
    if      (square[1] == square[2] && square[2] == square[3] && square[1] == 'T')
        return 1;
        
    else if (square[4] == square[5] && square[5] == square[6] && square[1] == 'T')
        return 1;
        
    else if (square[7] == square[8] && square[8] == square[9] && square[7] == 'T')
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7] && square[4] == 'T')
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8] && square[5] == 'T')
        return 1;
        
    else if (square[3] == square[6] && square[6] == square[9] && square[6] == 'T')
        return 1;
        
    else if (square[1] == square[5] && square[5] == square[9] && square[5] == 'T')
        return 1;
        
    else if (square[3] == square[5] && square[5] == square[7] && square[5] == 'T')
        return 1;
                                                                                //loosing condition
    else if (square[1] == square[2] && square[2] == square[3] && square[2] == 'F')
        return 2;
        
    else if (square[4] == square[5] && square[5] == square[6] && square[5] == 'F')
        return 2;
        
    else if (square[7] == square[8] && square[8] == square[9] && square[8] == 'F')
        return 2;
        
    else if (square[1] == square[4] && square[4] == square[7] && square[4] == 'F')
        return 2;
        
    else if (square[2] == square[5] && square[5] == square[8] && square[5] == 'F')
        return 2;
        
    else if (square[3] == square[6] && square[6] == square[9] && square[6] == 'F')
        return 2;
        
    else if (square[1] == square[5] && square[5] == square[9] && square[5] == 'F')
        return 2;
        
    else if (square[3] == square[5] && square[5] == square[7] && square[5] == 'F')
        return 2;
    else
        return -1;
}
