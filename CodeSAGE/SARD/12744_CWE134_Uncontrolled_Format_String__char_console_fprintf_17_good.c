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
 if (100-VAR6 > 1)
 {
 if (fgets(VAR4+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = strlen(VAR4);
 if (VAR6 > 0 && VAR4[VAR6-1] == '')
 {
 VAR4[VAR6-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR4[VAR6] = '';
 }
 }
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 fprintf(VAR7, "", VAR4);
 }
}
static void FUN3()
{
 int VAR8,VAR9;
 char * VAR4;
 char VAR5[100] = "";
 VAR4 = VAR5;
 for(VAR8 = 0; VAR8 < 1; VAR8++)
 {
 strcpy(VAR4, "");
 }
 for(VAR9 = 0; VAR9 < 1; VAR9++)
 {
 fprintf(VAR7, VAR4);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
