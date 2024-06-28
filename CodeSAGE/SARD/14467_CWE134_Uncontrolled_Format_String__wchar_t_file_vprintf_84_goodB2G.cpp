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
VAR8::FUN1(wchar_t * VAR9)
{
 VAR10 = VAR9;
 {
 size_t VAR11 = wcslen(VAR10);
 VAR12 * VAR13;
 if (100-VAR11 > 1)
 {
 VAR13 = fopen(VAR6, "");
 if (VAR13 != NULL)
 {
 if (FUN2(VAR10+VAR11, (int)(100-VAR11), VAR13) == NULL)
 {
 FUN3("");
 VAR10[VAR11] = VAR14'';
 }
 fclose(VAR13);
 }
 }
 }
}
static void FUN4(wchar_t * VAR10, ...)
{
 {
 va_list VAR15;
 FUN5(VAR15, VAR10);
 FUN6(VAR14"", VAR15);
 FUN7(VAR15);
 }
}
VAR8::~FUN1()
{
 FUN4(VAR10, VAR10);
}
}
#endif
