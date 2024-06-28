#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(wchar_t * VAR5)
{
 VAR6 = VAR5;
 wmemset(VAR6, VAR7'', 50-1);
 VAR6[50-1] = VAR7'';
}
VAR4::~FUN1()
{
 {
 wchar_t VAR8[50] = VAR7"";
 size_t VAR9, VAR10;
 VAR10 = wcslen(VAR6);
 for (VAR9 = 0; VAR9 < VAR10; VAR9++)
 {
 VAR8[VAR9] = VAR6[VAR9];
 }
 VAR8[50-1] = VAR7'';
 FUN2(VAR6);
 free(VAR6);
 }
}
}
#endif
