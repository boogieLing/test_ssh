#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>
#include <sys/types.h>
//#include <bits/stdc++.h>


#define FILE_NAME "myfile_1"
signed main( const int argc, const char * const *argv )
{
    FILE *fp ;
    
    fp = fopen(FILE_NAME,"w");
    if(fp==NULL)   
        return 0;
    fclose(fp);   
    
    fp = fopen(FILE_NAME,"r");
    while(1)
    {
        char c = fgetc(fp);
        if (feof(fp)) {
          break ;
        } else {}
        printf("%c", c);
    }
    fclose(fp);
    
    printf( "read end.\n" );
}