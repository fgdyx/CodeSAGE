#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3)
{
 char * VAR4 = VAR3[2];
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than sizeof(data)-strlen(data) */
 strncat(VAR4, VAR5, 100);
 FUN2(VAR4);
 free(VAR4);
 }
}
#endif
