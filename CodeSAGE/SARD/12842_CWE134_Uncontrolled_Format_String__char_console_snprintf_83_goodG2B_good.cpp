#ifndef VAR1
#VAR2 ""
#VAR2 ""
#ifdef VAR3
#define SNPRINTF _snprintf
#else
#define SNPRINTF snprintf
#endif
namespace VAR4
{
VAR5::FUN1(char * VAR6)
{
 VAR7 = VAR6;
 strcpy(VAR7, "");
}
VAR5::~FUN1()
{
 {
 char VAR8[100] = "";
 FUN2(VAR8, 100-1, VAR7);
 FUN3(VAR8);
 }
}
}
#endif
