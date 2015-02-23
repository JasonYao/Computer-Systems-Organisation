#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char *mystr (char *s1, char *s2)
{
	// Finding the word length
	int wordLength = 0;
	for (int i = 0; *(s2 + i) != '\0'; ++i)
	{++wordLength;}

	// Finding the match
	char *a = s1;
	char *b = s2;
	int match = 0;

	while ((*(a + match) != '\0') && (*(b + match) != '\0'))
	{
		// Base: match was found
		if (*(a + match) == *(b + match))
		{++match;}

		// Continue: Match not found
		else
		{++a;}
	} // End of matching while loop

	// Word found:
	if (match == wordLength)
	{return a;}
	else
	{return NULL;}
} // End of the mystr function

struct timespec {
        time_t   tv_sec;        /* seconds */
        long     tv_nsec;       /* nanoseconds */
};

int main()
{
        char *s1 = "Hello World";
        char *s2 = "Wor";

	// Get start time
	char bufferStart[110];
	char bufferEnd[110];
	time_t start = time(0);
	clock_gettime(); // New way

	// Call the method
        char *foundWord = mystr(s1, s2);

	// Get end time
	time_t end = time(0);

	strftime (bufferStart, 110, "%S", localtime (&start));
	strftime (bufferEnd, 110, "%S", localtime (&end));
	printf ("%s\n", bufferStart);
	printf ("%s\n", bufferEnd);

        // Prints the String out
        for (int i = 0; *(foundWord + i) != '\0'; ++i)
        {
                printf ("%c", *(foundWord + i));
        }
	printf("\n");

	return 0;
} // End of the main function

