#include<stdio.h>
#include<string.h>    // For Standard Library Function

// strlen () - int strlen (string name)
// strcmp () - compare two string
// strcpy () - strcpy (Destination string, Source String);
// strncmp () -  comparing first ‘n’ characters of 2 strings
// strncpy () - strncpy (Destination string, Source String, n);
// strrev () - reversing a string
// strcat () - combines two strings
// strstr () - search whether a substring is present in the main string or not
// strncat () - strncat (Destination String, Source string,n);

int main(){

    //strlen()

    char name[] = "Hello World";
    int name_len = strlen(name);
    printf("Length of the string is %d\n",name_len);


    //strcmp - compare two string

    char name1[] = "Vatsal";
    char name2[] = "Vatsal Patel";

     printf("Differnece name1 to name2 : %d\n",strcmp(name1,name2));
     printf("Differnece name2 to name1 : %d\n",strcmp(name2,name1));


        // strcpy () - copy string into another

        char empty[50];  
        strcpy(empty,"hello world");  
        printf("%s \n ",empty );

        char str1[] = "Hello";
        char str2[] = "Bye";

        strcpy(str1,str2);
        printf("Print str1 : %s \n",str1);
        printf("Print str2 : %s \n",str2);


    // strncpy (Destination string, Source String, n);

    char a[50] = "Vatsal";
    char b[50] = "Patel";
  
   strncpy (b,a,3);
   b[3] = '\0';
   printf ("copied string = %s \n",b);

    

    // strcat() - combines two strings

    char one[] = "Vatsal ";
    char two[] = "Patel";

    printf("Combine :%s \n",strcat(one,two));


    // strncat (Destination String, Source string,n);
    char c[] = "Well";
    strncat (a,c,3);
    a[10] = '\0';
   printf("Concatenated string = %s \n", a); 


    // strncmp () - comparing first ‘n’ characters of 2 strings

    char the[10] = "the";
    char there[10] = "there";

    char vatsal[10] = "Patlal";
    char patel[10] = "Patel";
  
    printf("Compare : %s \n", strncmp(the,there,3));

    int value = strncmp(vatsal,patel,3);
 
    if (!value) {
        printf("characters are same. \n");
    }
    else {
        printf("The first %d characters are not equal. \n",value);
    }

    // strrev() - reversing a string

    char rev[] = "Hello";
    printf("%s\n",strrev(rev) );

    // strstr () - search whether a substring is present in the main string or not

    char strmain[] = "Hello Every one! Nice to meet you";
    char strsub[] = "Nice";
    char *searchstr;
    searchstr = strstr(strmain,strsub);

    if(!searchstr){
        printf("\nString Not Found!\n" );
    }
    else{
        printf("%s is found in %s in %d position",strsub,strmain,searchstr-strmain);
       
    }




    return 0;
}