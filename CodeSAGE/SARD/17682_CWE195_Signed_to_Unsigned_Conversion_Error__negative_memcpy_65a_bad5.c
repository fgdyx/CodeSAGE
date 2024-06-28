#ifndef VAR1
void FUN1(int VAR2);
void FUN2()
{
 int VAR2;
 void (*VAR3) (int) = VAR4;
 VAR2 = -1;
 /* FLAW: Use a negative number */
 VAR2 = -1;
 FUN3(VAR2);
}
#endif
