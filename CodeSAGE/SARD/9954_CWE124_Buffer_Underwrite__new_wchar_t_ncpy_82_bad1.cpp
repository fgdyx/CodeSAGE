#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(wchar_t * VAR5)
{
 {
 wchar_t VAR6[100];
 wmemset(VAR6, VAR7'', 100-1);
 VAR6[100-1] = VAR7'';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 wcsncpy(VAR5, VAR6, 100-1);
 VAR5[100-1] = VAR7'';
 FUN2(VAR5);
 }
}
}
#endif
