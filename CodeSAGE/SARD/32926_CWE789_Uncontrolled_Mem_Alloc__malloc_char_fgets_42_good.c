#ifndef VAR1
static VAR2 FUN1(size_t VAR3)
{
 VAR3 = 20;
 return VAR3;
}
static void FUN2()
{
 size_t VAR3;
 VAR3 = 0;
 VAR3 = FUN1(VAR3);
 {
 char * VAR4;
 if (VAR3 > strlen(VAR5))
 {
 VAR4 = (char *)malloc(VAR3*sizeof(char));
 strcpy(VAR4, VAR5);
 FUN3(VAR4);
 free(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
}
static VAR2 FUN4(size_t VAR3)
{
 {
 char VAR6[VAR7] = "";
 if (fgets(VAR6, VAR7, stdin) != NULL)
 {
 VAR3 = FUN5(VAR6, NULL, 0);
 }
 else
 {
 FUN3("");
 }
 }
 return VAR3;
}
static void FUN6()
{
 size_t VAR3;
 VAR3 = 0;
 VAR3 = FUN4(VAR3);
 {
 char * VAR4;
 if (VAR3 > strlen(VAR5) && VAR3 < 100)
 {
 VAR4 = (char *)malloc(VAR3*sizeof(char));
 strcpy(VAR4, VAR5);
 FUN3(VAR4);
 free(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN7()
{
 FUN6();
 FUN2();
}
#endif
