#include <string.h>

    /* take line, give back part after colon */
char *parse_line(char *string) {
    char *temp_ptr; 
    temp_ptr=strstr(string,":");
       /* skip past the colon */
    temp_ptr++;
       /* skip any white-space */
    while (( temp_ptr[0] == ' ') || ( temp_ptr[0] == '\t')) temp_ptr++;
    return temp_ptr;
}

char *clip_lf(char *string,int size) {
    char *temp_ptr;
    int i=0;
   
    temp_ptr=string;
  
    while ((*temp_ptr!=0) && (*temp_ptr!='\n') && (i<size)) {  
       i++;
       temp_ptr++;
    }
    *temp_ptr=0;
    return string;
}
