#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3);
static void FUN2()
{
 char * VAR4;
 VAR2<int, char *> VAR3;
 VAR4 = NULL;
 VAR4 = (char *)FUN3(100*sizeof(char));
 strcpy(VAR4, "");
 FUN4(VAR4);
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN5(VAR2<int, char *> VAR3);
static void FUN6()
{
 char * VAR4;
 VAR2<int, char *> VAR3;
 VAR4 = NULL;
 VAR4 = (char *)malloc(100*sizeof(char));
 strcpy(VAR4, "");
 FUN4(VAR4);
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN5(VAR3);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
