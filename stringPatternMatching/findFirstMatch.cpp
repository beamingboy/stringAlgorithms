#include <iostream>
#include <string.h>

int findMatch(char text[], char pattern[])
{
	int i,j,textSize, patternSize;
	patternSize = strlen(pattern);
	textSize = strlen(text);
	for(i=0; i <= textSize; i++)
	{
		j = 0;
		while((j < patternSize) && (text[i+j] == pattern[j]))
		{
			j++;
		}
		if(patternSize == j) 
		{
			return i;
		}
	}
	return -1;
}

int main(){
	char text[9] = {'A','B','B','A','B','A','B','A'};
	char pattern[2] = {'B','A'};
	std::cout << findMatch(text,pattern) << std::endl;
}

