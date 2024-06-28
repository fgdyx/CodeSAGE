#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(wchar_t * VAR5)
{
 VAR6 = VAR5;
 VAR6 = new wchar_t[100];
 wmemset(VAR6, VAR7'', 100-1);
 VAR6[100-1] = VAR7'';
}
VAR4::~FUN1()
{
 {
 size_t VAR8, VAR9;
 wchar_t VAR10[100];
 wmemset(VAR10, VAR7'', 100-1);
 VAR10[100-1] = VAR7'';
 VAR9 = wcslen(VAR10);
 for (VAR8 = 0; VAR8 < VAR9; VAR8++)
 {
 VAR10[VAR8] = VAR6[VAR8];
 }
 VAR10[100-1] = VAR7'';
 FUN2(VAR10);
 delete [] VAR6;
 }
}
}
#endif
