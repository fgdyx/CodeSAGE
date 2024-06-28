#ifndef VAR1
void FUN1(unsigned int VAR2[])
{
 unsigned int VAR3 = VAR2[2];
 {
 unsigned int VAR4 = VAR3 - 1;
 FUN2(VAR4);
 }
}
void FUN3(unsigned int VAR2[])
{
 unsigned int VAR3 = VAR2[2];
 if (VAR3 > 0)
 {
 unsigned int VAR4 = VAR3 - 1;
 FUN2(VAR4);
 }
 else
 {
 FUN4("");
 }
}
#endif
