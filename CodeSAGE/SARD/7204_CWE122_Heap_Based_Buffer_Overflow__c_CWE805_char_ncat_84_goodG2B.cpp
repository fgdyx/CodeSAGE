#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(char * VAR5)
{
 VAR6 = VAR5;
 VAR6 = (char *)malloc(100*sizeof(char));
 VAR6[0] = '';
}
VAR4::~FUN1()
{
 {
 char VAR7[100];
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 strncat(VAR6, VAR7, 100);
 FUN2(VAR6);
 free(VAR6);
 }
}
}
#endif
