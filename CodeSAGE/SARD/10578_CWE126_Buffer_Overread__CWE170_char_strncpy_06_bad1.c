#ifndef VAR1
void FUN1()
{
 if(VAR2==5)
 {
 {
 char VAR3[150], VAR4[100];
 memset(VAR3, '', 149);
 VAR3[149] = '';
 strncpy(VAR4, VAR3, 99);
 /* FLAW: do not explicitly null terminate dest after the use of strncpy() */
 FUN2(VAR4);
 }
 }
}
#endif
