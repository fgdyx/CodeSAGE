#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(wchar_t * VAR5)
{
 {
 wchar_t VAR6[10+1] = VAR7;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 wcsncpy(VAR5, VAR6, wcslen(VAR6) + 1);
 FUN2(VAR5);
 free(VAR5);
 }
}
}
#endif
