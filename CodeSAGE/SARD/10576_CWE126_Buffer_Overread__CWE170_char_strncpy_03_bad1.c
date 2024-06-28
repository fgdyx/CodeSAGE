#ifndef VAR1
void FUN1()
{
 if(5==5)
 {
 {
 char VAR2[150], VAR3[100];
 memset(VAR2, '', 149);
 VAR2[149] = '';
 strncpy(VAR3, VAR2, 99);
 /* FLAW: do not explicitly null terminate dest after the use of strncpy() */
 FUN2(VAR3);
 }
 }
}
#endif
