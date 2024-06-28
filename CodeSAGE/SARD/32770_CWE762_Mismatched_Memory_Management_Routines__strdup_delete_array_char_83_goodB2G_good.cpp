#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(char * VAR5)
{
 VAR6 = VAR5;
 {
 char VAR7[] = "";
 VAR6 = strdup(VAR7);
 }
}
VAR4::~FUN1()
{
 free(VAR6);
}
}
#endif
