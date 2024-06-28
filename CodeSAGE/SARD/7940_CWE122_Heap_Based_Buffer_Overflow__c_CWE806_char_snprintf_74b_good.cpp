#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3)
{
 char * VAR4 = VAR3[2];
 {
 char VAR5[50] = "";
 FUN2(VAR5, strlen(VAR4), "", VAR4);
 FUN3(VAR4);
 free(VAR4);
 }
}
#endif
