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
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 memcpy(VAR5, VAR6, 100*sizeof(char));
 VAR5[100-1] = '';
 FUN2(VAR5);
 }
}
}
#endif
