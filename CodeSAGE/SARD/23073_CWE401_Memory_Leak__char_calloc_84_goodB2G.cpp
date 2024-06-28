#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(char * VAR5)
{
 VAR6 = VAR5;
 VAR6 = (char *)calloc(100, sizeof(char));
 strcpy(VAR6, "");
 FUN2(VAR6);
}
VAR4::~FUN1()
{
 free(VAR6);
}
}
#endif
