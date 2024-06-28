#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR3==5)
 {
 VAR2 = rand();
 }
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 {
 char * VAR4;
 if (VAR2 > strlen(VAR5) && VAR2 < 100)
 {
 VAR4 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR4, VAR5);
 FUN2(VAR4);
 free(VAR4);
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
 if(VAR3==5)
 {
 VAR2 = rand();
 }
 if(VAR3==5)
 {
 {
 char * VAR4;
 if (VAR2 > strlen(VAR5) && VAR2 < 100)
 {
 VAR4 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR4, VAR5);
 FUN2(VAR4);
 free(VAR4);
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
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 20;
 }
 if(VAR3==5)
 {
 {
 char * VAR4;
 if (VAR2 > strlen(VAR5))
 {
 VAR4 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR4, VAR5);
 FUN2(VAR4);
 free(VAR4);
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
 if(VAR3==5)
 {
 VAR2 = 20;
 }
 if(VAR3==5)
 {
 {
 char * VAR4;
 if (VAR2 > strlen(VAR5))
 {
 VAR4 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR4, VAR5);
 FUN2(VAR4);
 free(VAR4);
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
