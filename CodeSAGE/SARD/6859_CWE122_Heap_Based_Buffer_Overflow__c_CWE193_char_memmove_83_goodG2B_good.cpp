#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(char * VAR5)
{
 VAR6 = VAR5;
 VAR6 = (char *)malloc((10+1)*sizeof(char));
}
VAR4::~FUN1()
{
 {
 char VAR7[10+1] = VAR8;
 memmove(VAR6, VAR7, (strlen(VAR7) + 1) * sizeof(char));
 FUN2(VAR6);
 free(VAR6);
 }
}
}
#endif
