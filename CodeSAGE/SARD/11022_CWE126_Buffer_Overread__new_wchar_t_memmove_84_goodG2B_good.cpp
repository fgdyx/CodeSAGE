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
 wchar_t VAR8[100];
 wmemset(VAR8, VAR7'', 100-1);
 VAR8[100-1] = VAR7'';
 memmove(VAR8, VAR6, wcslen(VAR8)*sizeof(wchar_t));
 VAR8[100-1] = VAR7'';
 FUN2(VAR8);
 delete [] VAR6;
 }
}
}
#endif
