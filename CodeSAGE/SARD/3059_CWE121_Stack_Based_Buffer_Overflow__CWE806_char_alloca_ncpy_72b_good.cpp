#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3[2];
 {
 char VAR5[50] = "";
 strncpy(VAR5, VAR4, strlen(VAR4));
 VAR5[50-1] = '';
 FUN2(VAR4);
 }
}
#endif
