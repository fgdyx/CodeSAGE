#ifndef VAR1
#VAR2 ""
#VAR2 ""
#ifdef VAR3
#define VAR4 ""
#else
#define VAR4 ""
#endif
#ifdef VAR3
#define SNPRINTF _snprintf
#else
#define SNPRINTF snprintf
#endif
namespace VAR5
{
VAR6::FUN1(char * VAR7)
{
 VAR8 = VAR7;
 strcpy(VAR8, "");
}
VAR6::~FUN1()
{
 {
 char VAR9[100] = "";
 FUN2(VAR9, 100-1, VAR8);
 FUN3(VAR9);
 }
}
}
#endif
