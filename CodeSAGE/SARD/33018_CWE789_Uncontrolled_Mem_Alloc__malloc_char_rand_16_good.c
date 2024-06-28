#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 while(1)
 {
 VAR2 = rand();
 break;
 }
 while(1)
 {
 {
 char * VAR3;
 if (VAR2 > strlen(VAR4) && VAR2 < 100)
 {
 VAR3 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR3, VAR4);
 FUN2(VAR3);
 free(VAR3);
 }
 else
 {
 FUN2("");
 }
 }
 break;
 }
}
static void FUN3()
{
 size_t VAR2;
 VAR2 = 0;
 while(1)
 {
 VAR2 = 20;
 break;
 }
 while(1)
 {
 {
 char * VAR3;
 if (VAR2 > strlen(VAR4))
 {
 VAR3 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR3, VAR4);
 FUN2(VAR3);
 free(VAR3);
 }
 else
 {
 FUN2("");
 }
 }
 break;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
