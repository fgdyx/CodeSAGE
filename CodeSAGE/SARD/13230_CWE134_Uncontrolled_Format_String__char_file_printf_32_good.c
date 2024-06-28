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
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 {
 char * VAR2 = *VAR3;
 {
 size_t VAR6 = strlen(VAR2);
 VAR7 * VAR8;
 if (100-VAR6 > 1)
 {
 VAR8 = fopen(VAR9, "");
 if (VAR8 != NULL)
 {
 if (fgets(VAR2+VAR6, (int)(100-VAR6), VAR8) == NULL)
 {
 FUN4("");
 VAR2[VAR6] = '';
 }
 fclose(VAR8);
 }
 }
 }
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 FUN2("", VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
