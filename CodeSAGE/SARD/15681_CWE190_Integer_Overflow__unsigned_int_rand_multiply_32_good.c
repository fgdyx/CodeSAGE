#ifndef VAR1
static void FUN1()
{
 unsigned int VAR2;
 unsigned int *VAR3 = &VAR2;
 unsigned int *VAR4 = &VAR2;
 VAR2 = 0;
 {
 unsigned int VAR2 = *VAR3;
 VAR2 = 2;
 *VAR3 = VAR2;
 }
 {
 unsigned int VAR2 = *VAR4;
 if(VAR2 > 0)
 {
 unsigned int VAR5 = VAR2 * 2;
 FUN2(VAR5);
 }
 }
}
static void FUN3()
{
 unsigned int VAR2;
 unsigned int *VAR3 = &VAR2;
 unsigned int *VAR4 = &VAR2;
 VAR2 = 0;
 {
 unsigned int VAR2 = *VAR3;
 VAR2 = (unsigned int)FUN4();
 *VAR3 = VAR2;
 }
 {
 unsigned int VAR2 = *VAR4;
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR6/2))
 {
 unsigned int VAR5 = VAR2 * 2;
 FUN2(VAR5);
 }
 else
 {
 FUN5("");
 }
 }
 }
}
void FUN6()
{
 FUN1();
 FUN3();
}
#endif
