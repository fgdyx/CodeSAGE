#ifndef VAR1
#VAR2 ""
#VAR2 ""
#define VAR3 ""
#ifdef VAR4
#define GETENV getenv
#else
#define GETENV getenv
#endif
#ifdef VAR4
#define SNPRINTF _snprintf
#else
#define SNPRINTF snprintf
#endif
namespace VAR5
{
VAR6::FUN1(char * VAR7)
{
 VAR8 = VAR7;
 {
 size_t VAR9 = strlen(VAR8);
 char * VAR10 = FUN2(VAR3);
 if (VAR10 != NULL)
 {
 strncat(VAR8+VAR9, VAR10, 100-VAR9-1);
 }
 }
}
VAR6::~FUN1()
{
 {
 char VAR11[100] = "";
 FUN3(VAR11, 100-1, "", VAR8);
 FUN4(VAR11);
 }
}
}
#endif
