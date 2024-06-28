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
 free(VAR5);
 }
}
static void FUN3()
{
 char * VAR5;
 VAR5 = NULL;
 VAR5 = (char *)realloc(VAR5, 100*sizeof(char));
 strcpy(VAR5, "");
 FUN2(VAR5);
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN4(char * VAR5)
{
 if(VAR3)
 {
 free(VAR5);
 }
}
static void FUN5()
{
 char * VAR5;
 VAR5 = NULL;
 VAR5 = (char *)realloc(VAR5, 100*sizeof(char));
 strcpy(VAR5, "");
 FUN2(VAR5);
 VAR3 = 1;
 FUN4(VAR5);
}
static void FUN6(char * VAR5)
{
 if(VAR4)
 {
 ;
 }
}
static void FUN7()
{
 char * VAR5;
 VAR5 = NULL;
 VAR5 = (char *)FUN8(100*sizeof(char));
 strcpy(VAR5, "");
 FUN2(VAR5);
 VAR4 = 1;
 FUN6(VAR5);
}
void FUN9()
{
 FUN3();
 FUN5();
 FUN7();
}
#endif
