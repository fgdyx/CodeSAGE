#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(char * VAR5)
{
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 memmove(VAR6, VAR5, 100*sizeof(char));
 VAR6[100-1] = '';
 FUN2(VAR6);
 }
}
}
#endif
