#ifndef VAR1
void FUN1(short VAR2);
void FUN2()
{
 short VAR2;
 VAR2 = 0;
 /* FLAW: Use a negative number */
 VAR2 = -1;
 FUN1(VAR2);
}
#endif
