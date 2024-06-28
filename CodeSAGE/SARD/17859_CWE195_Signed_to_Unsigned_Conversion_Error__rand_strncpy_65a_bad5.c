#ifndef VAR1
void FUN1(int VAR2);
void FUN2()
{
 int VAR2;
 void (*VAR3) (int) = VAR4;
 VAR2 = -1;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN3();
 FUN4(VAR2);
}
#endif
