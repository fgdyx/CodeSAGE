#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 {
 char * VAR2 = *VAR3;
 strcpy(VAR2, "");
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 char VAR6[100] = "";
 FUN2(VAR6, 100-1, VAR2);
 FUN3(VAR6);
 }
 }
}
static void FUN4()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 {
 char * VAR2 = *VAR3;
 {
 size_t VAR7 = strlen(VAR2);
 if (100-VAR7 > 1)
 {
 if (fgets(VAR2+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = strlen(VAR2);
 if (VAR7 > 0 && VAR2[VAR7-1] == '')
 {
 VAR2[VAR7-1] = '';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR7] = '';
 }
 }
 }
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 char VAR6[100] = "";
 FUN2(VAR6, 100-1, "", VAR2);
 FUN3(VAR6);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
