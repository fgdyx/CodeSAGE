#ifndef VAR1
static void FUN1()
{
 unsigned int VAR2;
 VAR2 = 0;
 while(1)
 {
 fscanf (stdin, "", &VAR2);
 break;
 }
 while(1)
 {
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR3/2))
 {
 unsigned int VAR4 = VAR2 * 2;
 FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 }
}
static void FUN4()
{
 unsigned int VAR2;
 VAR2 = 0;
 while(1)
 {
 VAR2 = 2;
 break;
 }
 while(1)
 {
 if(VAR2 > 0)
 {
 unsigned int VAR4 = VAR2 * 2;
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
