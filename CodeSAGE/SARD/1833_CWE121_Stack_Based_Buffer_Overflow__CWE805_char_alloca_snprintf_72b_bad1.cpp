#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3[2];
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 FUN2(VAR4, 100, "", VAR5);
 FUN3(VAR4);
 }
}
#endif
