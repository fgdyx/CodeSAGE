#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 if(0)
 {
 FUN2("");
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
 ofstream VAR6;
 VAR6.open((char *)VAR2);
 VAR6.close();
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 if(1)
 {
#ifdef VAR5
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 }
 {
 ofstream VAR6;
 VAR6.open((char *)VAR2);
 VAR6.close();
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
