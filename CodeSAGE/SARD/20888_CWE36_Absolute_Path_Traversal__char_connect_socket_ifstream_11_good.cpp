#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
#ifdef VAR5
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 }
 {
 ifstream VAR6;
 VAR6.open((char *)VAR2);
 VAR6.close();
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 if(FUN5())
 {
#ifdef VAR5
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 }
 {
 ifstream VAR6;
 VAR6.open((char *)VAR2);
 VAR6.close();
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
