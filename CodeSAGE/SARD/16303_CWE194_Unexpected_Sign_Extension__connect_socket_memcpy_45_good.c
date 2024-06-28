#ifndef VAR1
static void FUN1()
{
 short VAR2 = VAR3;
 {
 char VAR4[100];
 char VAR5[100] = "";
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 if (VAR2 < 100)
 {
 memcpy(VAR5, VAR4, VAR2);
 VAR5[VAR2] = '';
 }
 FUN2(VAR5);
 }
}
static void FUN3()
{
 short VAR2;
 VAR2 = 0;
 VAR2 = 100-1;
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
