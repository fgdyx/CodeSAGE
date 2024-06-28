#ifndef VAR1
void FUN1(char * VAR2[]);
static void FUN2()
{
 char * VAR3;
 char * VAR2[5];
 char VAR4[100] = "";
 VAR3 = VAR4;
 strcpy(VAR3, "");
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN3(char * VAR2[]);
static void FUN4()
{
 char * VAR3;
 char * VAR2[5];
 char VAR4[100] = "";
 VAR3 = VAR4;
 {
 size_t VAR5 = strlen(VAR3);
 VAR6 * VAR7;
 if (100-VAR5 > 1)
 {
 VAR7 = fopen(VAR8, "");
 if (VAR7 != NULL)
 {
 if (fgets(VAR3+VAR5, (int)(100-VAR5), VAR7) == NULL)
 {
 FUN5("");
 VAR3[VAR5] = '';
 }
 fclose(VAR7);
 }
 }
 }
 VAR2[2] = VAR3;
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN4();
}
#endif
