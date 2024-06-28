#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(char * VAR5) const
{
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if the sizeof(data)-strlen(data) is less than the length of source */
 strncat(VAR5, VAR6, 100);
 FUN2(VAR5);
 }
}
}
#endif
