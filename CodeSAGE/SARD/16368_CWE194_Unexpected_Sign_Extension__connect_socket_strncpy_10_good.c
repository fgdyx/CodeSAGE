#ifndef VAR1
static void FUN1()
{
 short VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 100-1;
 }
 {
 char VAR4[100];
 char VAR5[100] = "";
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 if (VAR2 < 100)
 {
 strncpy(VAR5, VAR4, VAR2);
 VAR5[VAR2] = '';
 }
 FUN2(VAR5);
 }
}
static void FUN3()
{
 short VAR2;
 VAR2 = 0;
 if(VAR6)
 {
 VAR2 = 100-1;
 }
 {
 char VAR4[100];
 char VAR5[100] = "";
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 if (VAR2 < 100)
 {
 strncpy(VAR5, VAR4, VAR2);
 VAR5[VAR2] = '';
 }
 FUN2(VAR5);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
