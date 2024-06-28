#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 FUN3("");
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
 FUN3(VAR3);
 free(VAR3);
 }
}
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 if(FUN5())
 {
 VAR2 = 100-1;
 }
 if (VAR2 < 100)
 {
 char * VAR3 = (char *)malloc(VAR2);
 memset(VAR3, '', VAR2-1);
 VAR3[VAR2-1] = '';
 FUN3(VAR3);
 free(VAR3);
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
