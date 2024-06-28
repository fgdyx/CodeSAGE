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
 strcpy(VAR4, VAR5);
 }
 return VAR4;
}
static void FUN3()
{
 char * VAR4;
 char VAR6[100] = "";
 VAR4 = VAR6;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 if (FUN4(VAR4) <= 0)
 {
 FUN2("");
 FUN5(1);
 }
}
static char * FUN6(char * VAR4)
{
 if(VAR3)
 {
 strcpy(VAR4, VAR5);
 }
 return VAR4;
}
static void FUN7()
{
 char * VAR4;
 char VAR6[100] = "";
 VAR4 = VAR6;
 VAR3 = 1;
 VAR4 = FUN6(VAR4);
 if (FUN4(VAR4) <= 0)
 {
 FUN2("");
 FUN5(1);
 }
}
void FUN8()
{
 FUN3();
 FUN7();
}
#endif
