#ifndef VAR1
static void FUN1(short VAR2)
{
 {
 char VAR3[100];
 char VAR4[100] = "";
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if (VAR2 < 100)
 {
 memmove(VAR4, VAR3, VAR2);
 VAR4[VAR2] = '';
 }
 FUN2(VAR4);
 }
}
static void FUN3()
{
 short VAR2;
 void (*VAR5) (short) = VAR6;
 VAR2 = 0;
 VAR2 = 100-1;
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
