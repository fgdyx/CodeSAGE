#ifndef VAR1
static void FUN1()
{
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 if (fread((char *)VAR3, sizeof(char), (VAR4)(100-1), stdin) != 100-1)
 {
 FUN3("");
 }
 }
 }
}
static void FUN4()
{
 if(FUN5())
 {
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 if (fread((char *)VAR3, sizeof(char), (VAR4)(100-1), stdin) != 100-1)
 {
 FUN3("");
 }
 }
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
