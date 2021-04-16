/* 
  Name : Divnoor Singh Bhandohal
  Email : dsingh306@myseneca.ca
  Student id: 124147208 
   Module : Tokenizing
  */


#include "tokenizing.h"					//including the header file

void tokenizing() {  
	// beginning of v1
	printf("*** Start of Tokenizing Words Demo ***\n");	// print statement for letting the user know what type of tokeniziation is going to be carried out
	char words[200], phrases[200], sentences[200];		// declaration of variables
	char* word, * phrase, * sentence;			
	int w_counter, p_counter, s_counter;			
	
	while (TRUE)					//starting an infinite while loop
	{					
		printf("Type a few words separated by space (q - to quit):\n");
		
		gets(words);				
		
		if (strcmp(words, "q") == 0) 		// condtition for exiting the while loop i.e if the string entered by the user is q
			break;
		word = strtok(words, " ");		// function call 
							
		w_counter = 1;				// initialization of variable
		
		while (word) 				//while loop that'll run till the user enters a valid word
{
			printf("Word #%d is \'%s\' \n", w_counter++, word);	// print statement for telling the user the number of word entered by them and the word they entered
			word = strtok(NULL, " ");				//function call 
	}
}
	printf("*** End of Tokenizing Words Demo ***\n\n");	
// beginning of v2
	printf("*** Start of Tokenizing Phrases Demo ***\n");	// print statement for letting the user know what type of tokeniziation is going to be carried out
	
	while (TRUE)					//starting an infinite while loop
	{
		printf("Type a few phrases separated by comma(q - to quit):\n");
		gets(phrases);				

		if (strcmp(phrases, "q") == 0)			// condtition for exiting the while loop i.e if the string entered by the user is q
			break;

		phrase = strtok(phrases, ",");		//function call 
		p_counter = 1;				

		while (phrase)							//while loop that'll run till the user enters a valid phrase
		{
			printf("Phrase #%d is \'%s\'\n", p_counter++, phrase);		// print statement for telling the user the number of phrases entered by them and the phrase they entered
			phrase = strtok(NULL, ",");					//function call
		}
	}
	printf("*** End of Tokenizing Phrases Demo ***\n\n");	
}


