#ifndef VAR1
#VAR2 <VAR3.VAR4>
#VAR2 ""
#VAR2 ""
namespace VAR5
{
VAR6::FUN1(char * VAR7)
{
 VAR8 = VAR7;
 strcpy(VAR8, "");
}
static void FUN2(char * VAR8, ...)
{
 {
 char VAR9[100] = "";
 va_list VAR10;
 FUN3(VAR10, VAR8);
 vsnprintf(VAR9, 100-1, VAR8, VAR10);
 FUN4(VAR10);
 FUN5(VAR9);
 }
}
VAR6::~FUN1()
{
 FUN2(VAR8, VAR8);
}
}
#endif
