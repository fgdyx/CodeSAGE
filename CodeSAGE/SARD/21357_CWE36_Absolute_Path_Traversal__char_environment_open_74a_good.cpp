#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3);
static void FUN2()
{
 char * VAR4;
 VAR2<int, char *> VAR3;
 char VAR5[VAR6] = "";
 VAR4 = VAR5;
#ifdef VAR7
 strcat(VAR4, "");
#else
 strcat(VAR4, "");
#endif
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
