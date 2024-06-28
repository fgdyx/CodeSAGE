#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(char * VAR5)
{
 VAR6 = VAR5;
 VAR6 = (char *)malloc(100*sizeof(char));
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
}
VAR4::~FUN1()
{
 {
 char VAR7[100];
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 memmove(VAR7, VAR6, strlen(VAR7)*sizeof(char));
 VAR7[100-1] = '';
 FUN2(VAR7);
 free(VAR6);
 }
}
}
#endif
