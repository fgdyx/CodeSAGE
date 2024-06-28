#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 fscanf(stdin, "", &VAR2);
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 {
 char * VAR3;
 if (VAR2 > strlen(VAR4) && VAR2 < 100)
 {
 VAR3 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR3, VAR4);
 FUN4(VAR3);
 free(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
static void FUN5()
{
 size_t VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 fscanf(stdin, "", &VAR2);
 }
 if(FUN2())
 {
 {
 char * VAR3;
 if (VAR2 > strlen(VAR4) && VAR2 < 100)
 {
 VAR3 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR3, VAR4);
 FUN4(VAR3);
 free(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
static void FUN6()
{
 size_t VAR2;
 VAR2 = 0;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = 20;
 }
 if(FUN2())
 {
 {
 char * VAR3;
 if (VAR2 > strlen(VAR4))
 {
 VAR3 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR3, VAR4);
 FUN4(VAR3);
 free(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
static void FUN7()
{
 size_t VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 VAR2 = 20;
 }
 if(FUN2())
 {
 {
 char * VAR3;
 if (VAR2 > strlen(VAR4))
 {
 VAR3 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR3, VAR4);
 FUN4(VAR3);
 free(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
void FUN8()
{
 FUN1();
 FUN5();
 FUN6();
 FUN7();
}
#endif
