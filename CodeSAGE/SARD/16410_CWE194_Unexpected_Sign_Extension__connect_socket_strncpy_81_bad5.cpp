#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(short VAR5) const
{
 {
 char VAR6[100];
 char VAR7[100] = "";
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 if (VAR5 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 strncpy(VAR7, VAR6, VAR5);
 VAR7[VAR5] = '';
 }
 FUN2(VAR7);
 }
}
}
#endif
