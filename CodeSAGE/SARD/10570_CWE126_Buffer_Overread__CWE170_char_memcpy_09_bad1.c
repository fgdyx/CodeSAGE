#ifndef VAR1
void FUN1()
{
 if(VAR2)
 {
 {
 char VAR3[150], VAR4[100];
 memset(VAR3, '', 149);
 VAR3[149] = '';
 memcpy(VAR4, VAR3, 99*sizeof(char));
 /* FLAW: do not explicitly null terminate dest after the use of memcpy */
 FUN2(VAR4);
 }
 }
}
#endif
