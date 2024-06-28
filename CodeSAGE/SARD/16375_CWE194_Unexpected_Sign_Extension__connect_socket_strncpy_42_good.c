#ifndef VAR1
static short FUN1(short VAR2)
{
 VAR2 = 100-1;
 return VAR2;
}
static void FUN2()
{
 short VAR2;
 VAR2 = 0;
 VAR2 = FUN1(VAR2);
 {
 char VAR3[100];
 char VAR4[100] = "";
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if (VAR2 < 100)
 {
 strncpy(VAR4, VAR3, VAR2);
 VAR4[VAR2] = '';
 }
 FUN3(VAR4);
 }
}
void FUN4()
{
 FUN2();
}
#endif
