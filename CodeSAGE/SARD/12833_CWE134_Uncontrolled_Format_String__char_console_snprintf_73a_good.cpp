#ifndef VAR1
void FUN1(VAR2<char *> VAR3);
static void FUN2()
{
 char * VAR4;
 VAR2<char *> VAR3;
 char VAR5[100] = "";
 VAR4 = VAR5;
 strcpy(VAR4, "");
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
 char VAR5[100] = "";
 VAR4 = VAR5;
 {
 size_t VAR6 = strlen(VAR4);
 if (100-VAR6 > 1)
 {
 if (fgets(VAR4+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = strlen(VAR4);
 if (VAR6 > 0 && VAR4[VAR6-1] == '')
 {
 VAR4[VAR6-1] = '';
 }
 }
 else
 {
 FUN6("");
 VAR4[VAR6] = '';
 }
 }
 }
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN4(VAR3);
}
void FUN7()
{
 FUN2();
 FUN5();
}
#endif
