#ifndef VAR1
#VAR2 ""
#VAR2 ""
#define VAR3 ""
#ifdef VAR4
#define GETENV getenv
#else
#define GETENV getenv
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
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR8+VAR9, VAR10, 250-VAR9-1);
 }
 }
}
VAR6::~FUN1()
{
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN3(VAR8);
}
}
#endif
