#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 strncpy(VAR2, VAR4, 100-1);
 VAR2[100-1] = '';
 FUN2(VAR2);
 }
}
#endif
