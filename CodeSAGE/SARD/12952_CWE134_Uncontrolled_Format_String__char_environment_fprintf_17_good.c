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
 char * VAR7 = FUN2(VAR8);
 if (VAR7 != NULL)
 {
 strncat(VAR4+VAR6, VAR7, 100-VAR6-1);
 }
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 fprintf(VAR9, "", VAR4);
 }
}
static void FUN3()
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
 fprintf(VAR9, VAR4);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
