#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(wchar_t * VAR5)
{
 VAR6 = VAR5;
 {
 wchar_t * VAR7 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR7, VAR8'', 100-1);
 VAR7[100-1] = VAR8'';
 VAR6 = VAR7;
 }
}
VAR4::~FUN1()
{
 {
 size_t VAR9;
 wchar_t VAR10[100];
 wmemset(VAR10, VAR8'', 100-1);
 VAR10[100-1] = VAR8'';
 for (VAR9 = 0; VAR9 < 100; VAR9++)
 {
 VAR6[VAR9] = VAR10[VAR9];
 }
 VAR6[100-1] = VAR8'';
 FUN2(VAR6);
 }
}
}
#endif
