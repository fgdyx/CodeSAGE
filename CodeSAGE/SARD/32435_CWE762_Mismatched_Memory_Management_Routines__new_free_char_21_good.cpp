#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(char * VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 delete VAR5;
 }
}
static void FUN3()
{
 char * VAR5;
 VAR5 = NULL;
 VAR5 = new char;
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN4(char * VAR5)
{
 if(VAR3)
 {
 delete VAR5;
 }
}
static void FUN5()
{
 char * VAR5;
 VAR5 = NULL;
 VAR5 = new char;
 VAR3 = 1;
 FUN4(VAR5);
}
static void FUN6(char * VAR5)
{
 if(VAR4)
 {
 free(VAR5);
 }
}
static void FUN7()
{
 char * VAR5;
 VAR5 = NULL;
 VAR5 = (char *)malloc(100*sizeof(char));
 VAR4 = 1;
 FUN6(VAR5);
}
void FUN8()
{
 FUN3();
 FUN5();
 FUN7();
}
#endif
