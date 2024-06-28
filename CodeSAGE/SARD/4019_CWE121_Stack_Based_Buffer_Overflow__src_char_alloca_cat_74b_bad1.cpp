#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3)
{
 char * VAR4 = VAR3[2];
 {
 char VAR5[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-strlen(dest)*/
 strcat(VAR5, VAR4);
 FUN2(VAR4);
 }
}
#endif
