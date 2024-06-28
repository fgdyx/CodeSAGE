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
 wcscpy(VAR6, VAR5);
 FUN2(VAR5);
 delete [] VAR5;
 }
}
}
#endif
