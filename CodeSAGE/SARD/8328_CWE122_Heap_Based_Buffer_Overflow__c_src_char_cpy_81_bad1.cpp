#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(char * VAR5) const
{
 {
 char VAR6[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 strcpy(VAR6, VAR5);
 FUN2(VAR5);
 free(VAR5);
 }
}
}
#endif
