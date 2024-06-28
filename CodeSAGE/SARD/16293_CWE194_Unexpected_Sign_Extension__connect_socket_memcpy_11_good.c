#ifndef VAR1
static void FUN1()
{
 short VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 VAR2 = 100-1;
 }
 {
 char VAR3[100];
 char VAR4[100] = "";
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if (VAR2 < 100)
 {
 memcpy(VAR4, VAR3, VAR2);
 VAR4[VAR2] = '';
 }
 FUN3(VAR4);
 }
}
static void FUN4()
{
 short VAR2;
 VAR2 = 0;
 if(FUN5())
 {
 VAR2 = 100-1;
 }
 {
 char VAR3[100];
 char VAR4[100] = "";
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if (VAR2 < 100)
 {
 memcpy(VAR4, VAR3, VAR2);
 VAR4[VAR2] = '';
 }
 FUN3(VAR4);
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
