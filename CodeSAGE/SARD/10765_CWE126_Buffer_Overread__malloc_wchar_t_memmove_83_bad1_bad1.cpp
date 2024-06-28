#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(wchar_t * VAR5)
{
 VAR6 = VAR5;
 /* FLAW: Use a small buffer */
 VAR6 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR6, VAR7'', 50-1);
 VAR6[50-1] = VAR7'';
}
VAR4::~FUN1()
{
 {
 wchar_t VAR8[100];
 wmemset(VAR8, VAR7'', 100-1);
 VAR8[100-1] = VAR7'';
 /* POTENTIAL FLAW: using memmove with the length of the dest where data
 * could be smaller than dest causing buffer overread */
 memmove(VAR8, VAR6, wcslen(VAR8)*sizeof(wchar_t));
 VAR8[100-1] = VAR7'';
 FUN2(VAR8);
 free(VAR6);
 }
}
}
#endif
