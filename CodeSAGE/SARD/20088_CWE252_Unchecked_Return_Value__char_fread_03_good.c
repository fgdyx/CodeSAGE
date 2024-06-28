#ifndef VAR1
static void FUN1()
{
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 if (fread((char *)VAR3, sizeof(char), (VAR4)(100-1), stdin) != 100-1)
 {
 FUN2("");
 }
 }
 }
}
static void FUN3()
{
 if(5==5)
 {
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 if (fread((char *)VAR3, sizeof(char), (VAR4)(100-1), stdin) != 100-1)
 {
 FUN2("");
 }
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
