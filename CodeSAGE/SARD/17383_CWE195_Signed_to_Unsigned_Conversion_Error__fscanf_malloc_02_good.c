#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 100-1;
 }
 if (VAR2 < 100)
 {
 char * VAR3 = (char *)malloc(VAR2);
 memset(VAR3, '', VAR2-1);
 VAR3[VAR2-1] = '';
 FUN2(VAR3);
 free(VAR3);
 }
}
static void FUN3()
{
 int VAR2;
 VAR2 = -1;
 if(1)
 {
 VAR2 = 100-1;
 }
 if (VAR2 < 100)
 {
 char * VAR3 = (char *)malloc(VAR2);
 memset(VAR3, '', VAR2-1);
 VAR3[VAR2-1] = '';
 FUN2(VAR3);
 free(VAR3);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
