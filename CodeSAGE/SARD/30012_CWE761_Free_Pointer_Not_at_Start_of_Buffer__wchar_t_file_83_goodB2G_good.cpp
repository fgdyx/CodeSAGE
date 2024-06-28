#ifndef VAR1
#VAR2 ""
#VAR2 ""
#ifdef VAR3
#define VAR4 ""
#else
#define VAR4 ""
#endif
#define SEARCH_CHAR VAR5''
namespace VAR6
{
VAR7::FUN1(wchar_t * VAR8)
{
 VAR9 = VAR8;
 {
 size_t VAR10 = wcslen(VAR9);
 VAR11 * VAR12;
 if (100-VAR10 > 1)
 {
 VAR12 = fopen(VAR4, "");
 if (VAR12 != NULL)
 {
 if (FUN2(VAR9+VAR10, (int)(100-VAR10), VAR12) == NULL)
 {
 FUN3("");
 VAR9[VAR10] = VAR5'';
 }
 fclose(VAR12);
 }
 }
 }
}
VAR7::~FUN1()
{
 {
 size_t VAR13;
 for (VAR13=0; VAR13 < wcslen(VAR9); VAR13++)
 {
 if (VAR9[VAR13] == VAR14)
 {
 FUN3("");
 break;
 }
 }
 free(VAR9);
 }
}
}
#endif
