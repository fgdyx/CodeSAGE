#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3[2];
 {
 char VAR5[100] = "";
 FUN2(VAR5, 100-1, VAR4);
 FUN3(VAR5);
 }
}
void FUN4(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3[2];
 {
 char VAR5[100] = "";
 FUN2(VAR5, 100-1, "", VAR4);
 FUN3(VAR5);
 }
}
#endif
