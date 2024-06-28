#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 strcpy(VAR2, "");
 {
 char * VAR2 = VAR3;
 {
 char VAR5[100] = "";
 FUN2(VAR5, 100-1, VAR2);
 FUN3(VAR5);
 }
 }
}
static void FUN4()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 {
 size_t VAR6 = strlen(VAR2);
 if (100-VAR6 > 1)
 {
 if (fgets(VAR2+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = strlen(VAR2);
 if (VAR6 > 0 && VAR2[VAR6-1] == '')
 {
 VAR2[VAR6-1] = '';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR6] = '';
 }
 }
 }
 {
 char * VAR2 = VAR3;
 {
 char VAR5[100] = "";
 FUN2(VAR5, 100-1, "", VAR2);
 FUN3(VAR5);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
