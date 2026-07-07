/*_strspn gets length prefix of substring
 *@s character to be stored
 *@accept string containing accepted character
 *return noumber of bytes
 */

#include "main.h"

unsigned int _strspn(char *s, char *accept){
	 unsigned int i;
	 unsigned int j;

	 for(i = 0; s[i] != '\0'; i++){

		 for(j = 0; accept[j] != '\0'; j++)

		 {
			 if(s[i] == accept[j])
			 break;
		 }

		 if(accept[j] == '\0')
		 return i;

	 }
	 return i;
}
