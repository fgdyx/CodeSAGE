#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(wchar_t * VAR5)
{
 {
 size_t VAR6;
 wchar_t VAR7[100];
 wmemset(VAR7, VAR8'', 100-1);
 VAR7[100-1] = VAR8'';
 VAR6 = wcslen(VAR7);
 wcsncat(VAR5, VAR7, VAR6);
 FUN2(VAR5);
 }
}
}
#endif
