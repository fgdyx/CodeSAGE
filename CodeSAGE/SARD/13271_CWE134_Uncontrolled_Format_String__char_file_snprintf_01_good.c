#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 strcpy(VAR2, "");
 {
 char VAR4[100] = "";
 FUN2(VAR4, 100-1, VAR2);
 FUN3(VAR4);
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 {
 size_t VAR5 = strlen(VAR2);
 VAR6 * VAR7;
 if (100-VAR5 > 1)
 {
 VAR7 = fopen(VAR8, "");
 if (VAR7 != NULL)
 {
 if (fgets(VAR2+VAR5, (int)(100-VAR5), VAR7) == NULL)
 {
 FUN3("");
 VAR2[VAR5] = '';
 }
 fclose(VAR7);
 }
 }
 }
 {
 char VAR4[100] = "";
 FUN2(VAR4, 100-1, "", VAR2);
 FUN3(VAR4);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
