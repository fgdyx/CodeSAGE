#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(wchar_t * VAR5) const
{
 {
 wchar_t VAR6[50] = VAR7"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memcpy(VAR6, VAR5, wcslen(VAR5)*sizeof(wchar_t));
 VAR6[50-1] = VAR7'';
 FUN2(VAR5);
 free(VAR5);
 }
}
}
#endif
