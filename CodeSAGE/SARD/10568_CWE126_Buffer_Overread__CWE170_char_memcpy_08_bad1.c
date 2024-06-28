#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 {
 char VAR2[150], VAR3[100];
 memset(VAR2, '', 149);
 VAR2[149] = '';
 memcpy(VAR3, VAR2, 99*sizeof(char));
 /* FLAW: do not explicitly null terminate dest after the use of memcpy */
 FUN3(VAR3);
 }
 }
}
#endif
