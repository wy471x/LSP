#include <stdio.h>                                                                                                                                                                         
#include <stdlib.h>
#define ERROR_CHECK(val, ret, func) {if(ret == val){ perror(func); exit(-1); }}  
int main(void)                                                                  
{                                                                               
     FILE *in, *out;                                                             
     struct pirate{                                                              
        char name[100];                                                         
        unsigned long booty;                                                    
        unsigned int beard_len;                                                 
     }p, blackbeard = {"Edward Teach", 950, 48};                                 
                                                                                     
     out = fopen("data", "w");                                                   
     ERROR_CHECK(NULL, out, "fopen");                                            
                                                                                 
     int ret = fwrite(&blackbeard, sizeof(struct pirate), 1, out);               
     ERROR_CHECK(0, ret, "fwrite");                                              
                                                                                 
     ret = fclose(out);                                                          
     ERROR_CHECK(EOF, ret, "fclose");                                            
                                                                                 
     in = fopen("data", "r");                                                    
     ERROR_CHECK(NULL , in, "fopen");                                            
     ret = fread(&p, sizeof(struct pirate), 1, in);                              
     ERROR_CHECK(0, ret, "fread");                                               
                                                                                 
     ret = fclose(in);                                                           
     ERROR_CHECK(EOF, ret, "fclose");                                            
                                                                                     
     printf("name =\"%s\", booty = %lu, beard_len = %u\n", p.name, p.booty, 
                p.beard_len);                                                        
     return 0;  
}
