#ifndef VAR1
static void FUN1()
{
 short VAR2;
 VAR2 = 0;
 if(0)
 {
 FUN2("");
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
 FUN2(VAR4);
 }
}
static void FUN3()
{
 short VAR2;
 VAR2 = 0;
 if(1)
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
 FUN2(VAR4);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
