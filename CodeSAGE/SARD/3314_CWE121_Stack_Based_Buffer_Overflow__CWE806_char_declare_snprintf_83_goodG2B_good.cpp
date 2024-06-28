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
 memset(VAR7, '', 50-1);
 VAR7[50-1] = '';
}
VAR5::~FUN1()
{
 {
 char VAR8[50] = "";
 FUN2(VAR8, strlen(VAR7), "", VAR7);
 FUN3(VAR7);
 }
}
}
#endif
