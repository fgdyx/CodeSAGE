#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(wchar_t * VAR5)
{
 {
 size_t VAR6, VAR7;
 wchar_t VAR8[100];
 wmemset(VAR8, VAR9'', 100-1);
 VAR8[100-1] = VAR9'';
 VAR7 = wcslen(VAR8);
 /* POTENTIAL FLAW: using length of the dest where data
 * could be smaller than dest causing buffer overread */
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR8[VAR6] = VAR5[VAR6];
 }
 VAR8[100-1] = VAR9'';
 FUN2(VAR8);
 free(VAR5);
 }
}
}
#endif
