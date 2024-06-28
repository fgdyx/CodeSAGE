#ifndef VAR1
static void FUN1()
{
 if(VAR2!=5)
 {
 FUN2("");
 }
 else
 {
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 if (fread((char *)VAR4, sizeof(char), (VAR5)(100-1), stdin) != 100-1)
 {
 FUN2("");
 }
 }
 }
}
static void FUN3()
{
 if(VAR2==5)
 {
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 if (fread((char *)VAR4, sizeof(char), (VAR5)(100-1), stdin) != 100-1)
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
