#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(wchar_t * VAR5)
{
 VAR6 = VAR5;
 /* FLAW: Do not initialize data */
 ;
}
VAR4::~FUN1()
{
 {
 size_t VAR7;
 wchar_t VAR8[100];
 wmemset(VAR8, VAR9'', 100-1);
 VAR8[100-1] = VAR9'';
 VAR7 = wcslen(VAR8);
 /* POTENTIAL FLAW: If data is not initialized properly, wcsncat() may not function correctly */
 wcsncat(VAR6, VAR8, VAR7);
 FUN2(VAR6);
 }
}
}
#endif
