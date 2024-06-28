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
 wchar_t VAR9[100];
 wmemset(VAR9, VAR8'', 100-1);
 VAR9[100-1] = VAR8'';
 wcsncpy(VAR9, VAR6, wcslen(VAR9));
 VAR9[100-1] = VAR8'';
 FUN2(VAR9);
 }
}
}
#endif
