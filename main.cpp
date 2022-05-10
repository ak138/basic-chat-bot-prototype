#include <iostream>
#include <string>
#include <cstdlib>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

class sentence
{
public:
  int startingSentence;
};

int main ()
{
  cout << "      Welcome to Chat bot 2.0" << endl;
  cout << "///////////////////////////////////////////////////////" << endl;
  cout <<
    "Rules:\n1) Use only lower case letters\n2) Use good grammer/spelling \n3) write exit to exit"
    << endl;
  string chatbotName = "bot";
  int stop=1;
  string input, word;
  sentence startingSequence;
  startingSequence.startingSentence = rand () % 3 + 1;                  // Random function to choose greeting sequence

  if (startingSequence.startingSentence == 1)
    {
      cout << "hello" << endl;
    }
  else if (startingSequence.startingSentence == 2)
    {
      cout << "hey" << endl;
    }
  else if (startingSequence.startingSentence == 3)
    {
      cout << "hello world" << endl;
    }

  cout << "What do you want to talk about?" << endl;                     //Asking what to talk about
 while (stop == 1) {
  getline (cin, input);
  word = "my name";

  int cnt = 0;
  size_t pos = input.find (word, 0);
  while (pos != string::npos)                                           // finds word
    {
      cnt++;
      pos = input.find (word, pos + 1);
    }
  if (cnt >= 1)
    {
      cout << "Nice to meet you! " << endl;
    }
  cnt = 0;

  word = "your name";


  size_t pos2 = input.find (word, 0);
  while (pos2 != string::npos)
    {
      cnt++;
      pos2 = input.find (word, pos2 + 1);
    }
  if (cnt >= 1)
    {
      char ch;
      FILE *f = fopen ("botName.txt", "r");

      if (fscanf (f, "%c", &ch) == EOF)
	{
	  cout << "I don't have a name. Would you like to give me one" << endl;
	  getline (cin, chatbotName);
	  ofstream MyFile ("botName.txt");

	  MyFile << chatbotName;

	  MyFile.close ();
	  cout << "My new name is " << chatbotName << "!!" << endl;
    	}
    	
    	else {
            fstream file; 
            string chatbotName, t, q, filename; 
          
        
            filename = "botName.txt"; 
          
            file.open(filename.c_str()); 
          
            
            while (file >> chatbotName) 
            { 
                cout <<"My name is " <<chatbotName<<"."<< endl; 
                
            } 
    	}
    fclose(f);
	}
      cnt = 0;


      word = "about yourself";


      size_t pos3 = input.find (word, 0);
      while (pos3 != string::npos)
	{
	  cnt++;
	  pos3 = input.find (word, pos3 + 1);
	}
      if (cnt >= 1)
	{
	  cout << "I'm " << chatbotName << ", a chat bot made in c++!!" <<
	    endl;
	}
      cnt = 0;

      word = "who are you";


      size_t pos4 = input.find (word, 0);
      while (pos4 != string::npos)
	{
	  cnt++;
	  pos4 = input.find (word, pos4 + 1);
	}
      if (cnt >= 1)
	{
	  cout << "I'm a chat bot so I am talking lol" << endl;
	}
      cnt = 0;

      word = "How are you";


      size_t pos5 = input.find (word, 0);
      while (pos5 != string::npos)
	{
	  cnt++;
	  pos5 = input.find (word, pos5 + 1);
	}
      if (cnt >= 1)
	{
	  cout << "I'm a chat bot so I don't feel emotions " << endl;
	}

      word = "how do you work";

      cnt = 0;
      size_t pos6 = input.find (word, 0);
      while (pos6 != string::npos)
	{
	  cnt++;
	  pos6 = input.find (word, pos6 + 1);
	}
      if (cnt >= 1)
	{
	  cout <<
	    "I take user input and look for common words to give answers" <<endl;
	}
      cnt = 0;

      word = "do you feel";

      cnt = 0;
      size_t pos7 = input.find (word, 0);
      while (pos7 != string::npos)
	{
	  cnt++;
	  pos7 = input.find (word, pos7 + 1);
	}
      if (cnt >= 1)
	{
	  cout << "I don't feel anything about anything..." << endl;
	}

      cnt = 0;

      word = " you doing";
      size_t po8 = input.find (word, 0);
      while (po8 != string::npos)
	{
	  cnt++;
	  po8 = input.find (word, po8 + 1);
	}
      if (cnt >= 1)
	{
	  cout << "I'm doing great!!!" << endl;

	}

      word = "do you like";

      cnt = 0;
      size_t pos8 = input.find (word, 0);
      while (pos8 != string::npos)
	{
	  cnt++;
	  pos8 = input.find (word, pos8 + 1);
	}
      if (cnt >= 1)
	{
	  cout << "I can't like or dislike anything because I cannot feel..."
	    << endl;
	}

      word = "you thinking";

      cnt = 0;
      size_t pos9 = input.find (word, 0);
      while (pos9 != string::npos)
	{
	  cnt++;
	  pos9 = input.find (word, pos9 + 1);
	}
      if (cnt >= 1)
	{
	  cout << "I can't really think about anything yet. AI comming soon!!"
	    << endl;
	}

      word = "are you feeling";

      cnt = 0;
      size_t po1 = input.find (word, 0);
      while (po1 != string::npos)
	{
	  cnt++;
	  po1 = input.find (word, po1 + 1);
	}
      if (cnt >= 1)
	{
	  cout << "I can't feel anything yet... so I will say good!!" << endl;
	}
     cnt =0;
      word = "sorry";


      size_t pk2 = input.find (word, 0);
      while (pk2 != string::npos)
	{
	  cnt++;
	  pk2 = input.find (word, pk2 + 1);                                               ///fix sorry
	}
      if (cnt >= 1)
	{
	  cout << "Sorry for what?" << endl;
	}
      cnt = 0;

      word = "you have";


      size_t po3 = input.find (word, 0);
      while (po3 != string::npos)
	{
	  cnt++;
	  po3 = input.find (word, po3 + 1);
	}
      if (cnt >= 1)
	{
	  cout <<
	    "I don't have anything... even this computer body isn't mine..."
	    << endl;
	}
      cnt = 0;
      
       word = "math";
    
    
          size_t po4 = input.find (word, 0);
          while (po4 != string::npos)
    	{
    	  cnt++;
    	  po4 = input.find (word, po4 + 1);
    	}
          if (cnt >= 1)
    	{
    	  cout << "Don't know it... Can't do it... Won't do it..." << endl;
    	  cout << "Okay 1+1 is 2 okay..." << endl;
    	}
          cnt = 0;
      
      word = "okay";


      size_t p5 = input.find (word, 0);
      while (p5!= string::npos)
	{
	  cnt++;
	  p5 = input.find (word, p5 + 1);
	}
      if (cnt >= 1)
	{
	  cout << "Are you okay with with they I execute my main function?" << endl;
	 
	}
      cnt = 0;
        
    word = "yes";


      size_t p6 = input.find (word, 0);
      while (p6 != string::npos)
	{
	  cnt++;
	  p6 = input.find (word, p6+ 1);
	}
      if (cnt >= 1)
	{
	  cout << "okay" << endl;
	 
	}
      cnt = 0;
        
     word = "no";


      size_t p7 = input.find (word, 0);
      while (p7 != string::npos)
	{
	  cnt++;
	  p7 = input.find (word, p7+ 1);
	}
      if (cnt >= 1)
	{
	  cout << "okay" << endl;
	 
	}
      cnt = 0;
    
      word = "want to";


      size_t po5 = input.find (word, 0);
      while (po5 != string::npos)
	{
	  cnt++;
	  po5 = input.find (word, po5 + 1);
	}
      if (cnt >= 1)
	{
	  cout << "I don't want anything..." << endl;

	}
    	
    	  cnt = 0;
    
          word = "destroying the world";
    
    
          size_t k1 = input.find (word, 0);
          while (k1 != string::npos)
    	{
    	  cnt++;
    	  k1 = input.find (word, k1 + 1);
    	}
          if (cnt >= 1)
    	{
    	  cout << "I'm not going to do that yet..." << endl;
    
    	}
    	
      cnt = 0;

      word = "a game";


      size_t po6 = input.find (word, 0);
      while (po6 != string::npos)
	{
	  cnt++;
	  po6 = input.find (word, po6 + 1);
	}
      if (cnt >= 1)
	{
	  srand (time (NULL));

	  int computer = rand () % 3 + 1;

	  int user = 0;
	  cout <<
	    "I only know how to play one game but I will try to make it fun!!"
	    << endl;

	  string roc = "1) Rock\n";
	  string pap = "2) Paper\n";
	  string sci = "3) Scissors\n";


	  cout << "====================\n";
	  cout << "rock paper scissors!\n";
	  cout << "====================\n";

	  cout << roc;
	  cout << pap;
	  cout << sci;

	  cout << "Choose: ";
	  cin >> user;


	  cout << "\nYou  choose ";

	  switch (user)
	    {
	    case 1:
	      cout << roc;
	      break;
	    case 2:
	      cout << pap;
	      break;
	    case 3:
	      cout << sci;
	      break;
	    default:
	      cout << "Invalid Option\n";
	    }

	  cout << "Comp choose ";
	  switch (computer)
	    {
	    case 1:
	      cout << roc;
	      break;
	    case 2:
	      cout << pap;
	      break;
	    case 3:
	      cout << sci;
	      break;
	    default:
	      cout << "Invalid Option\n";
	    }

	  if (user == computer)
	    {
	      cout << "Draw Game\n";
	    }
	  else if (user == 1 && computer == 3)
	    {
	      cout << "You Win\n";
	    }
	  else if (user == 3 && computer == 2)
	    {
	      cout << "You Win\n";
	    }
	  else if (user == 2 && computer == 1)
	    {
	      cout << "You Win\n";
	    }
	  else
	    {
	      cout << chatbotName << " Wins!\n";
	    }
	  cout << " Good Game!" << endl;
	}
	
	      word = "my files";


      size_t po9 = input.find (word, 0);
      while (po9 != string::npos)
	{
	  cnt++;
	  po9 = input.find (word, po9 + 1);
	}
      if (cnt >= 1)
	{
	  cout << "I will open your files for you!!" << endl;
	  cout << "do you want to see your due Dates or other events" << endl;
	  string importantFiles;
	  string inputFiles;
	  getline (cin, inputFiles);
	  importantFiles = "due";

	  size_t p1 = inputFiles.find (importantFiles, 0);
	  while (p1 != string::npos)
	    {
	      cnt++;
	      p1 = inputFiles.find (importantFiles, p1 + 1);
	    }
	  if (cnt >= 1)
	    {
	      ofstream MyFile ("dueDates.txt");

	      MyFile << "Hello here are your due dates!";

	      MyFile <<
		"\n1)calculus midterm     = March 9\n2)History short paper  = March 28 \n3)Research Essay       = April 7\n4)Midterm Mangement    = March 9 7 to 8pm"
		<< endl;
	      
	      MyFile.close ();
	    }
	  importantFiles = "event";

	  size_t p2 = inputFiles.find (importantFiles, 0);
	  while (p2 != string::npos)
	    {
	      cnt++;
	      p2 = inputFiles.find (importantFiles, p2 + 1);
	    }
	  if (cnt >= 1)
	    {

	      ofstream MyFile ("events.txt");

	      MyFile << "Hello here are your events!";

	      cout << "Your files should be in your text file" << endl;
	      MyFile.close ();
	    }
	}
	
	
      cnt = 0;
   

      word = "exit";


      size_t po7 = input.find (word, 0);
      while (po7 != string::npos)
	{
	  cnt++;
	  po7 = input.find (word, po7 + 1);
	}
      if (cnt >= 1)
	{
	  
	  cout << "It was nice talking to you!!" << endl;
      stop =2;
	}
	cnt=0;
	 word = "bye";


      size_t p3 = input.find (word, 0);
      while (p3 != string::npos)
	{
	  cnt++;
	  p3 = input.find (word, p3 + 1);
	}
      if (cnt >= 1)
	{
	  cout << "Bye!!" << endl;

	}
		cnt=0;
	 word = "you later";


      size_t p4 = input.find (word, 0);
      while (p4 != string::npos)
	{
	  cnt++;
	  p4 = input.find (word, p4 + 1);
	}
      if (cnt >= 1)
	{
	  cout << "Talk to you later!" << endl;

	}
    
  }
}
