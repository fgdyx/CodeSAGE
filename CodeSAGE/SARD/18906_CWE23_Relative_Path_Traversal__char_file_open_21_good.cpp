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
 strcat(VAR4, "");
 }
 return VAR4;
}
static void FUN3()
{
 char * VAR4;
 char VAR5[VAR6] = VAR7;
 VAR4 = VAR5;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 int VAR8;
 VAR8 = FUN4(VAR4, VAR9|VAR10, VAR11|VAR12);
 if (VAR8 != -1)
 {
 FUN5(VAR8);
 }
 }
 ;
}
static char * FUN6(char * VAR4)
{
 if(VAR3)
 {
 strcat(VAR4, "");
 }
 return VAR4;
}
static void FUN7()
{
 char * VAR4;
 char VAR5[VAR6] = VAR7;
 VAR4 = VAR5;
 VAR3 = 1;
 VAR4 = FUN6(VAR4);
 {
 int VAR8;
 VAR8 = FUN4(VAR4, VAR9|VAR10, VAR11|VAR12);
 if (VAR8 != -1)
 {
 FUN5(VAR8);
 }
 }
 ;
}
void FUN8()
{
 FUN3();
 FUN7();
}
#endif
