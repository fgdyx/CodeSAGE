#ifndef VAR1
void FUN1(short VAR2);
void FUN2()
{
 short VAR2;
 void (*VAR3) (short) = VAR4;
 VAR2 = 0;
 /* FLAW: Use a negative number */
 VAR2 = -1;
 FUN3(VAR2);
}
#endif
