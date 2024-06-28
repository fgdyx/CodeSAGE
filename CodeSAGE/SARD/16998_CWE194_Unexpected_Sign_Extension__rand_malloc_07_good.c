#ifndef VAR1
static void FUN1()
{
 short VAR2;
 VAR2 = 0;
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 100-1;
 }
 if (VAR2 < 100)
 {
 char * VAR4 = (char *)malloc(VAR2);
 memset(VAR4, '', VAR2-1);
 VAR4[VAR2-1] = '';
 FUN2(VAR4);
 free(VAR4);
 }
}
static void FUN3()
{
 short VAR2;
 VAR2 = 0;
 if(VAR3==5)
 {
 VAR2 = 100-1;
 }
 if (VAR2 < 100)
 {
 char * VAR4 = (char *)malloc(VAR2);
 memset(VAR4, '', VAR2-1);
 VAR4[VAR2-1] = '';
 FUN2(VAR4);
 free(VAR4);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
