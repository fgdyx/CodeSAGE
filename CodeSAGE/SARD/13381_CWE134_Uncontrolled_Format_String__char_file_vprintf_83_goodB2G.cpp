#ifndef VAR1
#VAR2 <VAR3.VAR4>
#VAR2 ""
#VAR2 ""
#ifdef VAR5
#define VAR6 ""
#else
#define VAR6 ""
#endif
namespace VAR7
{
VAR8::FUN1(char * VAR9)
{
 VAR10 = VAR9;
 {
 size_t VAR11 = strlen(VAR10);
 VAR12 * VAR13;
 if (100-VAR11 > 1)
 {
 VAR13 = fopen(VAR6, "");
 if (VAR13 != NULL)
 {
 if (fgets(VAR10+VAR11, (int)(100-VAR11), VAR13) == NULL)
 {
 FUN2("");
 VAR10[VAR11] = '';
 }
 fclose(VAR13);
 }
 }
 }
}
static void FUN3(char * VAR10, ...)
{
 {
 va_list VAR14;
 FUN4(VAR14, VAR10);
 FUN5("", VAR14);
 FUN6(VAR14);
 }
}
VAR8::~FUN1()
{
 FUN3(VAR10, VAR10);
}
}
#endif
