#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
char * FUN1(char * VAR4);
static void FUN2()
{
 char * VAR4;
 char * VAR5 = (char *)FUN3(100*sizeof(char));
 VAR4 = VAR5;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 char VAR6[50] = "";
 size_t VAR7, VAR8;
 VAR8 = strlen(VAR4);
 for (VAR7 = 0; VAR7 < VAR8; VAR7++)
 {
 VAR6[VAR7] = VAR4[VAR7];
 }
 VAR6[50-1] = '';
 FUN4(VAR4);
 }
}
char * FUN5(char * VAR4);
static void FUN6()
{
 char * VAR4;
 char * VAR5 = (char *)FUN3(100*sizeof(char));
 VAR4 = VAR5;
 VAR3 = 1;
 VAR4 = FUN5(VAR4);
 {
 char VAR6[50] = "";
 size_t VAR7, VAR8;
 VAR8 = strlen(VAR4);
 for (VAR7 = 0; VAR7 < VAR8; VAR7++)
 {
 VAR6[VAR7] = VAR4[VAR7];
 }
 VAR6[50-1] = '';
 FUN4(VAR4);
 }
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
