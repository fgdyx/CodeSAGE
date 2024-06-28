#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(char * VAR5)
{
 {
 char VAR6[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-strlen(dest)*/
 strncat(VAR6, VAR5, strlen(VAR5));
 VAR6[50-1] = '';
 FUN2(VAR5);
 free(VAR5);
 }
}
}
#endif
