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
 {
 size_t VAR9 = strlen(VAR8);
 VAR10 * VAR11;
 if (100-VAR9 > 1)
 {
 VAR11 = fopen(VAR4, "");
 if (VAR11 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (fgets(VAR8+VAR9, (int)(100-VAR9), VAR11) == NULL)
 {
 FUN2("");
 VAR8[VAR9] = '';
 }
 fclose(VAR11);
 }
 }
 }
}
VAR6::~FUN1()
{
 {
 char VAR12[100] = "";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR12, 100-1, VAR8);
 FUN2(VAR12);
 }
}
}
#endif
