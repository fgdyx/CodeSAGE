#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(size_t VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 char * VAR6;
 if (VAR5 > strlen(VAR7) && VAR5 < 100)
 {
 VAR6 = (char *)malloc(VAR5*sizeof(char));
 strcpy(VAR6, VAR7);
 FUN2(VAR6);
 free(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN3()
{
 size_t VAR5;
 VAR5 = 0;
 fscanf(stdin, "", &VAR5);
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN4(size_t VAR5)
{
 if(VAR3)
 {
 {
 char * VAR6;
 if (VAR5 > strlen(VAR7) && VAR5 < 100)
 {
 VAR6 = (char *)malloc(VAR5*sizeof(char));
 strcpy(VAR6, VAR7);
 FUN2(VAR6);
 free(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN5()
{
 size_t VAR5;
 VAR5 = 0;
 fscanf(stdin, "", &VAR5);
 VAR3 = 1;
 FUN4(VAR5);
}
static void FUN6(size_t VAR5)
{
 if(VAR4)
 {
 {
 char * VAR6;
 if (VAR5 > strlen(VAR7))
 {
 VAR6 = (char *)malloc(VAR5*sizeof(char));
 strcpy(VAR6, VAR7);
 FUN2(VAR6);
 free(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN7()
{
 size_t VAR5;
 VAR5 = 0;
 VAR5 = 20;
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
