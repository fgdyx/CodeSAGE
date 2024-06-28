#ifndef VAR1
void FUN1(VAR2<char *> VAR3);
static void FUN2()
{
 char * VAR4;
 VAR2<char *> VAR3;
 VAR4 = NULL;
 VAR4 = new char;
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN1(VAR3);
}
void FUN4(VAR2<char *> VAR3);
static void FUN5()
{
 char * VAR4;
 VAR2<char *> VAR3;
 VAR4 = NULL;
 {
 char VAR5[] = "";
 VAR4 = strdup(VAR5);
 }
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN4(VAR3);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
