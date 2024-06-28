#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 size_t VAR4;
 VAR4 = 0;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 char VAR5[VAR6] = "";
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR4 = FUN2(VAR5, NULL, 0);
 }
 else
 {
 FUN3("");
 }
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 {
 char * VAR7;
 if (VAR4 > strlen(VAR8) && VAR4 < 100)
 {
 VAR7 = (char *)malloc(VAR4*sizeof(char));
 strcpy(VAR7, VAR8);
 FUN3(VAR7);
 free(VAR7);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN4()
{
 int VAR9,VAR10;
 size_t VAR4;
 VAR4 = 0;
 for(VAR9 = 0; VAR9 < 1; VAR9++)
 {
 VAR4 = 20;
 }
 for(VAR10 = 0; VAR10 < 1; VAR10++)
 {
 {
 char * VAR7;
 if (VAR4 > strlen(VAR8))
 {
 VAR7 = (char *)malloc(VAR4*sizeof(char));
 strcpy(VAR7, VAR8);
 FUN3(VAR7);
 free(VAR7);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
