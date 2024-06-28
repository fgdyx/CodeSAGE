#ifndef VAR1
static void FUN1()
{
 short VAR2;
 VAR2 = 0;
 while(1)
 {
 fscanf (stdin, "", &VAR2);
 break;
 }
 while(1)
 {
 if (VAR2 > VAR3)
 {
 short VAR4 = VAR2 - 1;
 FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 break;
 }
}
static void FUN4()
{
 short VAR2;
 VAR2 = 0;
 while(1)
 {
 VAR2 = -2;
 break;
 }
 while(1)
 {
 {
 short VAR4 = VAR2 - 1;
 FUN2(VAR4);
 }
 break;
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
