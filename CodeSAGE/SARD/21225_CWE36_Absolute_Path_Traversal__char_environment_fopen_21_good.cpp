#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static char * FUN1(char * VAR4)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
#ifdef VAR5
 strcat(VAR4, "");
#else
 strcat(VAR4, "");
#endif
 }
 return VAR4;
}
static void FUN3()
{
 char * VAR4;
 char VAR6[VAR7] = "";
 VAR4 = VAR6;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 VAR8 *VAR9 = NULL;
 VAR9 = FUN4(VAR4, "");
 if (VAR9 != NULL)
 {
 fclose(VAR9);
 }
 }
 ;
}
static char * FUN5(char * VAR4)
{
 if(VAR3)
 {
#ifdef VAR5
 strcat(VAR4, "");
#else
 strcat(VAR4, "");
#endif
 }
 return VAR4;
}
static void FUN6()
{
 char * VAR4;
 char VAR6[VAR7] = "";
 VAR4 = VAR6;
 VAR3 = 1;
 VAR4 = FUN5(VAR4);
 {
 VAR8 *VAR9 = NULL;
 VAR9 = FUN4(VAR4, "");
 if (VAR9 != NULL)
 {
 fclose(VAR9);
 }
 }
 ;
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
