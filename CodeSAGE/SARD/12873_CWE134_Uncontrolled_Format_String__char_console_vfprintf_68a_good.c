#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 strcpy(VAR2, "");
 VAR4 = VAR2;
 FUN1();
}
static void FUN4()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 {
 size_t VAR5 = strlen(VAR2);
 if (100-VAR5 > 1)
 {
 if (fgets(VAR2+VAR5, (int)(100-VAR5), stdin) != NULL)
 {
 VAR5 = strlen(VAR2);
 if (VAR5 > 0 && VAR2[VAR5-1] == '')
 {
 VAR2[VAR5-1] = '';
 }
 }
 else
 {
 FUN5("");
 VAR2[VAR5] = '';
 }
 }
 }
 VAR6 = VAR2;
 FUN2();
}
void FUN6()
{
 FUN3();
 FUN4();
}
#endif
