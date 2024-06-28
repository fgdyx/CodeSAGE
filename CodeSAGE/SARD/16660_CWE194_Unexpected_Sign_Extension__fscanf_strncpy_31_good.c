#ifndef VAR1
static void FUN1()
{
 short VAR2;
 VAR2 = 0;
 VAR2 = 100-1;
 {
 short VAR3 = VAR2;
 short VAR2 = VAR3;
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
}
void FUN3()
{
 FUN1();
}
#endif
