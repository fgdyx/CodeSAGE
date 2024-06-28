#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 char * VAR4;
 char VAR5[100] = "";
 VAR4 = VAR5;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 size_t VAR6 = strlen(VAR4);
 VAR7 * VAR8;
 if (100-VAR6 > 1)
 {
 VAR8 = fopen(VAR9, "");
 if (VAR8 != NULL)
 {
 if (fgets(VAR4+VAR6, (int)(100-VAR6), VAR8) == NULL)
 {
 FUN2("");
 VAR4[VAR6] = '';
 }
 fclose(VAR8);
 }
 }
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 FUN3("", VAR4);
 }
}
static void FUN4()
{
 int VAR10,VAR11;
 char * VAR4;
 char VAR5[100] = "";
 VAR4 = VAR5;
 for(VAR10 = 0; VAR10 < 1; VAR10++)
 {
 strcpy(VAR4, "");
 }
 for(VAR11 = 0; VAR11 < 1; VAR11++)
 {
 FUN3(VAR4);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
