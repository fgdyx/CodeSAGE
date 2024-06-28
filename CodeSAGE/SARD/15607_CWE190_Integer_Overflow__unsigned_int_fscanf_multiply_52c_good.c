#ifndef VAR1
void FUN1(unsigned int VAR2)
{
 if(VAR2 > 0)
 {
 unsigned int VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
}
void FUN3(unsigned int VAR2)
{
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR4/2))
 {
 unsigned int VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
