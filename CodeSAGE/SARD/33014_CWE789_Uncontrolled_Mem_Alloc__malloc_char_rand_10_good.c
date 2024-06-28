#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 VAR2 = rand();
 }
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 {
 char * VAR5;
 if (VAR2 > strlen(VAR6) && VAR2 < 100)
 {
 VAR5 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
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
 size_t VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 VAR2 = rand();
 }
 if(VAR3)
 {
 {
 char * VAR5;
 if (VAR2 > strlen(VAR6) && VAR2 < 100)
 {
 VAR5 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN4()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 20;
 }
 if(VAR3)
 {
 {
 char * VAR5;
 if (VAR2 > strlen(VAR6))
 {
 VAR5 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
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
 size_t VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 VAR2 = 20;
 }
 if(VAR3)
 {
 {
 char * VAR5;
 if (VAR2 > strlen(VAR6))
 {
 VAR5 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
void FUN6()
{
 FUN1();
 FUN3();
 FUN4();
 FUN5();
}
#endif
