#ifndef VAR1
void FUN1(int VAR2);
void FUN2()
{
 int VAR2;
 void (*VAR3) (int) = VAR4;
 VAR2 = -1;
 /* POTENTIAL FLAW: Use an invalid index */
 VAR2 = -5;
 FUN3(VAR2);
}
#endif
