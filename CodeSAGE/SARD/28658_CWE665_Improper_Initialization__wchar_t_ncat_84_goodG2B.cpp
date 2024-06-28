#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(wchar_t * VAR5)
{
 VAR6 = VAR5;
 VAR6[0] = VAR7'';
}
VAR4::~FUN1()
{
 {
 size_t VAR8;
 wchar_t VAR9[100];
 wmemset(VAR9, VAR7'', 100-1);
 VAR9[100-1] = VAR7'';
 VAR8 = wcslen(VAR9);
 wcsncat(VAR6, VAR9, VAR8);
 FUN2(VAR6);
 }
}
}
#endif
