#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3);
static void FUN2()
{
 char * VAR4;
 VAR2<int, char *> VAR3;
 char * VAR5 = (char *)FUN3(sizeof(VAR6));
 char * VAR7 = (char *)FUN3(sizeof(VAR8));
 VAR4 = VAR7;
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN4(VAR2<int, char *> VAR3);
static void FUN5()
{
 char * VAR4;
 VAR2<int, char *> VAR3;
 char * VAR5 = (char *)FUN3(sizeof(VAR6));
 char * VAR7 = (char *)FUN3(sizeof(VAR8));
 VAR4 = VAR5;
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN4(VAR3);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
