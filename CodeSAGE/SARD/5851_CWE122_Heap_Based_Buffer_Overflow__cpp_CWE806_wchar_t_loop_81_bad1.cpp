#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(wchar_t * VAR5) const
{
 {
 wchar_t VAR6[50] = VAR7"";
 size_t VAR8, VAR9;
 VAR9 = wcslen(VAR5);
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 for (VAR8 = 0; VAR8 < VAR9; VAR8++)
 {
 VAR6[VAR8] = VAR5[VAR8];
 }
 VAR6[50-1] = VAR7'';
 FUN2(VAR5);
 delete [] VAR5;
 }
}
}
#endif
