#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 strcpy(VAR2, "");
 VAR4* VAR5 = new VAR6;
 VAR5->FUN2(VAR2);
 delete VAR5;
}
static void FUN3()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 {
 size_t VAR7 = strlen(VAR2);
 VAR8 * VAR9;
 if (100-VAR7 > 1)
 {
 VAR9 = fopen(VAR10, "");
 if (VAR9 != NULL)
 {
 if (fgets(VAR2+VAR7, (int)(100-VAR7), VAR9) == NULL)
 {
 FUN4("");
 VAR2[VAR7] = '';
 }
 fclose(VAR9);
 }
 }
 }
 VAR4* VAR5 = new VAR11;
 VAR5->FUN2(VAR2);
 delete VAR5;
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
