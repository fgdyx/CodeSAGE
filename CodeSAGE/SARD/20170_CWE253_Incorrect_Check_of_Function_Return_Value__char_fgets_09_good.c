#ifndef VAR1
static void FUN1()
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 FUN2("");
 if (fgets(VAR4, 100, stdin) == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 FUN2(VAR4);
 }
 }
}
static void FUN4()
{
 if(VAR5)
 {
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 FUN2("");
 if (fgets(VAR4, 100, stdin) == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 FUN2(VAR4);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
