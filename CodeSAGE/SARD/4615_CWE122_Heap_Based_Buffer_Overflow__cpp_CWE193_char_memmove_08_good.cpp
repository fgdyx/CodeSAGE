#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 VAR2 = new char[10+1];
 }
 {
 char VAR3[10+1] = VAR4;
 memmove(VAR2, VAR3, (strlen(VAR3) + 1) * sizeof(char));
 FUN3(VAR2);
 delete [] VAR2;
 }
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN5())
 {
 VAR2 = new char[10+1];
 }
 {
 char VAR3[10+1] = VAR4;
 memmove(VAR2, VAR3, (strlen(VAR3) + 1) * sizeof(char));
 FUN3(VAR2);
 delete [] VAR2;
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
