#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 char VAR5[100] = "";
 VAR2 = VAR5;
 strcpy(VAR2, "");
 FUN3(VAR2);
}
void FUN4(char * VAR2);
static void FUN5()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR6;
 char VAR5[100] = "";
 VAR2 = VAR5;
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
 FUN6("");
 VAR2[VAR7] = '';
 }
 fclose(VAR9);
 }
 }
 }
 FUN3(VAR2);
}
void FUN7()
{
 FUN2();
 FUN5();
}
#endif
